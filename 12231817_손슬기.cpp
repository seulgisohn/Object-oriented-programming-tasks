#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //변수를 선언한다.
    string name1, name2, name3;
    unsigned int plus1, plus2, plus3;
    int minus1, minus2, minus3;

    //첫번째, 두번째, 세번째 사람의 정보를 입력한다.
    cout << "이름, 수입, 지출: ";
    cin >> name1 >> plus1 >> minus1;

    cout << "이름, 수입, 지출: ";
    cin >> name2 >> plus2 >> minus2;

    cout << "이름, 수입, 지출: ";
    cin >> name3 >> plus3 >> minus3;



    //이름, 수입, 지출을 테이블 형식으로 출력한다.
    cout << "\n이름       수입       지출" << endl;
    cout << setw(10) << left << name1 << setw(10) << plus1 << setw(10) << minus1 << endl;
    cout << setw(10) << left << name2 << setw(10) << plus2 << setw(10) << minus2 << endl;
    cout << setw(10) << left << name3 << setw(10) << plus3 << setw(10) << minus3 << endl;

    int balance1 = plus1 - minus1;
    int balance2 = plus2 - minus2;
    int balance3 = plus3 - minus3;

    cout << "\n잔액 = " << balance1 << " (" << name1 << ")" << endl;
    cout << "잔액 = " << balance2 << " (" << name2 << ")" << endl;
    cout << "잔액 = " << balance3 << " (" << name3 << ")" << endl;

    //평균 잔액을 계산한다.
    double average_balance = (balance1 + balance2 + balance3) / 3.0;

    //소수점 3자리까지 평균 잔액을 출력한다
    cout << fixed << setprecision(3);
    cout << "\n평균잔액 = " << average_balance << endl;

    return 0;
}
