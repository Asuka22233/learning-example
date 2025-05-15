//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//bool checkdate(string month, int year) {
//    //为简化本题，这个函数已经写好，不需要动，提交的时候连同这个函数一起交上去
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
//    // 补全代码，要求在20250401之前的日期返回false，其余返回true。
//}
//
//int points(int price) {
//    return price * 5 ;
//    // 补全代码，返回20250401之前日期的积分。
//    
//}
//
//int points(int price, int age) {
//    if (age >= 60)
//        return price * 15 ; 
//    else
//        return price * 5 ;  
//    // 补全代码，返回20250401之后日期的积分。
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