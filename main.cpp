/*

Name: Currency Conversion

Author: Srishti Sethi

Date: 09/ 09 / 2011

Description: Programming Challenge for VCL

*/

#include <QtCore>
#include <QtGui>
#include <QString>
#include <QTextStream>
#include <QInputDialog>
#include <QByteArray>
#include <QLineEdit>
#include <QMessageBox>
#include <QLabel>
#include <iostream>
#include <iomanip>
#include <string>
#include<stdio.h>

using namespace std;

struct currency
{
    char smallUnit[4];
    char longUnit[80];
    double exchangeRate;
};

currency * var = new currency[81];


class Money
{

public :
        //Variable Declaration

        char smallUnit[4];
        char longUnit[80];

        double exchangeRate;
        double amount;
        double convertedAmount;
        static int defined ;
        int t , temp;

        //Constructor Declaration
        Money(char *s)
        {

            //Loading the structure data
            if (this->defined!=1)
            {
                strcpy(var[0].smallUnit ,"INR");
                strcpy(var[0].longUnit,"India Rupees");
                var[0].exchangeRate = 49.62;

                strcpy(var[1].smallUnit ,"AFN");
                strcpy(var[1].longUnit,"Afghanistan Afghani");
                var[1].exchangeRate = 49.86;

                strcpy(var[2].smallUnit ,"ALL");
                strcpy(var[2].longUnit,"Albania Leke");
                var[2].exchangeRate = 99.01;

                strcpy(var[3].smallUnit ,"DZD");
                strcpy(var[3].longUnit,"Algeria Dinars");
                var[3].exchangeRate = 71.86;

                strcpy(var[4].smallUnit ,"ARS");
                strcpy(var[4].longUnit,"Argentina Pesos");
                var[4].exchangeRate = 3.70;

                strcpy(var[5].smallUnit ,"AUD");
                strcpy(var[5].longUnit,"Australia Dollars");
                var[5].exchangeRate = 1.36;

                strcpy(var[6].smallUnit ,"BSD");
                strcpy(var[6].longUnit,"Bahamas Dollars");
                var[6].exchangeRate = 1.00;

                strcpy(var[7].smallUnit ,"BHD");
                strcpy(var[7].longUnit,"Bahrain Dinars");
                var[7].exchangeRate = 0.38;

                strcpy(var[8].smallUnit ,"BDT");
                strcpy(var[8].longUnit,"Bangladesh Taka");
                var[8].exchangeRate = 68.95;

                strcpy(var[9].smallUnit ,"BBD");
                strcpy(var[9].longUnit,"Barbados Dollars");
                var[9].exchangeRate = 1.98;

                strcpy(var[10].smallUnit ,"BMD");
                strcpy(var[10].longUnit,"Bermuda Dollars");
                var[10].exchangeRate = 1.00;

                strcpy(var[11].smallUnit ,"BRL");
                strcpy(var[11].longUnit,"Brazil Reais");
                var[11].exchangeRate = 2.19;

                strcpy(var[12].smallUnit ,"BGN");
                strcpy(var[12].longUnit,"Bulgaria Leva");
                var[12].exchangeRate = 1.47;

                strcpy(var[13].smallUnit ,"XAF");
                strcpy(var[13].longUnit,"CFA BCEAO Francs");
                var[13].exchangeRate = 492.29;

                strcpy(var[14].smallUnit ,"XOF");
                strcpy(var[14].longUnit,"CFA BEAC Francs");
                var[14].exchangeRate = 492.29;

                strcpy(var[15].smallUnit ,"CAD");
                strcpy(var[15].longUnit,"Canada Dollars");
                var[15].exchangeRate = 1.18;

                strcpy(var[16].smallUnit ,"CLP");
                strcpy(var[16].longUnit,"Chile Pesos");
                var[16].exchangeRate = 582.69;

                strcpy(var[17].smallUnit ,"CNY");
                strcpy(var[17].longUnit,"China Yuan Renminbi");
                var[17].exchangeRate = 6.82;

                strcpy(var[18].smallUnit ,"COP");
                strcpy(var[18].longUnit,"Colombia Pesos");
                var[18].exchangeRate = 2293.50;

                strcpy(var[19].smallUnit ,"XPF");
                strcpy(var[19].longUnit,"Comptoirs FranÃ§ais du Pacifique Francs");
                var[19].exchangeRate = 89.56;

                strcpy(var[20].smallUnit ,"CRC");
                strcpy(var[20].longUnit,"Costa Rica Colones");
                var[20].exchangeRate = 573.21;

                strcpy(var[21].smallUnit ,"HRK");
                strcpy(var[21].longUnit,"Croatia Kuna");
                var[21].exchangeRate = 5.54;

                strcpy(var[22].smallUnit ,"CZK");
                strcpy(var[22].longUnit,"Czech Republic Koruny");
                var[22].exchangeRate = 19.97;

                strcpy(var[23].smallUnit ,"DKK");
                strcpy(var[23].longUnit,"Denmark Kroner");
                var[23].exchangeRate = 5.59;

                strcpy(var[24].smallUnit ,"DOP");
                strcpy(var[24].longUnit,"Dominican Republic Pesos");
                var[24].exchangeRate = 35.85;

                strcpy(var[25].smallUnit ,"XCD");
                strcpy(var[25].longUnit,"East Caribbean Dollars");
                var[25].exchangeRate = 2.68;

                strcpy(var[26].smallUnit ,"EGP");
                strcpy(var[26].longUnit,"Egypt Pounds");
                var[26].exchangeRate = 5.60;

                strcpy(var[27].smallUnit ,"EEK");
                strcpy(var[27].longUnit,"Estonia Krooni");
                var[27].exchangeRate = 11.74;

                strcpy(var[28].smallUnit ,"FJD");
                strcpy(var[28].longUnit,"Fiji Dollars");
                var[28].exchangeRate = 2.20;

                strcpy(var[29].smallUnit ,"EUR");
                strcpy(var[29].longUnit,"Euro");
                var[29].exchangeRate = 0.75;

                strcpy(var[30].smallUnit ,"XAU");
                strcpy(var[30].longUnit,"Gold Ounces");
                var[30].exchangeRate = 0.00;

                strcpy(var[31].smallUnit ,"HKD");
                strcpy(var[31].longUnit,"Hong Kong Dollars");
                var[31].exchangeRate = 7.75;

                strcpy(var[32].smallUnit ,"HUF");
                strcpy(var[32].longUnit,"Hungary Forint");
                var[32].exchangeRate = 214.33;

                strcpy(var[33].smallUnit ,"XDR");
                strcpy(var[33].longUnit,"IMF Special Drawing Rights");
                var[33].exchangeRate = 0.67;

                strcpy(var[34].smallUnit ,"ISK");
                strcpy(var[34].longUnit,"Iceland Kronur");
                var[34].exchangeRate = 126.99;

                strcpy(var[35].smallUnit ,"IDR");
                strcpy(var[35].longUnit,"Indonesia Rupiahs");
                var[35].exchangeRate = 10587.52;

                strcpy(var[36].smallUnit ,"IRR");
                strcpy(var[36].longUnit,"Iran Rials");
                var[36].exchangeRate = 9857.50;

                strcpy(var[37].smallUnit ,"IQD");
                strcpy(var[37].longUnit,"Iraq Dinars");
                var[37].exchangeRate = 1158.50;

                strcpy(var[38].smallUnit ,"ILS");
                strcpy(var[38].longUnit,"Israel New Shekels");
                var[38].exchangeRate = 4.13;

                strcpy(var[39].smallUnit ,"JMD");
                strcpy(var[39].longUnit,"Jamaica Dollars");
                var[39].exchangeRate = 88.74;

                strcpy(var[40].smallUnit ,"JPY");
                strcpy(var[40].longUnit,"Japan Yen");
                var[40].exchangeRate = 99.45;

                strcpy(var[41].smallUnit ,"JOD");
                strcpy(var[41].longUnit,"Jordan Dinars");
                var[41].exchangeRate = 0.71;

                strcpy(var[42].smallUnit ,"KES");
                strcpy(var[42].longUnit,"Kenya Shillings");
                var[42].exchangeRate = 78.55;

                strcpy(var[43].smallUnit ,"KWD");
                strcpy(var[43].longUnit,"Kuwait Dinars");
                var[43].exchangeRate = 0.29;

                strcpy(var[44].smallUnit ,"LBP");
                strcpy(var[44].longUnit,"Lebanon Pounds");
                var[44].exchangeRate = 1510.00;

                strcpy(var[45].smallUnit ,"MYR");
                strcpy(var[45].longUnit,"Malaysia Ringgits");
                var[45].exchangeRate = 3.54;

                strcpy(var[46].smallUnit ,"MUR");
                strcpy(var[46].longUnit,"Mauritius Rupees");
                var[46].exchangeRate = 33.75;

                strcpy(var[47].smallUnit ,"MXN");
                strcpy(var[47].longUnit,"Mexico Pesos");
                var[47].exchangeRate = 13.71;

                strcpy(var[48].smallUnit ,"MAD");
                strcpy(var[48].longUnit,"Morocco Dirhams");
                var[48].exchangeRate = 8.35;

                strcpy(var[49].smallUnit ,"NZD");
                strcpy(var[49].longUnit,"New Zealand Dollars");
                var[49].exchangeRate = 1.74;

                strcpy(var[50].smallUnit ,"NOK");
                strcpy(var[50].longUnit,"Norway Kroner");
                var[50].exchangeRate = 6.50;

                strcpy(var[51].smallUnit ,"OMR");
                strcpy(var[51].longUnit,"Oman Rials");
                var[51].exchangeRate = 0.38;

                strcpy(var[52].smallUnit ,"PKR");
                strcpy(var[52].longUnit,"Pakistan Rupees");
                var[52].exchangeRate = 80.18;

                strcpy(var[53].smallUnit ,"XPD");
                strcpy(var[53].longUnit,"Palladium Ounces");
                var[53].exchangeRate = 0.00;

                strcpy(var[54].smallUnit ,"PEN");
                strcpy(var[54].longUnit,"Peru Nuevos Soles");
                var[54].exchangeRate = 3.01;

                strcpy(var[55].smallUnit ,"PHP");
                strcpy(var[55].longUnit,"Philippines Pesos");
                var[55].exchangeRate = 47.76;

                strcpy(var[56].smallUnit ,"XPT");
                strcpy(var[56].longUnit,"Platinum Ounces");
                var[56].exchangeRate = 0.00;

                strcpy(var[57].smallUnit ,"PLN");
                strcpy(var[57].longUnit,"Poland Zlotych");
                var[57].exchangeRate = 3.28;

                strcpy(var[58].smallUnit ,"QAR");
                strcpy(var[58].longUnit,"Qatar Riyals");
                var[58].exchangeRate = 3.64;

                strcpy(var[59].smallUnit ,"RON");
                strcpy(var[59].longUnit,"Romania New Lei");
                var[59].exchangeRate = 3.17;

                strcpy(var[60].smallUnit ,"RUB");
                strcpy(var[60].longUnit,"Russia Rubles");
                var[60].exchangeRate = 33.03;

                strcpy(var[61].smallUnit ,"SAR");
                strcpy(var[61].longUnit,"Saudi Arabia Riyals");
                var[61].exchangeRate = 3.75;

                strcpy(var[62].smallUnit ,"XAG");
                strcpy(var[62].longUnit,"Silver Ounces");
                var[62].exchangeRate = 0.08;

                strcpy(var[63].smallUnit ,"SGD");
                strcpy(var[63].longUnit,"Singapore Dollars");
                var[63].exchangeRate = 1.48;

                strcpy(var[64].smallUnit ,"ZAR");
                strcpy(var[64].longUnit,"South Africa Rand");
                var[64].exchangeRate = 8.37;

                strcpy(var[65].smallUnit ,"KRW");
                strcpy(var[65].longUnit,"South Korea Won");
                var[65].exchangeRate = 1278.29;

                strcpy(var[66].smallUnit ,"SDG");
                strcpy(var[66].longUnit,"Sudan Pounds");
                var[66].exchangeRate = 120.14;

                strcpy(var[67].smallUnit ,"LKR");
                strcpy(var[67].longUnit,"Sri Lanka Rupees");
                var[67].exchangeRate = 2.36;

                strcpy(var[68].smallUnit ,"SDG");
                strcpy(var[68].longUnit,"Sudan Pounds");
                var[68].exchangeRate = 2.36;

                strcpy(var[69].smallUnit ,"SEK");
                strcpy(var[69].longUnit,"Sweden Kronor");
                var[69].exchangeRate = 7.97;

                strcpy(var[70].smallUnit ,"CHK");
                strcpy(var[70].longUnit,"Switzerland Francs");
                var[70].exchangeRate = 1.13;

                strcpy(var[71].smallUnit ,"TWD");
                strcpy(var[71].longUnit,"Taiwan New Dollars");
                var[71].exchangeRate = 33.01;

                strcpy(var[72].smallUnit ,"THB");
                strcpy(var[72].longUnit,"Thailand Baht");
                var[72].exchangeRate = 34.88;

                strcpy(var[73].smallUnit ,"TTD");
                strcpy(var[73].longUnit,"Trinidad and Tobago Dollars");
                var[73].exchangeRate = 6.29;

                strcpy(var[74].smallUnit ,"TND");
                strcpy(var[74].longUnit,"Tunisia Dinars");
                var[74].exchangeRate = 1.39;

                strcpy(var[75].smallUnit ,"TRY");
                strcpy(var[75].longUnit,"Turkey Lira");
                var[75].exchangeRate = 1.58;

                strcpy(var[76].smallUnit ,"AED");
                strcpy(var[76].longUnit,"United Arab Emirates Dirhams");
                var[76].exchangeRate = 3.67;

                strcpy(var[77].smallUnit ,"GBP");
                strcpy(var[77].longUnit,"United Kingdom Pounds");
                var[77].exchangeRate = 0.67;

                strcpy(var[78].smallUnit ,"USD");
                strcpy(var[78].longUnit,"United States Dollars");
                var[78].exchangeRate = 1.00;

                strcpy(var[79].smallUnit ,"VEF");
                strcpy(var[79].longUnit,"Venezuela Bolivares Fuertes");
                var[79].exchangeRate = 2.15;

                strcpy(var[80].smallUnit ,"VND");
                strcpy(var[80].longUnit,"Vietnam Dong");
                var[80].exchangeRate = 17785.00;

                cout << "Structure was loaded for the first time"  ;
                this->defined = 1;

            }
            else
            {
                cout <<"Structure was found already declared";
            }


           //Retrieve the index of structure element for matching
           for (t = 0; t <=81 ; t++)
            {
               if (strcmp(var[t].smallUnit,s) == 0)
                    {
                       temp = t;
                       strcpy(smallUnit,var[temp].smallUnit);
                       strcpy(longUnit,var[temp].longUnit);
                       exchangeRate = var[temp].exchangeRate;

                    }
            }
        }
        void setValue(double amt)
        {
            amount = amt;
        }
        void convert(double exchangeRateFrom, double exchangeRateTo)
        {
           //Mathematical Formula for Currency conversion
           convertedAmount = ( amount * exchangeRateTo ) / exchangeRateFrom;
           cout << convertedAmount;
        }


};

