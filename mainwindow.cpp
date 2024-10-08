﻿#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
void MainWindow::openTable()
{
    //创建模型，打开数据库表格
    tabModel=new QSqlTableModel(this,DB);
    tabModel->setTable("employee");
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tabModel->setSort(tabModel->fieldIndex("empNo"),Qt::AscendingOrder);

    if(!(tabModel->select()))
    {
        QMessageBox::critical(this,"错误","数据库表格打开失败："+tabModel->lastError().text());
    }

    ui->statusBar->showMessage(QString("记录条数为：%1").arg(tabModel->rowCount()));

    //设置字段显示的标题
    tabModel->setHeaderData(tabModel->fieldIndex("empNo"),  Qt::Horizontal, "工号");
    tabModel->setHeaderData(tabModel->fieldIndex("Name"),   Qt::Horizontal, "姓名");
    tabModel->setHeaderData(tabModel->fieldIndex("Gender"), Qt::Horizontal, "性别");
    tabModel->setHeaderData(tabModel->fieldIndex("Birthday"),   Qt::Horizontal, "出生日期");
    tabModel->setHeaderData(tabModel->fieldIndex("Province"),   Qt::Horizontal, "省份");
    tabModel->setHeaderData(tabModel->fieldIndex("Department"), Qt::Horizontal, "部门");
    tabModel->setHeaderData(tabModel->fieldIndex("Salary"), Qt::Horizontal, "工资");
    //tabModel->setHeaderData(tabModel->fieldIndex("Memo"),Qt::Horizontal,"备注");
    //tabModel->setHeaderData(tabModel->fieldIndex("Photo"),Qt::Horizontal,"照片");

    //model/view
    selModel=new QItemSelectionModel(tabModel,this);

    ui->tableView->setModel(tabModel);
    ui->tableView->setSelectionModel(selModel);
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Memo"),true);
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Photo"),true);

    //代理
    QStringList strList;
    strList<<"男"<<"女";
    delegateSex.setItems(strList,false);
    ui->tableView->setItemDelegateForColumn(
                tabModel->fieldIndex("Gender"),&delegateSex);

    strList.clear();
    strList<<"技术部"<<"销售部"<<"市场部";
    delegateDepart.setItems(strList,false);
    ui->tableView->setItemDelegateForColumn(
                tabModel->fieldIndex("Department"),&delegateDepart);

    //字段与widget映射
    dataMapper=new QDataWidgetMapper(this);
    dataMapper->setModel(tabModel);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
    dataMapper->addMapping(ui->dbSpinEmpNo,tabModel->fieldIndex("embpNo"));
    dataMapper->addMapping(ui->dbEditName,tabModel->fieldIndex("Name"));
    dataMapper->addMapping(ui->dbComboSex,tabModel->fieldIndex("Gender"));
    dataMapper->addMapping(ui->dbEditBirth,tabModel->fieldIndex("Birthday"));
    dataMapper->addMapping(ui->dbComboProvince,tabModel->fieldIndex("Province"));
    dataMapper->addMapping(ui->dbComboDep,tabModel->fieldIndex("Department"));
    dataMapper->addMapping(ui->dbSpinSalary,tabModel->fieldIndex("Salary"));
    dataMapper->addMapping(ui->dbEditMemo,tabModel->fieldIndex("Memo"));
    dataMapper->toFirst();

    //action的状态
    ui->actOpenDB->setEnabled(false);
    ui->actRecAppend->setEnabled(true);
    ui->actRecAppend->setEnabled(true);
    ui->actRecInsert->setEnabled(true);
    ui->actRecDelete->setEnabled(true);
    ui->actScan->setEnabled(true);

    ui->groupBoxSort->setEnabled(true);
    ui->groupBoxFilter->setEnabled(true);

    //获取字段名更新combobox
    QSqlRecord emptyRec=tabModel->record();
    for(int i=0;i<emptyRec.count();++i)
        ui->comboFields->addItem(emptyRec.fieldName(i));

    connect(selModel,&QItemSelectionModel::currentChanged,this,&MainWindow::do_currentChanged);
    connect(selModel,&QItemSelectionModel::currentRowChanged,this,&MainWindow::do_currentRowChanged);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setCentralWidget(ui->splitter);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);
}
// 析构函数，释放界面资源
MainWindow::~MainWindow()
{
    delete ui;
}

// 打开数据库文件
void MainWindow::on_actOpenDB_triggered()
{
    QString aFile=QFileDialog::getOpenFileName(this,"选择文件","","SQLite数据库(*.db3)");
    if(aFile.isEmpty())
        return;
    // 创建并配置一个新的数据库连接
    DB=QSqlDatabase::addDatabase("QSQLITE"); //添加驱动
    DB.setDatabaseName(aFile);
    if(!DB.open())
        QMessageBox::warning(this,"错误","数据库打开失败");
    else
        openTable(); //打开数据库表格
}

// 打开数据库文件
void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(current);Q_UNUSED(previous);
    ui->actSubmit->setEnabled(tabModel->isDirty());
    ui->actRevert->setEnabled(tabModel->isDirty());
}

// 当前行变化时更新控件状态
void MainWindow::do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    if(!current.isValid())
    {
        ui->dbLabPhoto->clear();
        return;
    }

    ui->actRecDelete->setEnabled(true);
    ui->actPhoto->setEnabled(true);
    ui->actPhotoClear->setEnabled(true);

    //映射到widget
    dataMapper->setCurrentIndex(current.row());

    QSqlRecord curRec=tabModel->record(current.row());
    if(curRec.isNull("Photo"))
        ui->dbLabPhoto->clear();
    else
    {
        QPixmap pic;
        pic.loadFromData(curRec.value("Photo").toByteArray());
        ui->dbLabPhoto->setPixmap(pic.scaledToWidth(ui->dbLabPhoto->size().width()));
    }
}

