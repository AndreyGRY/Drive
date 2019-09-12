#include <QCoreApplication>
#include <iostream>
//#include "mainwindow.h"
//#include "ui_mainwindow.h"
//#include <QSerialPortInfo>
#include <QDebug>
//#include <QMessageBox>
#include <stdint.h>
#include <stddef.h>
#include <math.h>
#include <QFile>
#include <ctime>

#define StartBlock()	(code_ptr = dst++, code = 1)
#define FinishBlock()	(*code_ptr = code)
#define StdRollTime 3.0
#define AccellTime 1.0





int main(int argc, char *argv[])
{
    enum State {disabled, position_control, speed_control, sinus};
    State state = speed_control;
    QCoreApplication a(argc, argv);
            char command_code;
            float RollTime = StdRollTime;

            clock_t t0 = std::clock();
//            switch (state) {
//                             case position_control:
//                                 command_code = 'p';
//                                 break;
//                             case speed_control:
//                                 command_code = 'v';
//                                 break;
//                             default:
//                                 command_code = 'e';
//                                 qDebug() << "error";
//                break;}
            for (int i = 0; i<= 50000000L; i++)
            {
                clock_t t1 = clock();

            }
            clock_t t1 = std::clock();
            std::cout << "time 0 " << t0 << std::endl;
            std::cout << "time 1 " << t1 << std::endl;
            std::cout << "time 1 seconds " << t1/CLK_TCK << std::endl;



//            while (t1-t0 <= 2*AccellTime+RollTime)
//            {
//                char command_code = 'v';
//                 while (t1-t0<=AccellTime)
//                 {
//                      data = ui->spinBox_des_val->value();
//                      data = data*(t1-t0);
//                     SendBytesFloat(command_code, data);
//                     ui->horizontalSlider->setValue((int)(data*10000));
//                     t1 = clock();
//                  }

//                 switch (state) {
//                 case position_control:
//                     command_code = 'p';
//                     break;
//                 case speed_control:
//                     command_code = 'v';
//                     break;
//                 default:
//                     command_code = 'e';
//                     qDebug() << "error";
//                     break;
//                 }
//                 t1 = clock();
//                 data = ui->spinBox_des_val->value();
//                 SendBytesFloat(command_code, data);
//                  command_code = 'v';

//                  while ( (t1-t0<= 2*AccellTime+RollTime)&&(t1-t0 >= RollTime) )
//                  {
//                      data = ui->spinBox_des_val->value();
//                      data = data*(2*AccellTime+RollTime-t1);
//                     SendBytesFloat(command_code, data);
//                     ui->horizontalSlider->setValue((int)(data*10000));
//                     t1 = clock();
//                  }
//            }
//             data = 0;
//             SendBytesFloat(command_code, data);
//        }
//        }

//        else
//        {
//        switch (state) {
//        case position_control:
//            command_code = 'p';
//            break;
//        case speed_control:
//            command_code = 'v';
//            break;
//        default:
//            command_code = 'e';
//            qDebug() << "error";
//            break;
//        }
//        SendBytesFloat(command_code, data);
//        }
//    }  

    system ("pause");
    return a.exec();
}
