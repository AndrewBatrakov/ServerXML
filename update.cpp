//#include "update.h"

//Update::Update(QWidget *parent) :
//    QDialog(parent)
//{
//    QWidget::setStyleSheet("MainWindow, QMessageBox, QDialog, QMenu, QAction, QMenuBar {background-color: "
//                           "#DDD6FF}"
//                           "QMenu {"
//                           "font: bold}"
//                           "QMenu::item:selected {background-color: "
//                           "qlineargradient(x1:0, y1:0, x2:0, y2:1,"
//                           "stop:0 #cfcccc,"
//                           "stop:0.5 #333232,"
//                           "stop:0.51 #000000,"
//                           "stop:1 #585c5f);"
//                           "color: #00cc00}"

//                           "QMenuBar::item:selected {background-color: "
//                           "qlineargradient(x1:0, y1:0, x2:0, y2:1,"
//                           "stop:0 #cfcccc,"
//                           "stop:0.5 #333232,"
//                           "stop:0.51 #000000,"
//                           "stop:1 #585c5f);"
//                           "color: #00cc00}"

//                           "QPushButton {"
//                           "border: 1px solid black;"
//                           "min-height: 20px;"
//                           "min-width: 70px;"
//                           "padding: 1px;"
//                           "border-top-right-radius: 5px;"
//                           "border-top-left-radius: 5px;"
//                           "border-bottom-right-radius: 5px;"
//                           "border-bottom-left-radius: 5px;"
//                           "background-color: "
//                           "qlineargradient(x1:0, y1:0, x2:0, y2:1,"
//                           "stop:0 #d3d3d3,"
//                           "stop:0.5 #bebebe,"
//                           "stop:0.51 #bebebe,"
//                           "stop:1 #848484);"
//                           "color: #231A4C;"
//                           "font: bold}"

//                           "QPushButton:hover {background-color: "
//                           "qlineargradient(x1:0, y1:0, x2:0, y2:1,"
//                           "stop:0 #cfcccc,"
//                           "stop:0.5 #333232,"
//                           "stop:0.51 #000000,"
//                           "stop:1 #585c5f);"
//                           "color: #00cc00}"

//                           "QPushButton:focus {border-color: yellow}"
//                           "LineEdit:hover {background-color: #FFFF99}"
//                           "QComboBox:hover {background-color: #FFFF99}"
//                           "QDateEdit:hover {background-color: #FFFF99}"
//                           "LineEdit:focus {background-color: #FFFFCC}"
//                           "QComboBox:focus {background-color: #FFFFCC}"
//                           "QDateEdit:focus {background-color: #FFFFCC}"

//                           "QToolButton {"
//                           "border: 1px solid black;"
//                           "max-height: 18px;"
//                           "max-width: 18px;"
//                           "min-height: 18px;"
//                           "min-width: 18px;"
//                           "padding: 1px;"
//                           "border-top-right-radius: 5px;"
//                           "border-top-left-radius: 5px;"
//                           "border-bottom-right-radius: 5px;"
//                           "border-bottom-left-radius: 5px;"
//                           "background-color: "
//                           "qlineargradient(x1:0, y1:0, x2:0, y2:1,"
//                           "stop:0 #d3d3d3,"
//                           "stop:0.5 #bebebe,"
//                           "stop:0.51 #bebebe,"
//                           "stop:1 #848484);"
//                           "color: #231A4C;"
//                           "font: bold}"

//                           "QToolButton:hover {background-color: "
//                           "qlineargradient(x1:0, y1:0, x2:0, y2:1,"
//                           "stop:0 #cfcccc,"
//                           "stop:0.5 #333232,"
//                           "stop:0.51 #000000,"
//                           "stop:1 #585c5f);"
//                           "color: #00cc00}"

