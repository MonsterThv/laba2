#include <iostream>

using namespace std;


void task1() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x % 2 != 0 && y % 2 != 0) cout << "condition is true" << endl;
    else cout << "condition is false" << endl;

    if ((x < 20 && y > 20) || (x > 20 && y < 20)) cout << "condition is true" << endl;
    else cout << "condition is false" << endl;

    if (x == 0 || y == 0) cout << "condition is true" << endl;
    else cout << "condition is false" << endl;

    if (x < 0 && y < 0 && z < 0) cout << "condition is true" << endl;
    else cout << "condition is false" << endl;

    if ((x % 5 == 0 && y % 5 != 0 && z % 5 != 0) || (y % 5 == 0 && x % 5 != 0 && z % 5 != 0) || (z % 5 == 0 && y % 5 != 0 && x % 5 != 0)) cout << "condition is true" << endl;
    else cout << "condition is false" << endl;

    if (x > 100 || y > 100 || z > 100) cout << "condition is true" << endl;
    else cout << "condition is false" << endl;
}


void task2() {
    int pos1[2];
    int pos2[2];
    bool ferz = false;
    cin >> pos1[0] >> pos1[1];
    cin >> pos2[0] >> pos2[1];

    if ((pos1[0] == pos2[0] && pos1[1] != pos2[1]) || (pos1[1] == pos2[1] && pos1[0] != pos2[0])) {
        ferz = true;
        cout << "condition is true" << endl;
    }
    else cout << "condition is false" << endl;

    int tempx = 0;
    int tempy = 0;
    if (pos2[0] >= pos1[0]) tempx = 1;
    else tempx = -1;
    if (pos2[1] >= pos1[1]) tempy = 1;
    else tempy = -1;
    int y = pos1[1];
    bool flag = true;
    for (int x = pos1[0]; (x <= 8 && x > 0); x += tempx) {
        if (pos2[0] == x && pos2[1] == y) {
            cout << "condition is true" << endl;
            ferz = true;
            flag = false;
            break;
        }
        y += tempy;
    }
    if (flag) {
        cout << "condition is false" << endl;
        flag = true;
    }

    y = pos1[1] - 1;
    for (int x = pos1[0] - 1; x <= pos1[0] + 1; x++) {
        for (int y = pos1[1] - 1; y <= pos1[1] + 1; y++) {
            if (pos2[0] == x && pos2[1] == y) {
                cout << "condition is true" << endl;
                flag = false;
            }
        }
    }
    if (flag) {
        cout << "condition is false" << endl;
        flag = true;
    }

    if (ferz) {
        cout << "condition is true" << endl;
    }
    else
    {
        cout << "condition is false" << endl;
    }

    if ((pos1[1] + 1 == pos2[1] && pos1[0] == pos2[0]) || (pos1[1] + 1 == pos2[1] && pos1[0] - 1 == pos2[0]) || (pos1[1] + 1 == pos2[1] && pos1[0] + 1 == pos2[0])) {
        cout << "condition is true" << endl;
    }
    else
    {
        cout << "condition is false" << endl;
    }
}
void task3() {
    int n;
    cin >> n;
    for (int i = 1; i <= 9; i++) {
        cout << i << " * 7 = " << i * 7 << endl;
    }
    cout << endl;
    for (int i = 1; i <= 9; i++) {
        cout << i << " * "<< n << " = " << i * n << endl;
    }
}

void task4() {
    long long pr = 1;
    for (int i = 8; i <= 15; i++) {
        pr *= i;
    }
    cout << pr << endl;
    pr = 1;

    int a;
    cin >> a;
    for (int i = a; i <= 20; i++) {
        pr *= i;
    }
    cout << pr << endl;
    pr = 1;

    int b;
    cin >> b;
    for (int i = 1; i <= b; i++) {
        pr *= i;
    }
    cout << pr << endl;
    pr = 1;

    int a2, b2;
    cin >> a2 >> b2;
    for (int i = a2; i <= b2; i++) {
        pr *= i;
    }
    cout << pr << endl;
}
int main()
{
    int task_number;
    cout << "task number - ";
    cin >> task_number;
    switch (task_number)
    {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
    }
    return 0;
}
