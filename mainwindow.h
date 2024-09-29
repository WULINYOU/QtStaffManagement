// 防止头文件被重复包含
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// 包含 Qt SQL 模块的头文件
#include <QtSql>
// 包含 QDataWidgetMapper 类的头文件
#include <QDataWidgetMapper>
// 包含自定义的组合框代理类
#include "tcomboboxdelegate.h"

// 包含 QMainWindow 类的头文件
#include <QMainWindow>

// 开始 Qt 命名空间
QT_BEGIN_NAMESPACE
// 声明 UI 类
namespace Ui { class MainWindow; }
// 结束 Qt 命名空间
QT_END_NAMESPACE

// 定义 MainWindow 类，继承自 QMainWindow
class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    // 数据库对象
    QSqlDatabase DB;
    // 表模型对象
    QSqlTableModel *tabModel;
    // 项选择模型对象
    QItemSelectionModel *selModel;

    // 性别组合框代理对象
    TComboBoxDelegate delegateSex;
    // 部门组合框代理对象
    TComboBoxDelegate delegateDepart;
    // 数据小部件映射器对象
    QDataWidgetMapper *dataMapper;

    // 打开表格的方法
    void openTable();

public:
    // 构造函数
    MainWindow(QWidget *parent = nullptr);
    // 析构函数
    ~MainWindow();

private slots:
    // 打开数据库文件的槽函数
    void on_actOpenDB_triggered();
    // 当当前项变化时触发的槽函数
    void do_currentChanged(const QModelIndex &current, const QModelIndex &previous);
    // 当当前行变化时触发的槽函数
    void do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);
    // 在表格末尾插入新记录的槽函数
    void on_actRecAppend_triggered();
    // 在当前行前插入新记录的槽函数
    void on_actRecInsert_triggered();
    // 删除当前选中的记录的槽函数
    void on_actRecDelete_triggered();
    // 为当前记录附加一张图片的槽函数
    void on_actPhoto_triggered();
    // 清除当前记录的照片的槽函数
    void on_actPhotoClear_triggered();
    // 给所有记录涨工资的槽函数
    void on_actScan_triggered();
    // 提交所有更改到数据库的槽函数
    void on_actSubmit_triggered();
    // 撤销所有更改的槽函数
    void on_actRevert_triggered();
    // 当排序字段变化时触发的槽函数
    void on_comboFields_currentIndexChanged(int index);
    // 当升序按钮点击时触发的槽函数
    void on_radioBtnAscend_clicked();
    // 当降序按钮点击时触发的槽函数
    void on_radioBtnDescend_clicked();
    // 当仅显示男性记录按钮点击时触发的槽函数
    void on_radioBtnMan_clicked();
    // 当仅显示女性记录按钮点击时触发的槽函数
    void on_radioBtnWoman_clicked();
    // 当显示所有记录按钮点击时触发的槽函数
    void on_radioBtnBoth_clicked();

private:
    // UI 类的对象指针
    Ui::MainWindow *ui;
};

// 结束防止重复包含的宏定义
#endif // MAINWINDOW_H