//                           "QProgressBar {"
//                           "border: 1px solid black;"
//                           "text-align: center;"
//                           "color: #00B600;"
//                           "font: bold;"
//                           "padding: 1px;"
//                           "border-top-right-radius: 5px;"
//                           "border-top-left-radius: 5px;"
//                           "border-bottom-right-radius: 5px;"
//                           "border-bottom-left-radius: 5px;"
//                           "background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1,"
//                           "stop: 0 #fff,"
//                           "stop: 0.4999 #eee,"
//                           "stop: 0.5 #ddd,"
//                           "stop: 1 #eee );"
//                           "width: 15px;"
//                           "}"

//                           "QProgressBar::chunk {"
//                           "background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1,"
//                           "stop: 0 #78d,"
//                           "stop: 0.4999 #46a,"
//                           "stop: 0.5 #45a,"
//                           "stop: 1 #238 );"
//                           "border-top-right-radius: 5px;"
//                           "border-top-left-radius: 5px;"
//                           "border-bottom-right-radius: 5px;"
//                           "border-bottom-left-radius: 5px;"
//                           "border: 1px solid black;"
//                           "}");
//}

//void Update::iniVersion()
//{
//    ftpIni = new QFtp(this);
//    connect(ftpIni,SIGNAL(commandFinished(int,bool)),this,SLOT(ftpCommandFinishedIni(int,bool)));

//    QString localFileName = "./TS_SQLite.ini";
//    if(localFileName.isEmpty())
//        localFileName = "null.out";
//    fileIni = new QFile(localFileName);
//    if(!fileIni->open(QIODevice::WriteOnly)){
//        QMessageBox::warning(this,tr("Attention"),tr("Don't open %1").arg(localFileName));
//    }
//    QSettings settings("AO_Batrakov_Inc.", "TS");
//    QString host = settings.value("FTP").toString();
//    ftpIni->connectToHost(host,21);

//    ftpIni->login("batrakov","555");

//    ftpIni->get("/QtProject/TS_SQLite/TS_SQLite.ini",fileIni);
//}



//bool Update::newVersion()
//{
//    QString version = "0.32";

//    bool resultUpdates = false;
//    QFile filein("./TS_SQLite.ini");
//    if(!filein.open(QIODevice::ReadOnly)){

//    }
//    QTextStream in(&filein);
//    QString str;

//    while(!in.atEnd()){
//        str = in.readLine();
//        if(str.toDouble() > version.toDouble()){
//            int k = QMessageBox::question(this,tr("New Updates"),tr("New Updates Available! Download?"),QMessageBox::Yes|QMessageBox::No,QMessageBox::No);
//            if(k == QMessageBox::Yes){
//               resultUpdates = true;
//                exeVersion();
//            }
//            break;
//        }
//    }
//    filein.close();
//    return resultUpdates;
//}

//void Update::exeVersion()
//{
//    ftpExe = new QFtp(this);
//    progressDialogExe = new QProgressDialog(this);
//    connect(ftpExe,SIGNAL(commandFinished(int,bool)),this,SLOT(ftpCommandFinishedExe(int,bool)));
//    connect(progressDialogExe,SIGNAL(canceled()),this,SLOT(cancelDownLoadExe()));
//    connect(ftpExe,SIGNAL(dataTransferProgress(qint64,qint64)),this,SLOT(updateDataTransferProgress(qint64,qint64)));
//    QString localFileName1 = "./TS_SQLite.exe";
//    if(localFileName1.isEmpty())
//        localFileName1 = "null.out";
//    fileExe = new QFile(localFileName1);
//    if(!fileExe->open(QIODevice::WriteOnly)){

//    }

//    QFile *renFile = new QFile;
//    renFile->rename("./TS_SQLite.exe","./TS_SQLite.exe.bak");
//    renFile->close();
//    QSettings settings("AO_Batrakov_Inc.", "TS");
//    QString host = settings.value("FTP").toString();
//    ftpExe->connectToHost(host,21);//91.102.219.74


