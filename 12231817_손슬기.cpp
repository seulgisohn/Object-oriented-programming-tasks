#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //������ �����Ѵ�.
    string name1, name2, name3;
    unsigned int plus1, plus2, plus3;
    int minus1, minus2, minus3;

    //ù��°, �ι�°, ����° ����� ������ �Է��Ѵ�.
    cout << "�̸�, ����, ����: ";
    cin >> name1 >> plus1 >> minus1;

    cout << "�̸�, ����, ����: ";
    cin >> name2 >> plus2 >> minus2;

    cout << "�̸�, ����, ����: ";
    cin >> name3 >> plus3 >> minus3;



    //�̸�, ����, ������ ���̺� �������� ����Ѵ�.
    cout << "\n�̸�       ����       ����" << endl;
    cout << setw(10) << left << name1 << setw(10) << plus1 << setw(10) << minus1 << endl;
    cout << setw(10) << left << name2 << setw(10) << plus2 << setw(10) << minus2 << endl;
    cout << setw(10) << left << name3 << setw(10) << plus3 << setw(10) << minus3 << endl;

    int balance1 = plus1 - minus1;
    int balance2 = plus2 - minus2;
    int balance3 = plus3 - minus3;

    cout << "\n�ܾ� = " << balance1 << " (" << name1 << ")" << endl;
    cout << "�ܾ� = " << balance2 << " (" << name2 << ")" << endl;
    cout << "�ܾ� = " << balance3 << " (" << name3 << ")" << endl;

    //��� �ܾ��� ����Ѵ�.
    double average_balance = (balance1 + balance2 + balance3) / 3.0;

    //�Ҽ��� 3�ڸ����� ��� �ܾ��� ����Ѵ�
    cout << fixed << setprecision(3);
    cout << "\n����ܾ� = " << average_balance << endl;

    return 0;
}
