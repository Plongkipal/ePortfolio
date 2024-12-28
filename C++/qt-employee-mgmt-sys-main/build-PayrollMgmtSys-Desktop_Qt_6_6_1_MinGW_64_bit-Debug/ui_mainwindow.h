/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *leftWidget;
    QPushButton *searchButton;
    QPushButton *aboutButton;
    QPushButton *addEmpButton;
    QPushButton *updateEmpButton;
    QPushButton *deleteEmpButton;
    QLabel *label_9;
    QLabel *label_11;
    QWidget *topWidget;
    QPushButton *closeButton;
    QPushButton *minimizeButton;
    QStackedWidget *searchStackedWidget;
    QWidget *searchWidget;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *empLabel;
    QLabel *deptLabel;
    QLabel *label_10;
    QLabel *designLabel;
    QLabel *label_12;
    QLineEdit *searchTextBox;
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label_8;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *deptLabel_2;
    QWidget *attendanceWidget;
    QWidget *paymentWidget;
    QWidget *addEmpWidget;
    QLineEdit *empName;
    QLabel *id;
    QLabel *label_18;
    QLabel *id_3;
    QDateEdit *empDOB;
    QLabel *id_4;
    QComboBox *empGender;
    QLabel *id_5;
    QLineEdit *empEmail;
    QLineEdit *empPhone;
    QLabel *id_6;
    QLineEdit *empAddress;
    QLabel *id_7;
    QLabel *id_8;
    QLabel *id_9;
    QLineEdit *empID;
    QComboBox *empDept;
    QDateEdit *empDOJ;
    QLabel *id_12;
    QLabel *label_19;
    QComboBox *empDesig;
    QLabel *id_14;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QWidget *updateEmpWidget;
    QLineEdit *updateEmpName;
    QLabel *id_15;
    QLabel *id_16;
    QLabel *id_17;
    QComboBox *updateEmpGender;
    QLabel *id_19;
    QLabel *id_18;
    QLineEdit *updateEmpPhone;
    QLineEdit *updateEmpEmail;
    QLineEdit *updateEmpAddress;
    QLabel *id_20;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_20;
    QDateEdit *updateEmpDOB;
    QTableView *updateTableView;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *updateEmpID;
    QWidget *deleteEmpWidget;
    QTableView *deleteTableView;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1080, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setStyleSheet(QString::fromUtf8("QComboBox::down-arrow\n"
"{	\n"
"	image:url(':/Images/sort.png');\n"
"}\n"
"QComboBox::drop-down\n"
"{	\n"
"	border:none;	\n"
"	color:white;		\n"
"		width:20px;	\n"
"	padding:6px4px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"	selection-background-color:dodgerblue;\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"	padding-left:6px;\n"
"	border:none;\n"
"	background:white;\n"
"	color:black;\n"
"	width:30px;		\n"
"}\n"
"\n"
"QDateEdit\n"
"{\n"
"	padding-left:8px;\n"
"	border:none;\n"
"}\n"
"\n"
"QDateEdit::down-arrow\n"
"{\n"
"	image:url(':/Images/cal.png');	\n"
"}\n"
"QDateEdit::drop-down\n"
"{	\n"
"	border:none;	\n"
"	color:white;		\n"
"	width:20px;	\n"
"	height:20px;\n"
"	padding:6px 6px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	border:none;\n"
"	color:black;\n"
"	background:white;\n"
"	padding-left:6px;\n"
"}"));
        leftWidget = new QWidget(centralWidget);
        leftWidget->setObjectName("leftWidget");
        leftWidget->setGeometry(QRect(0, 0, 260, 600));
        leftWidget->setStyleSheet(QString::fromUtf8("#leftWidget\n"
"{\n"
"	width:260px;\n"
"	background:#1F1F1F;\n"
"}"));
        searchButton = new QPushButton(leftWidget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(0, 50, 260, 44));
        QFont font;
        font.setPointSize(11);
        searchButton->setFont(font);
        searchButton->setStyleSheet(QString::fromUtf8("#searchButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"	border:none;\n"
"	border-left:6px solid dodgerblue;\n"
"	color:white;	\n"
"	background:#333333;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/icons8_Find_User_Male_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);
        searchButton->setIconSize(QSize(32, 32));
        aboutButton = new QPushButton(leftWidget);
        aboutButton->setObjectName("aboutButton");
        aboutButton->setGeometry(QRect(0, 510, 260, 44));
        aboutButton->setFont(font);
        aboutButton->setStyleSheet(QString::fromUtf8("#aboutButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#aboutButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;	\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333333;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/icons8_Money_50px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutButton->setIcon(icon1);
        aboutButton->setIconSize(QSize(32, 32));
        addEmpButton = new QPushButton(leftWidget);
        addEmpButton->setObjectName("addEmpButton");
        addEmpButton->setGeometry(QRect(0, 100, 260, 44));
        addEmpButton->setFont(font);
        addEmpButton->setStyleSheet(QString::fromUtf8("#addEmpButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#addEmpButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/icons8_Add_User_Male_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        addEmpButton->setIcon(icon2);
        addEmpButton->setIconSize(QSize(32, 32));
        updateEmpButton = new QPushButton(leftWidget);
        updateEmpButton->setObjectName("updateEmpButton");
        updateEmpButton->setGeometry(QRect(0, 150, 260, 44));
        updateEmpButton->setFont(font);
        updateEmpButton->setStyleSheet(QString::fromUtf8("#updateEmpButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#updateEmpButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/icons8_Registration_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateEmpButton->setIcon(icon3);
        updateEmpButton->setIconSize(QSize(32, 32));
        deleteEmpButton = new QPushButton(leftWidget);
        deleteEmpButton->setObjectName("deleteEmpButton");
        deleteEmpButton->setGeometry(QRect(0, 200, 260, 44));
        deleteEmpButton->setFont(font);
        deleteEmpButton->setStyleSheet(QString::fromUtf8("#deleteEmpButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#deleteEmpButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/icons8_Remove_User_Male_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteEmpButton->setIcon(icon4);
        deleteEmpButton->setIconSize(QSize(32, 32));
        label_9 = new QLabel(leftWidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 560, 101, 21));
        label_11 = new QLabel(leftWidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(-10, 10, 291, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_11->setFont(font1);
        topWidget = new QWidget(centralWidget);
        topWidget->setObjectName("topWidget");
        topWidget->setGeometry(QRect(260, 0, 821, 40));
        topWidget->setStyleSheet(QString::fromUtf8("#topWidget\n"
"{\n"
"	background:#1F1F1F;\n"
"}"));
        closeButton = new QPushButton(topWidget);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(780, 0, 40, 40));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        closeButton->setFont(font2);
        closeButton->setCursor(QCursor(Qt::PointingHandCursor));
        closeButton->setStyleSheet(QString::fromUtf8("#closeButton\n"
"{\n"
"	border:none;\n"
"color:white;\n"
"}\n"
"\n"
"#closeButton:hover\n"
"{\n"
"	border:none;\n"
"color:#EB0000;\n"
"}"));
        minimizeButton = new QPushButton(topWidget);
        minimizeButton->setObjectName("minimizeButton");
        minimizeButton->setGeometry(QRect(750, 0, 30, 40));
        minimizeButton->setFont(font2);
        minimizeButton->setCursor(QCursor(Qt::PointingHandCursor));
        minimizeButton->setStyleSheet(QString::fromUtf8("#minimizeButton\n"
"{\n"
"	border:none;\n"
"	color:white;\n"
"}"));
        searchStackedWidget = new QStackedWidget(centralWidget);
        searchStackedWidget->setObjectName("searchStackedWidget");
        searchStackedWidget->setGeometry(QRect(260, 40, 820, 561));
        searchStackedWidget->setStyleSheet(QString::fromUtf8("#addEmpWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        searchWidget = new QWidget();
        searchWidget->setObjectName("searchWidget");
        searchWidget->setStyleSheet(QString::fromUtf8("#searchWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}"));
        label_4 = new QLabel(searchWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(36, 30, 238, 136));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Images/empcardbg.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(searchWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(296, 30, 238, 136));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Images/attendancebg.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(searchWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(556, 30, 238, 136));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Images/absentbg.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(searchWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 50, 221, 31));
        label_7->setFont(font1);
        empLabel = new QLabel(searchWidget);
        empLabel->setObjectName("empLabel");
        empLabel->setGeometry(QRect(60, 80, 191, 61));
        QFont font3;
        font3.setPointSize(28);
        font3.setBold(true);
        empLabel->setFont(font3);
        empLabel->setStyleSheet(QString::fromUtf8("#empLabel\n"
"{\n"
"	color:white;\n"
"	font-weight:bold;\n"
"}"));
        deptLabel = new QLabel(searchWidget);
        deptLabel->setObjectName("deptLabel");
        deptLabel->setGeometry(QRect(310, 80, 191, 61));
        deptLabel->setFont(font3);
        deptLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        label_10 = new QLabel(searchWidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(300, 50, 221, 31));
        label_10->setFont(font1);
        designLabel = new QLabel(searchWidget);
        designLabel->setObjectName("designLabel");
        designLabel->setGeometry(QRect(570, 80, 191, 61));
        designLabel->setFont(font3);
        designLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        label_12 = new QLabel(searchWidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(570, 50, 211, 31));
        label_12->setFont(font1);
        searchTextBox = new QLineEdit(searchWidget);
        searchTextBox->setObjectName("searchTextBox");
        searchTextBox->setGeometry(QRect(36, 190, 711, 32));
        QFont font4;
        font4.setPointSize(10);
        searchTextBox->setFont(font4);
        searchTextBox->setStyleSheet(QString::fromUtf8("#searchTextBox\n"
"{\n"
"	padding-left:8px;\n"
"	border:none;\n"
"}"));
        pushButton = new QPushButton(searchWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(745, 190, 40, 32));
        QFont font5;
        font5.setPointSize(12);
        pushButton->setFont(font5);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"	border:none;\n"
"	color:black;\n"
"background:white;\n"
"}\n"
"#pushButton:hover\n"
"{\n"
"	border:none;\n"
"	color:red;\n"
"background:white;\n"
"}"));
        tableView = new QTableView(searchWidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(36, 259, 750, 271));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setFocusPolicy(Qt::NoFocus);
        tableView->setAutoFillBackground(false);
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setTabKeyNavigation(false);
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setDragDropOverwriteMode(false);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setTextElideMode(Qt::ElideNone);
        tableView->setShowGrid(false);
        tableView->setGridStyle(Qt::NoPen);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setMinimumSectionSize(30);
        tableView->horizontalHeader()->setDefaultSectionSize(120);
        label_8 = new QLabel(searchWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(36, 225, 135, 34));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        label_8->setFont(font6);
        label_8->setStyleSheet(QString::fromUtf8("#label_8\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        label_21 = new QLabel(searchWidget);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(170, 225, 120, 34));
        label_21->setFont(font6);
        label_21->setStyleSheet(QString::fromUtf8("#label_21\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:5px;\n"
"}"));
        label_22 = new QLabel(searchWidget);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(290, 225, 125, 34));
        label_22->setFont(font6);
        label_22->setStyleSheet(QString::fromUtf8("#label_22\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:3px;\n"
"}"));
        label_23 = new QLabel(searchWidget);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(413, 225, 120, 34));
        label_23->setFont(font6);
        label_23->setStyleSheet(QString::fromUtf8("#label_23\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        label_24 = new QLabel(searchWidget);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(533, 225, 122, 34));
        label_24->setFont(font6);
        label_24->setStyleSheet(QString::fromUtf8("#label_24\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        label_25 = new QLabel(searchWidget);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(655, 225, 130, 34));
        label_25->setFont(font6);
        label_25->setStyleSheet(QString::fromUtf8("#label_25\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        deptLabel_2 = new QLabel(searchWidget);
        deptLabel_2->setObjectName("deptLabel_2");
        deptLabel_2->setGeometry(QRect(380, 80, 81, 61));
        deptLabel_2->setFont(font3);
        deptLabel_2->setStyleSheet(QString::fromUtf8("color:white;"));
        searchStackedWidget->addWidget(searchWidget);
        attendanceWidget = new QWidget();
        attendanceWidget->setObjectName("attendanceWidget");
        attendanceWidget->setStyleSheet(QString::fromUtf8("#attendanceWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}"));
        searchStackedWidget->addWidget(attendanceWidget);
        paymentWidget = new QWidget();
        paymentWidget->setObjectName("paymentWidget");
        searchStackedWidget->addWidget(paymentWidget);
        addEmpWidget = new QWidget();
        addEmpWidget->setObjectName("addEmpWidget");
        empName = new QLineEdit(addEmpWidget);
        empName->setObjectName("empName");
        empName->setGeometry(QRect(30, 90, 240, 32));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial")});
        font7.setPointSize(10);
        empName->setFont(font7);
        empName->setStyleSheet(QString::fromUtf8("#empName\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id = new QLabel(addEmpWidget);
        id->setObjectName("id");
        id->setGeometry(QRect(30, 55, 151, 31));
        id->setFont(font6);
        label_18 = new QLabel(addEmpWidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(30, 20, 241, 31));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Arial")});
        font8.setPointSize(12);
        font8.setBold(true);
        label_18->setFont(font8);
        id_3 = new QLabel(addEmpWidget);
        id_3->setObjectName("id_3");
        id_3->setGeometry(QRect(550, 65, 141, 21));
        id_3->setFont(font6);
        empDOB = new QDateEdit(addEmpWidget);
        empDOB->setObjectName("empDOB");
        empDOB->setGeometry(QRect(550, 90, 240, 32));
        empDOB->setFont(font7);
        empDOB->setStyleSheet(QString::fromUtf8("#empDOB\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empDOB->setCurrentSection(QDateTimeEdit::YearSection);
        id_4 = new QLabel(addEmpWidget);
        id_4->setObjectName("id_4");
        id_4->setGeometry(QRect(290, 60, 141, 21));
        id_4->setFont(font6);
        empGender = new QComboBox(addEmpWidget);
        empGender->addItem(QString());
        empGender->addItem(QString());
        empGender->addItem(QString());
        empGender->setObjectName("empGender");
        empGender->setGeometry(QRect(290, 90, 240, 32));
        empGender->setFont(font7);
        empGender->setStyleSheet(QString::fromUtf8("#empGender\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_5 = new QLabel(addEmpWidget);
        id_5->setObjectName("id_5");
        id_5->setGeometry(QRect(30, 210, 141, 21));
        id_5->setFont(font6);
        empEmail = new QLineEdit(addEmpWidget);
        empEmail->setObjectName("empEmail");
        empEmail->setGeometry(QRect(30, 240, 240, 32));
        empEmail->setFont(font7);
        empEmail->setStyleSheet(QString::fromUtf8("#empEmail\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empPhone = new QLineEdit(addEmpWidget);
        empPhone->setObjectName("empPhone");
        empPhone->setGeometry(QRect(290, 240, 240, 32));
        empPhone->setFont(font7);
        empPhone->setStyleSheet(QString::fromUtf8("#empPhone\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_6 = new QLabel(addEmpWidget);
        id_6->setObjectName("id_6");
        id_6->setGeometry(QRect(290, 210, 141, 21));
        id_6->setFont(font6);
        empAddress = new QLineEdit(addEmpWidget);
        empAddress->setObjectName("empAddress");
        empAddress->setGeometry(QRect(30, 160, 761, 32));
        empAddress->setFont(font7);
        empAddress->setStyleSheet(QString::fromUtf8("#empAddress\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_7 = new QLabel(addEmpWidget);
        id_7->setObjectName("id_7");
        id_7->setGeometry(QRect(30, 130, 141, 21));
        id_7->setFont(font6);
        id_8 = new QLabel(addEmpWidget);
        id_8->setObjectName("id_8");
        id_8->setGeometry(QRect(290, 415, 141, 21));
        id_8->setFont(font6);
        id_9 = new QLabel(addEmpWidget);
        id_9->setObjectName("id_9");
        id_9->setGeometry(QRect(30, 415, 141, 21));
        id_9->setFont(font6);
        empID = new QLineEdit(addEmpWidget);
        empID->setObjectName("empID");
        empID->setEnabled(false);
        empID->setGeometry(QRect(30, 440, 201, 32));
        empID->setFont(font7);
        empID->setStyleSheet(QString::fromUtf8("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empDept = new QComboBox(addEmpWidget);
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->setObjectName("empDept");
        empDept->setGeometry(QRect(30, 365, 240, 32));
        empDept->setFont(font7);
        empDept->setStyleSheet(QString::fromUtf8("#empDept\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empDOJ = new QDateEdit(addEmpWidget);
        empDOJ->setObjectName("empDOJ");
        empDOJ->setGeometry(QRect(290, 440, 240, 32));
        empDOJ->setFont(font7);
        empDOJ->setStyleSheet(QString::fromUtf8("#empDOJ\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_12 = new QLabel(addEmpWidget);
        id_12->setObjectName("id_12");
        id_12->setGeometry(QRect(30, 340, 141, 21));
        id_12->setFont(font6);
        label_19 = new QLabel(addEmpWidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(30, 295, 241, 31));
        label_19->setFont(font8);
        empDesig = new QComboBox(addEmpWidget);
        empDesig->addItem(QString());
        empDesig->addItem(QString());
        empDesig->setObjectName("empDesig");
        empDesig->setGeometry(QRect(290, 365, 240, 32));
        empDesig->setFont(font7);
        empDesig->setStyleSheet(QString::fromUtf8("#empDesig\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_14 = new QLabel(addEmpWidget);
        id_14->setObjectName("id_14");
        id_14->setGeometry(QRect(290, 340, 141, 21));
        id_14->setFont(font6);
        pushButton_6 = new QPushButton(addEmpWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(470, 500, 150, 32));
        pushButton_6->setFont(font4);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setFocusPolicy(Qt::TabFocus);
        pushButton_6->setStyleSheet(QString::fromUtf8("#pushButton_6\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_6:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        pushButton_5 = new QPushButton(addEmpWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(640, 500, 150, 32));
        pushButton_5->setFont(font4);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setFocusPolicy(Qt::TabFocus);
        pushButton_5->setStyleSheet(QString::fromUtf8("#pushButton_5\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_5:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        pushButton_2 = new QPushButton(addEmpWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 440, 41, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"	border:none;\n"
"	background:white;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/id_card.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(32, 32));
        searchStackedWidget->addWidget(addEmpWidget);
        updateEmpWidget = new QWidget();
        updateEmpWidget->setObjectName("updateEmpWidget");
        updateEmpWidget->setStyleSheet(QString::fromUtf8("#updateEmpWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        updateEmpName = new QLineEdit(updateEmpWidget);
        updateEmpName->setObjectName("updateEmpName");
        updateEmpName->setGeometry(QRect(410, 90, 381, 32));
        updateEmpName->setFont(font7);
        updateEmpName->setStyleSheet(QString::fromUtf8(""));
        id_15 = new QLabel(updateEmpWidget);
        id_15->setObjectName("id_15");
        id_15->setGeometry(QRect(410, 65, 141, 21));
        id_15->setFont(font6);
        id_16 = new QLabel(updateEmpWidget);
        id_16->setObjectName("id_16");
        id_16->setGeometry(QRect(410, 280, 141, 21));
        id_16->setFont(font6);
        id_17 = new QLabel(updateEmpWidget);
        id_17->setObjectName("id_17");
        id_17->setGeometry(QRect(410, 140, 141, 21));
        id_17->setFont(font6);
        updateEmpGender = new QComboBox(updateEmpWidget);
        updateEmpGender->addItem(QString());
        updateEmpGender->addItem(QString());
        updateEmpGender->addItem(QString());
        updateEmpGender->setObjectName("updateEmpGender");
        updateEmpGender->setGeometry(QRect(410, 170, 180, 32));
        updateEmpGender->setFont(font7);
        updateEmpGender->setStyleSheet(QString::fromUtf8("#empDesig\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_19 = new QLabel(updateEmpWidget);
        id_19->setObjectName("id_19");
        id_19->setGeometry(QRect(610, 140, 141, 21));
        id_19->setFont(font6);
        id_18 = new QLabel(updateEmpWidget);
        id_18->setObjectName("id_18");
        id_18->setGeometry(QRect(410, 210, 141, 21));
        id_18->setFont(font6);
        updateEmpPhone = new QLineEdit(updateEmpWidget);
        updateEmpPhone->setObjectName("updateEmpPhone");
        updateEmpPhone->setGeometry(QRect(410, 240, 381, 32));
        updateEmpPhone->setFont(font7);
        updateEmpPhone->setStyleSheet(QString::fromUtf8(""));
        updateEmpEmail = new QLineEdit(updateEmpWidget);
        updateEmpEmail->setObjectName("updateEmpEmail");
        updateEmpEmail->setGeometry(QRect(410, 310, 381, 32));
        updateEmpEmail->setFont(font7);
        updateEmpEmail->setStyleSheet(QString::fromUtf8(""));
        updateEmpAddress = new QLineEdit(updateEmpWidget);
        updateEmpAddress->setObjectName("updateEmpAddress");
        updateEmpAddress->setGeometry(QRect(410, 380, 381, 32));
        updateEmpAddress->setFont(font7);
        updateEmpAddress->setStyleSheet(QString::fromUtf8(""));
        id_20 = new QLabel(updateEmpWidget);
        id_20->setObjectName("id_20");
        id_20->setGeometry(QRect(410, 350, 141, 21));
        id_20->setFont(font6);
        pushButton_7 = new QPushButton(updateEmpWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(640, 460, 150, 32));
        pushButton_7->setFont(font4);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setFocusPolicy(Qt::TabFocus);
        pushButton_7->setStyleSheet(QString::fromUtf8("#pushButton_7\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_7:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        pushButton_8 = new QPushButton(updateEmpWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(470, 460, 150, 32));
        pushButton_8->setFont(font4);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setFocusPolicy(Qt::TabFocus);
        pushButton_8->setStyleSheet(QString::fromUtf8("#pushButton_8\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_8:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        label_20 = new QLabel(updateEmpWidget);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(410, 23, 141, 31));
        label_20->setFont(font8);
        updateEmpDOB = new QDateEdit(updateEmpWidget);
        updateEmpDOB->setObjectName("updateEmpDOB");
        updateEmpDOB->setGeometry(QRect(610, 170, 181, 32));
        updateEmpDOB->setFont(font7);
        updateEmpDOB->setStyleSheet(QString::fromUtf8("#updateEmpDOB\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        updateTableView = new QTableView(updateEmpWidget);
        updateTableView->setObjectName("updateTableView");
        updateTableView->setGeometry(QRect(30, 65, 361, 465));
        sizePolicy.setHeightForWidth(updateTableView->sizePolicy().hasHeightForWidth());
        updateTableView->setSizePolicy(sizePolicy);
        updateTableView->setFocusPolicy(Qt::NoFocus);
        updateTableView->setAutoFillBackground(false);
        updateTableView->setFrameShape(QFrame::NoFrame);
        updateTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        updateTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        updateTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        updateTableView->setTabKeyNavigation(false);
        updateTableView->setProperty("showDropIndicator", QVariant(false));
        updateTableView->setDragDropOverwriteMode(false);
        updateTableView->setAlternatingRowColors(true);
        updateTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        updateTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        updateTableView->setTextElideMode(Qt::ElideNone);
        updateTableView->setShowGrid(false);
        updateTableView->setGridStyle(Qt::NoPen);
        updateTableView->setCornerButtonEnabled(false);
        updateTableView->horizontalHeader()->setVisible(false);
        updateTableView->horizontalHeader()->setMinimumSectionSize(30);
        updateTableView->horizontalHeader()->setDefaultSectionSize(120);
        label_26 = new QLabel(updateEmpWidget);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(30, 30, 131, 34));
        label_26->setFont(font6);
        label_26->setStyleSheet(QString::fromUtf8("#label_26\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        label_27 = new QLabel(updateEmpWidget);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(160, 30, 120, 34));
        label_27->setFont(font6);
        label_27->setStyleSheet(QString::fromUtf8("#label_27\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:5px;\n"
"}"));
        label_28 = new QLabel(updateEmpWidget);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(280, 30, 111, 34));
        label_28->setFont(font6);
        label_28->setStyleSheet(QString::fromUtf8("#label_28\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:3px;\n"
"}"));
        updateEmpID = new QLabel(updateEmpWidget);
        updateEmpID->setObjectName("updateEmpID");
        updateEmpID->setGeometry(QRect(485, 23, 191, 31));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Arial")});
        font9.setPointSize(11);
        font9.setItalic(true);
        updateEmpID->setFont(font9);
        updateEmpID->setStyleSheet(QString::fromUtf8("color:white;\n"
"font-style:italic;"));
        searchStackedWidget->addWidget(updateEmpWidget);
        deleteEmpWidget = new QWidget();
        deleteEmpWidget->setObjectName("deleteEmpWidget");
        deleteEmpWidget->setStyleSheet(QString::fromUtf8("#deleteEmpWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        deleteTableView = new QTableView(deleteEmpWidget);
        deleteTableView->setObjectName("deleteTableView");
        deleteTableView->setGeometry(QRect(33, 65, 755, 426));
        sizePolicy.setHeightForWidth(deleteTableView->sizePolicy().hasHeightForWidth());
        deleteTableView->setSizePolicy(sizePolicy);
        deleteTableView->setFocusPolicy(Qt::NoFocus);
        deleteTableView->setAutoFillBackground(false);
        deleteTableView->setFrameShape(QFrame::NoFrame);
        deleteTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        deleteTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        deleteTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        deleteTableView->setTabKeyNavigation(false);
        deleteTableView->setProperty("showDropIndicator", QVariant(false));
        deleteTableView->setDragDropOverwriteMode(false);
        deleteTableView->setAlternatingRowColors(true);
        deleteTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        deleteTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        deleteTableView->setTextElideMode(Qt::ElideNone);
        deleteTableView->setShowGrid(false);
        deleteTableView->setGridStyle(Qt::NoPen);
        deleteTableView->setCornerButtonEnabled(false);
        deleteTableView->horizontalHeader()->setVisible(false);
        deleteTableView->horizontalHeader()->setMinimumSectionSize(30);
        deleteTableView->horizontalHeader()->setDefaultSectionSize(120);
        label_29 = new QLabel(deleteEmpWidget);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(33, 30, 135, 34));
        label_29->setFont(font6);
        label_29->setStyleSheet(QString::fromUtf8("#label_29\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        label_30 = new QLabel(deleteEmpWidget);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(167, 30, 120, 34));
        label_30->setFont(font6);
        label_30->setStyleSheet(QString::fromUtf8("#label_30\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:5px;\n"
"}"));
        label_31 = new QLabel(deleteEmpWidget);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(287, 30, 125, 34));
        label_31->setFont(font6);
        label_31->setStyleSheet(QString::fromUtf8("#label_31\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:3px;\n"
"}"));
        label_32 = new QLabel(deleteEmpWidget);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(530, 30, 122, 34));
        label_32->setFont(font6);
        label_32->setStyleSheet(QString::fromUtf8("#label_32\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        label_33 = new QLabel(deleteEmpWidget);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(410, 30, 120, 34));
        label_33->setFont(font6);
        label_33->setStyleSheet(QString::fromUtf8("#label_33\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        label_34 = new QLabel(deleteEmpWidget);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(652, 30, 137, 34));
        label_34->setFont(font6);
        label_34->setStyleSheet(QString::fromUtf8("#label_34\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        pushButton_3 = new QPushButton(deleteEmpWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(640, 500, 150, 34));
        pushButton_3->setFont(font4);
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_3:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        searchStackedWidget->addWidget(deleteEmpWidget);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        searchStackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "  Search", nullptr));
        aboutButton->setText(QCoreApplication::translate("MainWindow", "  About App", nullptr));
        addEmpButton->setText(QCoreApplication::translate("MainWindow", "  Add Rentor", nullptr));
        updateEmpButton->setText(QCoreApplication::translate("MainWindow", "  Update Rentor Record", nullptr));
        deleteEmpButton->setText(QCoreApplication::translate("MainWindow", "  Delete Rentor Record", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">App Version: 1.0.0</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-style:italic; color:#ffffff;\">House Rental Management System</span></p></body></html>", nullptr));
        closeButton->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        minimizeButton->setText(QCoreApplication::translate("MainWindow", "\342\210\222", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Total no. of Rentors</span></p></body></html>", nullptr));
        empLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">00</span></p></body></html>", nullptr));
        deptLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">00</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Occupied House</span></p></body></html>", nullptr));
        designLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">00</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Total designations</span></p></body></html>", nullptr));
        searchTextBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>   Rentor ID</p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Name</p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>House No.</p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Designation</p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Contact</p></body></html>", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Email</p></body></html>", nullptr));
        deptLabel_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>/18</p></body></html>", nullptr));
        id->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Name</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#55aaff;\">Personal Info</span></p></body></html>", nullptr));
        id_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Date of Birth</span></p></body></html>", nullptr));
        id_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Gender</span></p></body></html>", nullptr));
        empGender->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        empGender->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        empGender->setItemText(2, QCoreApplication::translate("MainWindow", "Other", nullptr));

        id_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Email</span></p></body></html>", nullptr));
        id_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Contact</span></p></body></html>", nullptr));
        id_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Address</span></p></body></html>", nullptr));
        id_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Date of Entering</span></p></body></html>", nullptr));
        id_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Rentor ID</span></p></body></html>", nullptr));
        empDept->setItemText(0, QCoreApplication::translate("MainWindow", "House #1", nullptr));
        empDept->setItemText(1, QCoreApplication::translate("MainWindow", "House #2", nullptr));
        empDept->setItemText(2, QCoreApplication::translate("MainWindow", "House #3", nullptr));
        empDept->setItemText(3, QCoreApplication::translate("MainWindow", "House #4", nullptr));
        empDept->setItemText(4, QCoreApplication::translate("MainWindow", "House #5", nullptr));
        empDept->setItemText(5, QCoreApplication::translate("MainWindow", "House #6", nullptr));
        empDept->setItemText(6, QCoreApplication::translate("MainWindow", "House #7", nullptr));
        empDept->setItemText(7, QCoreApplication::translate("MainWindow", "House #8", nullptr));
        empDept->setItemText(8, QCoreApplication::translate("MainWindow", "House #9", nullptr));
        empDept->setItemText(9, QCoreApplication::translate("MainWindow", "House #10", nullptr));
        empDept->setItemText(10, QCoreApplication::translate("MainWindow", "House #11", nullptr));
        empDept->setItemText(11, QCoreApplication::translate("MainWindow", "House #12", nullptr));
        empDept->setItemText(12, QCoreApplication::translate("MainWindow", "House #13", nullptr));
        empDept->setItemText(13, QCoreApplication::translate("MainWindow", "House #14", nullptr));
        empDept->setItemText(14, QCoreApplication::translate("MainWindow", "House #15", nullptr));
        empDept->setItemText(15, QCoreApplication::translate("MainWindow", "House #16", nullptr));
        empDept->setItemText(16, QCoreApplication::translate("MainWindow", "House #17", nullptr));
        empDept->setItemText(17, QCoreApplication::translate("MainWindow", "House #18", nullptr));

        id_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">House No</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#55aaff;\">House Info</span></p></body></html>", nullptr));
        empDesig->setItemText(0, QCoreApplication::translate("MainWindow", "Apartment", nullptr));
        empDesig->setItemText(1, QCoreApplication::translate("MainWindow", "Pad", nullptr));

        id_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Designation</span></p></body></html>", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        pushButton_2->setText(QString());
        id_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Name</span></p></body></html>", nullptr));
        id_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Email</span></p></body></html>", nullptr));
        id_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Gender</span></p></body></html>", nullptr));
        updateEmpGender->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        updateEmpGender->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        updateEmpGender->setItemText(2, QCoreApplication::translate("MainWindow", "Other", nullptr));

        id_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Date of Birth</span></p></body></html>", nullptr));
        id_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Contact</span></p></body></html>", nullptr));
        id_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Address</span></p></body></html>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#00aaff;\">Edit Rentor Info</span><span style=\" font-style:italic; color:#00aaff;\"> : </span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Rentor ID</p></body></html>", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Name</p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>House No</p></body></html>", nullptr));
        updateEmpID->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>   Rentor ID</p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Name</p></body></html>", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>House No</p></body></html>", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Contact</p></body></html>", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Designation</p></body></html>", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Email</p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
