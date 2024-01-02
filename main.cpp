


#include <iostream>
#include <string>

using namespace std;

char kare[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int kontrolEt();
void tahta();

int main()
{
    int oyuncu = 1, i, secim;

    char isaretle;
    do
    {
        tahta();
        oyuncu = (oyuncu % 2) ? 1 : 2;

        cout << "Oyuncu " << oyuncu << ", lütfen bir numara girin:  ";
        cin >> secim;

        isaretle = (oyuncu == 1) ? 'X' : 'O';

        if (secim == 1 && kare[1] == '1')
            kare[1] = isaretle;
        else if (secim == 2 && kare[2] == '2')
            kare[2] = isaretle;
        else if (secim == 3 && kare[3] == '3')
            kare[3] = isaretle;
        else if (secim == 4 && kare[4] == '4')
            kare[4] = isaretle;
        else if (secim == 5 && kare[5] == '5')
            kare[5] = isaretle;
        else if (secim == 6 && kare[6] == '6')
            kare[6] = isaretle;
        else if (secim == 7 && kare[7] == '7')
            kare[7] = isaretle;
        else if (secim == 8 && kare[8] == '8')
            kare[8] = isaretle;
        else if (secim == 9 && kare[9] == '9')
            kare[9] = isaretle;
        else
        {
            cout << "Geçersiz hamle ";

            oyuncu--;
            cin.ignore();
            cin.get();
        }
        i = kontrolEt();

        oyuncu++;
    } while (i == -1);
    tahta();
    if (i == 1)
        cout << "==>\aOyuncu " << --oyuncu << " kazandı ";
    else
        cout << "==>\aBerabere";

    cin.ignore();
    cin.get();
    return 0;
}

int kontrolEt()
{
    if (kare[1] == kare[2] && kare[2] == kare[3])
        return 1;
    else if (kare[4] == kare[5] && kare[5] == kare[6])
        return 1;
    else if (kare[7] == kare[8] && kare[8] == kare[9])
        return 1;
    else if (kare[1] == kare[4] && kare[4] == kare[7])
        return 1;
    else if (kare[2] == kare[5] && kare[5] == kare[8])
        return 1;
    else if (kare[3] == kare[6] && kare[6] == kare[9])
        return 1;
    else if (kare[1] == kare[5] && kare[5] == kare[9])
        return 1;
    else if (kare[3] == kare[5] && kare[5] == kare[7])
        return 1;
    else if (kare[1] != '1' && kare[2] != '2' && kare[3] != '3'
             && kare[4] != '4' && kare[5] != '5' && kare[6] != '6'
             && kare[7] != '7' && kare[8] != '8' && kare[9] != '9')
        return 0;
    else
        return -1;
}

void tahta()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Oyuncu 1 (X)  -  Oyuncu 2 (O)" << endl
         << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << kare[1] << "  |  " << kare[2] << "  |  " << kare[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << kare[4] << "  |  " << kare[5] << "  |  " << kare[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << kare[7] << "  |  " << kare[8] << "  |  " << kare[9] << endl;

    cout << "     |     |     " << endl
         << endl;
}


