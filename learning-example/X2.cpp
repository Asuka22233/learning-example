//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//bool checkdate(string month, int year) {
//    //Ϊ�򻯱��⣬��������Ѿ�д�ã�����Ҫ�����ύ��ʱ����ͬ�������һ����ȥ
//    if (year <= 2024) {
//        return false;
//    }
//    else if (year >= 2026) {
//        return true;
//    }
//    else {
//        if (!(month.compare("JAN") && month.compare("FEB") &&
//            month.compare("MAR"))) {
//            return false;
//        }
//        else {
//            return true;
//        }
//    }
//}
//
//bool checkdate(int date) {
//    int year = date / 10000;
//    int month = (date / 100) % 100;
//    int day = date % 100;
//
//    if (year < 2025) return false;
//    if (year > 2025) return true;
//    if (month < 4) return false;
//    if (month > 4) return true;
//    return day >= 1;
//    // ��ȫ���룬Ҫ����20250401֮ǰ�����ڷ���false�����෵��true��
//}
//
//int points(int price) {
//    return price * 5 ;
//    // ��ȫ���룬����20250401֮ǰ���ڵĻ��֡�
//    
//}
//
//int points(int price, int age) {
//    if (age >= 60)
//        return price * 15 ; 
//    else
//        return price * 5 ;  
//    // ��ȫ���룬����20250401֮�����ڵĻ��֡�
//}
//
//int main() {
//    int op, date_type;
//    cin >> op;
//    if (op == 0) {
//        int date;
//        cin >> date;
//        date_type = checkdate(date);
//    }
//    else {
//        int dd, yyyy;
//        string MMM;
//        cin >> dd >> MMM >> yyyy;
//        date_type = checkdate(MMM, yyyy);
//    }
//    int pts;
//    if (date_type) {
//        int age;
//        int price;
//        cin >> age >> price;
//        pts = points(price, age);
//    }
//    else {
//        int price;
//        cin >> price;
//        pts = points(price);
//    }
//    cout << pts << endl;
//    return 0;
//}