//    ftpExe->login("batrakov","555");
//    ftpExe->get("/QtProject/TS_SQLite/TS_SQLite.exe",fileExe);
//    progressDialogExe->setLabelText(tr("Downloading %1 ...").arg(localFileName1));
//    progressDialogExe->setEnabled(false);
//    progressDialogExe->exec();
//}

//void Update::tranceVersion()
//{
//    ftpTrance = new QFtp(this);
//    connect(ftpTrance,SIGNAL(commandFinished(int,bool)),this,SLOT(ftpCommandFinishedTrance(int,bool)));
//    QString localFileName1 = "./TS_SQLite_ru.qm";
//    if(localFileName1.isEmpty())
//        localFileName1 = "null.out";
//    fileTrance = new QFile(localFileName1);
//    if(!fileTrance->open(QIODevice::WriteOnly)){

//    }
//    QSettings settings("AO_Batrakov_Inc.", "TS");
//    QString host = settings.value("FTP").toString();
//    ftpTrance->connectToHost(host,21);

//    ftpTrance->login("batrakov","555");
//    ftpTrance->get("/QtProject/TS_SQLite/TS_SQLite_ru.qm",fileTrance);
//}

//void Update::ftpCommandFinishedIni(int, bool error)
//{
//    if(ftpIni->currentCommand() == QFtp::Get){
//        if(error){
//            QMessageBox::information(this,tr("Ftp"),tr("Canceled download of %1. %2").arg(fileExe->fileName()).arg(fileExe->errorString()));
//            fileIni->close();
//            fileIni->remove();
//        }else{
//            fileIni->close();
//            QEventLoop loop;
//            QTimer::singleShot(3000,&loop,SLOT(quit()));
//            loop.exec();
//            newVersion();
//        }
//    }
//}

//void Update::ftpCommandFinishedExe(int, bool error)
//{
//    if(ftpExe->currentCommand() == QFtp::Get){
//        if(error){
//            QMessageBox::information(this,tr("Ftp"),tr("Canceled download of %1. %2").arg(fileExe->fileName()).arg(fileExe->errorString()));
//            fileExe->close();
//            fileExe->remove();
//        }else{
//            fileExe->close();
//            tranceVersion();
//        }
//    }
//   progressDialogExe->hide();

//}

//void Update::ftpCommandFinishedTrance(int, bool error)
//{
//    if(ftpTrance->currentCommand() == QFtp::Get){
//        if(error){
//            QMessageBox::information(this,tr("Ftp"),tr("Canceled download of %1. %2").arg(fileTrance->fileName()).arg(error));
//            fileTrance->close();
//            fileTrance->remove();
//        }else{
//            fileTrance->close();
//            restartProgramm();
//        }
//    }
//}

//void Update::updateDataTransferProgress(qint64 readBytes, qint64 totalBytes)
//{
//    progressDialogExe->setMaximum(totalBytes);
//    progressDialogExe->setValue(readBytes);
//}

//void Update::closeConnection()
//{
//    if(ftpIni){
//        ftpIni->abort();
//        ftpIni->deleteLater();
//        ftpIni = 0;
//    }
//    if(ftpExe){
//        ftpExe->abort();
//        ftpExe->deleteLater();
//        ftpExe = 0;
//    }
//    if(ftpTrance){
//        ftpTrance->abort();
//        ftpTrance->deleteLater();
//        ftpTrance = 0;
//    }

//}

//void Update::cancelDownLoadIni()
//{
//    ftpIni->abort();
//    if(fileIni->exists()){
//        fileIni->close();
//        fileIni->remove();
//    }
//}

//void Update::cancelDownLoadExe()
//{
//    ftpExe->abort();
//    if(fileExe->exists()){
//        fileExe->close();
//        fileExe->remove();
//    }
//}

//void Update::cancelDownLoadTrance()
//{
//    ftpTrance->abort();
//    if(fileTrance->exists()){
//        fileTrance->close();
//        fileTrance->remove();
//    }
//}

//void Update::restartProgramm()
//{
//    QProcess::startDetached("./TS_SQLite.exe");
//    QApplication::quit();
//}