// 在表格末尾插入新记录
void MainWindow::on_actRecAppend_triggered()
{
    QSqlRecord rec=tabModel->record();
    rec.setValue(tabModel->fieldIndex("Gender"),"男");
    tabModel->insertRecord(tabModel->rowCount(),rec);

    selModel->clearSelection();
    selModel->setCurrentIndex(tabModel->index(tabModel->rowCount()-1,1),
                              QItemSelectionModel::Select);
    ui->statusBar->showMessage(QString("记录条数为：%1").arg(tabModel->rowCount()));
}

// 在当前行前插入记录
void MainWindow::on_actRecInsert_triggered()
{
    QModelIndex curIndex=ui->tableView->currentIndex();
    QSqlRecord rec=tabModel->record();
    rec.setValue(tabModel->fieldIndex("Gender"),"男");
    tabModel->insertRecord(curIndex.row(),rec);

    selModel->clearSelection();
    selModel->setCurrentIndex(curIndex,
                              QItemSelectionModel::Select);
    ui->statusBar->showMessage(QString("记录条数为：%1").arg(tabModel->rowCount()));
}

// 删除当前选中的记录
void MainWindow::on_actRecDelete_triggered()
{
    QModelIndex curIndex=ui->tableView->currentIndex();
    tabModel->removeRow(curIndex.row());
    ui->statusBar->showMessage(QString("记录条数为：%1").arg(tabModel->rowCount()));
}

// 为当前记录附加一张图片
void MainWindow::on_actPhoto_triggered()
{
    QString aFile=QFileDialog::getOpenFileName(this,"选择一个图片","","招聘(*.jpg)");
    if(aFile.isEmpty())
        return;

    QFile *file=new QFile(aFile);
    if(file->open(QIODevice::ReadOnly))
    {
        QByteArray data=file->readAll();
        file->close();
        delete file;

        QSqlRecord curRec=tabModel->record(selModel->currentIndex().row());
        curRec.setValue("Photo",data);
        tabModel->setRecord(selModel->currentIndex().row(),curRec);

        QPixmap pix;
        pix.load(aFile);
        ui->dbLabPhoto->setPixmap(pix.scaledToWidth(ui->dbLabPhoto->width()));
    }
}

// 清除当前记录的照片
void MainWindow::on_actPhotoClear_triggered()
{
    QSqlRecord curRec=tabModel->record(selModel->currentIndex().row());
    curRec.setNull("Photo");
    tabModel->setRecord(selModel->currentIndex().row(),curRec);
    ui->dbLabPhoto->clear();
}

// 给所有记录涨工资
void MainWindow::on_actScan_triggered()
{
    if(tabModel->rowCount()==0)
        return;

    for(int i=0;i<tabModel->rowCount();++i)
    {
        QSqlRecord aRec=tabModel->record(i);
        aRec.setValue("Salary",aRec.value("Salary").toFloat()*1.1);
        tabModel->setRecord(i,aRec);
    }

    if(tabModel->submitAll())
        QMessageBox::information(this,"消息","涨工资执行完毕！");
}

// 提交所有更改到数据库
void MainWindow::on_actSubmit_triggered()
{
    bool res=tabModel->submitAll();
    if(!res)
        QMessageBox::information(this,"消息","数据库保存失败\n"+tabModel->lastError().text());
    else{
        ui->actSubmit->setEnabled(false);
        ui->actRevert->setEnabled(false);
    }
    ui->statusBar->showMessage(QString("记录条数为：%1").arg(tabModel->rowCount()));
}

// 撤销所有更改
void MainWindow::on_actRevert_triggered()
{
    tabModel->revertAll();
    ui->actSubmit->setEnabled(false);
    ui->actRevert->setEnabled(false);
    ui->statusBar->showMessage(QString("记录条数为：%1").arg(tabModel->rowCount()));
}

// 排序字段变化时重新排序
void MainWindow::on_comboFields_currentIndexChanged(int index)
{
    if(ui->radioBtnAscend->isChecked())
        tabModel->setSort(index,Qt::AscendingOrder);
    else
        tabModel->setSort(index,Qt::DescendingOrder);

    tabModel->select();
}

// 升序排序
void MainWindow::on_radioBtnAscend_clicked()
{
    tabModel->sort(ui->comboFields->currentIndex(),Qt::AscendingOrder);
}

// 降序排序
void MainWindow::on_radioBtnDescend_clicked()
{
    tabModel->sort(ui->comboFields->currentIndex(),Qt::DescendingOrder);
}

// 仅显示男性记录
void MainWindow::on_radioBtnMan_clicked()
{
    tabModel->setFilter("Gender='男'");
    ui->statusBar->showMessage(QString("记录条数为：%1").arg(tabModel->rowCount()));
}

// 仅显示女性记录
void MainWindow::on_radioBtnWoman_clicked()
{
    tabModel->setFilter("Gender='女'");
    ui->statusBar->showMessage(QString("记录条数为：%1").arg(tabModel->rowCount()));
}

// 显示所有记录
void MainWindow::on_radioBtnBoth_clicked()
{
    tabModel->setFilter("");
    ui->statusBar->showMessage(QString("记录条数为：%1").arg(tabModel->rowCount()));
}

