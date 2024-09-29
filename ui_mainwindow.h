/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpenDB;
    QAction *actQuit;
    QAction *actRecAppend;
    QAction *actRecInsert;
    QAction *actSubmit;
    QAction *actRevert;
    QAction *actRecDelete;
    QAction *actPhoto;
    QAction *actPhotoClear;
    QAction *actScan;
    QWidget *centralWidget;
    QSplitter *splitter;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBoxSort;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_14;
    QComboBox *comboFields;
    QRadioButton *radioBtnAscend;
    QRadioButton *radioBtnDescend;
    QGroupBox *groupBoxFilter;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioBtnMan;
    QRadioButton *radioBtnWoman;
    QRadioButton *radioBtnBoth;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *dbSpinEmpNo;
    QLabel *label_2;
    QLineEdit *dbEditName;
    QLabel *label_3;
    QComboBox *dbComboSex;
    QLabel *label_5;
    QDateEdit *dbEditBirth;
    QLabel *label_7;
    QComboBox *dbComboProvince;
    QLabel *label_6;
    QComboBox *dbComboDep;
    QLabel *label_12;
    QSpinBox *dbSpinSalary;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QLabel *dbLabPhoto;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *dbEditMemo;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(953, 551);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(10);
        MainWindow->setFont(font);
        actOpenDB = new QAction(MainWindow);
        actOpenDB->setObjectName("actOpenDB");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpenDB->setIcon(icon);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName("actQuit");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actRecAppend = new QAction(MainWindow);
        actRecAppend->setObjectName("actRecAppend");
        actRecAppend->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecAppend->setIcon(icon2);
        actRecInsert = new QAction(MainWindow);
        actRecInsert->setObjectName("actRecInsert");
        actRecInsert->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/306.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecInsert->setIcon(icon3);
        actSubmit = new QAction(MainWindow);
        actSubmit->setObjectName("actSubmit");
        actSubmit->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/save1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSubmit->setIcon(icon4);
        actRevert = new QAction(MainWindow);
        actRevert->setObjectName("actRevert");
        actRevert->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/ubdo.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRevert->setIcon(icon5);
        actRecDelete = new QAction(MainWindow);
        actRecDelete->setObjectName("actRecDelete");
        actRecDelete->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/delete1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecDelete->setIcon(icon6);
        actPhoto = new QAction(MainWindow);
        actPhoto->setObjectName("actPhoto");
        actPhoto->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/00.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        actPhoto->setIcon(icon7);
        actPhotoClear = new QAction(MainWindow);
        actPhotoClear->setObjectName("actPhotoClear");
        actPhotoClear->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPhotoClear->setIcon(icon8);
        actScan = new QAction(MainWindow);
        actScan->setObjectName("actScan");
        actScan->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/up.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actScan->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(10, 20, 916, 434));
        splitter->setOrientation(Qt::Horizontal);
        groupBox_6 = new QGroupBox(splitter);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_4 = new QVBoxLayout(groupBox_6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBoxSort = new QGroupBox(groupBox_6);
        groupBoxSort->setObjectName("groupBoxSort");
        groupBoxSort->setEnabled(false);
        horizontalLayout_2 = new QHBoxLayout(groupBoxSort);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_14 = new QLabel(groupBoxSort);
        label_14->setObjectName("label_14");

        horizontalLayout_2->addWidget(label_14);

        comboFields = new QComboBox(groupBoxSort);
        comboFields->setObjectName("comboFields");

        horizontalLayout_2->addWidget(comboFields);

        radioBtnAscend = new QRadioButton(groupBoxSort);
        radioBtnAscend->setObjectName("radioBtnAscend");
        radioBtnAscend->setChecked(true);

        horizontalLayout_2->addWidget(radioBtnAscend);

        radioBtnDescend = new QRadioButton(groupBoxSort);
        radioBtnDescend->setObjectName("radioBtnDescend");

        horizontalLayout_2->addWidget(radioBtnDescend);


        horizontalLayout_4->addWidget(groupBoxSort);

        groupBoxFilter = new QGroupBox(groupBox_6);
        groupBoxFilter->setObjectName("groupBoxFilter");
        groupBoxFilter->setEnabled(false);
        horizontalLayout_3 = new QHBoxLayout(groupBoxFilter);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        radioBtnMan = new QRadioButton(groupBoxFilter);
        radioBtnMan->setObjectName("radioBtnMan");

        horizontalLayout_3->addWidget(radioBtnMan);

        radioBtnWoman = new QRadioButton(groupBoxFilter);
        radioBtnWoman->setObjectName("radioBtnWoman");

        horizontalLayout_3->addWidget(radioBtnWoman);

        radioBtnBoth = new QRadioButton(groupBoxFilter);
        radioBtnBoth->setObjectName("radioBtnBoth");
        radioBtnBoth->setChecked(true);

        horizontalLayout_3->addWidget(radioBtnBoth);


        horizontalLayout_4->addWidget(groupBoxFilter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_4);

        tableView = new QTableView(groupBox_6);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(211, 249, 248);"));
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableView->horizontalHeader()->setDefaultSectionSize(80);
        tableView->verticalHeader()->setDefaultSectionSize(27);

        verticalLayout_4->addWidget(tableView);

        splitter->addWidget(groupBox_6);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        formLayout = new QFormLayout(groupBox_5);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox_5);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        dbSpinEmpNo = new QSpinBox(groupBox_5);
        dbSpinEmpNo->setObjectName("dbSpinEmpNo");
        dbSpinEmpNo->setMinimum(1);
        dbSpinEmpNo->setMaximum(10000);

        formLayout->setWidget(0, QFormLayout::FieldRole, dbSpinEmpNo);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        dbEditName = new QLineEdit(groupBox_5);
        dbEditName->setObjectName("dbEditName");

        formLayout->setWidget(1, QFormLayout::FieldRole, dbEditName);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        dbComboSex = new QComboBox(groupBox_5);
        dbComboSex->addItem(QString());
        dbComboSex->addItem(QString());
        dbComboSex->setObjectName("dbComboSex");

        formLayout->setWidget(2, QFormLayout::FieldRole, dbComboSex);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        dbEditBirth = new QDateEdit(groupBox_5);
        dbEditBirth->setObjectName("dbEditBirth");
        dbEditBirth->setCalendarPopup(true);
        dbEditBirth->setDate(QDate(2017, 2, 20));

        formLayout->setWidget(3, QFormLayout::FieldRole, dbEditBirth);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName("label_7");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        dbComboProvince = new QComboBox(groupBox_5);
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->setObjectName("dbComboProvince");
        dbComboProvince->setEditable(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, dbComboProvince);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        dbComboDep = new QComboBox(groupBox_5);
        dbComboDep->addItem(QString());
        dbComboDep->addItem(QString());
        dbComboDep->addItem(QString());
        dbComboDep->addItem(QString());
        dbComboDep->setObjectName("dbComboDep");
        dbComboDep->setEditable(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, dbComboDep);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName("label_12");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_12);

        dbSpinSalary = new QSpinBox(groupBox_5);
        dbSpinSalary->setObjectName("dbSpinSalary");
        dbSpinSalary->setMinimum(1000);
        dbSpinSalary->setMaximum(50000);
        dbSpinSalary->setSingleStep(100);
        dbSpinSalary->setValue(1000);

        formLayout->setWidget(6, QFormLayout::FieldRole, dbSpinSalary);


        horizontalLayout->addWidget(groupBox_5);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        dbLabPhoto = new QLabel(groupBox_3);
        dbLabPhoto->setObjectName("dbLabPhoto");
        dbLabPhoto->setMinimumSize(QSize(150, 0));
        dbLabPhoto->setMaximumSize(QSize(350, 16777215));

        verticalLayout->addWidget(dbLabPhoto);


        horizontalLayout->addWidget(groupBox_3);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        dbEditMemo = new QPlainTextEdit(groupBox_4);
        dbEditMemo->setObjectName("dbEditMemo");
        dbEditMemo->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(dbEditMemo);


        verticalLayout_3->addWidget(groupBox_4);

        splitter->addWidget(groupBox);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