//Return Input Currencies
QString get_value_money(char *input_string) {
    bool val;
    char str[80];
    QString text;
    strcpy(str,input_string);

    do{
    //Input Dialog
    text = QInputDialog::getText(0, "Input Currency ",str, QLineEdit::Normal);
    val = QString(text).isNull();
    if (val)
    {
        //Display a message box on null entry
        QMessageBox msgBox;
        msgBox.setText("Re-Enter value.");
        msgBox.setWindowTitle("Error !");
        msgBox.exec();
    }
    }
    while(val);
    return text;

}

//Comma Placement Rules
const char* showCurrency(double dv, int width = 14)
{
        const string radix = ".";
        const string thousands = ",";
        const string unit = "$";
        unsigned long v = (unsigned long) ((dv * 100.0) + .5);
        string fmt,digit;
        int i = -2;
        do {
                if(i == 0) {
                        fmt = radix + fmt;
                }
                if((i > 0) && (!(i % 3))) {
                        fmt = thousands + fmt;
                }
                digit = (v % 10) + '0';
                fmt = digit + fmt;
                v /= 10;
                i++;
        }
        while((v) || (i < 1));
        return fmt.c_str();
}

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QString currency1, currency2, amount;

    //Currency conversion from QString to Char
    currency1 = get_value_money("To convert from");
    QByteArray ba1 = currency1.toLocal8Bit();
    char *cur1 = ba1.data();
    currency2 = get_value_money("To convert to");
    QByteArray ba2 = currency2.toLocal8Bit();
    char *cur2 = ba2.data();
    amount = get_value_money("Enter the amount : ");
    double d = amount.toDouble();


    Money m(cur1);  //Obj1 for Currency One
    Money n(cur2);  //Obj2 for Currency Two
    m.setValue(d);
    const char *st = showCurrency(d);

    QString qstring(st);

    m.convert(m.exchangeRate, n.exchangeRate);  //Call convert function

    //Output the Result after conversion
    QMessageBox output;
    output.setWindowTitle("Currency Convertor");
    output.resize(600,600);
    output.setText(QString("Currency you want to convert from : %1 \n Currency you want"
                           "to convert to : %2 \n Convert Amount : %3 \n Amount for conversion : %4 \n"
                           "Converting an amount of %1 %3 to %2 .......\n\n Currency Convertor Result \n"
                           "%5 (%1) %3 == %6 %7 (%2)")\
                   .arg(cur1).arg(cur2).arg(m.amount).arg(qstring).arg(m.longUnit).arg(m.convertedAmount).arg(n.longUnit));
    output.exec();
    return 0;
}
int Money::defined = 0;