#if QT_CONFIG(shortcut)
        label->setBuddy(dbSpinEmpNo);
        label_2->setBuddy(dbEditName);
        label_3->setBuddy(dbComboSex);
        label_5->setBuddy(dbEditBirth);
        label_7->setBuddy(dbComboProvince);
        label_6->setBuddy(dbComboDep);
        label_12->setBuddy(dbSpinSalary);
#endif // QT_CONFIG(shortcut)

        mainToolBar->addAction(actOpenDB);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actRecAppend);
        mainToolBar->addAction(actRecInsert);
        mainToolBar->addAction(actRecDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actPhoto);
        mainToolBar->addAction(actPhotoClear);
        mainToolBar->addAction(actScan);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actSubmit);
        mainToolBar->addAction(actRevert);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\201\214\345\267\245\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actOpenDB->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actOpenDB->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecAppend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
#if QT_CONFIG(tooltip)
        actRecAppend->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
#if QT_CONFIG(tooltip)
        actRecInsert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actSubmit->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actSubmit->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actRevert->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
#if QT_CONFIG(tooltip)
        actRevert->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        actRecDelete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actPhoto->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", nullptr));
#if QT_CONFIG(tooltip)
        actPhoto->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actPhotoClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
#if QT_CONFIG(tooltip)
        actPhotoClear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actScan->setText(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
#if QT_CONFIG(tooltip)
        actScan->setToolTip(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        groupBoxSort->setTitle(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\345\255\227\346\256\265", nullptr));
        radioBtnAscend->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        radioBtnDescend->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        groupBoxFilter->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\277\207\346\273\244", nullptr));
        radioBtnMan->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        radioBtnWoman->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        radioBtnBoth->setText(QCoreApplication::translate("MainWindow", "\345\205\250\346\230\276\347\244\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        groupBox_5->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\267\245  \345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\247\223  \345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\200\247  \345\210\253", nullptr));
        dbComboSex->setItemText(0, QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        dbComboSex->setItemText(1, QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        dbEditBirth->setDisplayFormat(QCoreApplication::translate("MainWindow", "yyyy-MM-dd", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\347\234\201\344\273\275", nullptr));
        dbComboProvince->setItemText(0, QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254", nullptr));
        dbComboProvince->setItemText(1, QCoreApplication::translate("MainWindow", "\344\270\212\346\265\267", nullptr));
        dbComboProvince->setItemText(2, QCoreApplication::translate("MainWindow", "\345\244\251\346\264\245", nullptr));
        dbComboProvince->setItemText(3, QCoreApplication::translate("MainWindow", "\351\207\215\345\272\206", nullptr));
        dbComboProvince->setItemText(4, QCoreApplication::translate("MainWindow", "\345\256\211\345\276\275", nullptr));
        dbComboProvince->setItemText(5, QCoreApplication::translate("MainWindow", "\346\262\263\345\214\227", nullptr));
        dbComboProvince->setItemText(6, QCoreApplication::translate("MainWindow", "\346\262\263\345\215\227", nullptr));
        dbComboProvince->setItemText(7, QCoreApplication::translate("MainWindow", "\346\271\226\345\214\227", nullptr));
        dbComboProvince->setItemText(8, QCoreApplication::translate("MainWindow", "\346\271\226\345\215\227", nullptr));
        dbComboProvince->setItemText(9, QCoreApplication::translate("MainWindow", "\345\261\261\350\245\277", nullptr));
        dbComboProvince->setItemText(10, QCoreApplication::translate("MainWindow", "\345\261\261\344\270\234", nullptr));
        dbComboProvince->setItemText(11, QCoreApplication::translate("MainWindow", "\351\231\225\350\245\277", nullptr));
        dbComboProvince->setItemText(12, QCoreApplication::translate("MainWindow", "\346\261\237\350\213\217", nullptr));
        dbComboProvince->setItemText(13, QCoreApplication::translate("MainWindow", "\346\261\237\350\245\277", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "\351\203\250  \351\227\250", nullptr));
        dbComboDep->setItemText(0, QCoreApplication::translate("MainWindow", "\351\224\200\345\224\256\351\203\250", nullptr));
        dbComboDep->setItemText(1, QCoreApplication::translate("MainWindow", "\346\212\200\346\234\257\351\203\250", nullptr));
        dbComboDep->setItemText(2, QCoreApplication::translate("MainWindow", "\347\224\237\344\272\247\351\203\250", nullptr));
        dbComboDep->setItemText(3, QCoreApplication::translate("MainWindow", "\350\241\214\346\224\277\351\203\250", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "\345\267\245  \350\265\204", nullptr));
        dbSpinSalary->setPrefix(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\347\205\247\347\211\207", nullptr));
        dbLabPhoto->setText(QCoreApplication::translate("MainWindow", "dbLabPhoto", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\345\244\207\346\263\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
