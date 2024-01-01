#include <iostream>
#include <cstdlib>

using namespace std;

void dragon_head(bool inverted = false)
{
    if(inverted)
    {
        cout << "   | " << endl;
        cout << "   | " << endl;
        cout << "  /\\" << endl;
    }
    else
    {
        cout << " M  M " << endl;
        cout << "MMMMMM" << endl;
        cout << "MMMMMM" << endl;
        cout << "MMMMMM" << endl;
        cout << "MMMMMM" << endl;
        cout << "MMMMMM" << endl;
        cout << " MMMM " << endl;
        cout << "  MM  " << endl;
        cout << " |..| " << endl;
        cout << "|o  o|" << endl;
        cout << "| || |" << endl;
        cout << " |  | " << endl;
    }

}

void dragon_body(int n)
{
    switch (n % 4)
    {
    case 0:
        cout << " |  |" << endl;
        break;
    case 1:
        cout << "/  /" << endl;
        break;
    case 2:
        cout << "|  |" << endl;
        break;
    case 3:
        cout << "\\  \\" << endl;
        break;
    default:
        cout << "Error" << endl;
        break;
    }
}

void dragon_tail(int n, bool inverted = false)
{
    if(inverted)
    {
        switch (n % 4)
        {
        case 1:
        case 2:
            cout << "\\  \\" << endl;
        case 0:
        case 3:
            cout << " |  | " << endl;
            cout << "| || |" << endl;
            cout << "|o  o|" << endl;
            cout << " |..| " << endl;
            cout << "  WW  " << endl;
            cout << " WWWW " << endl;
            cout << "WWWWWW" << endl;
            cout << "WWWWWW" << endl;
            cout << "WWWWWW" << endl;
            cout << "WWWWWW" << endl;
            cout << "WWWWWW" << endl;
            cout << " W  W " << endl;
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    }
    else
    {
        switch (n % 4)
        {
        case 0:
        case 3:
            cout << " \\ / " << endl;
            cout << "  | " << endl;
            cout << "  | " << endl;
            break;
        case 1:
        case 2:
            cout << "\\ / " << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    }

}

int main(int argc, char** argv)
{
    int dragon_length = 1;
    bool dragon_inverted = false;

    if(argc > 1)
    {
        dragon_length = atoi(argv[1]);
        if(dragon_length < 0)
        {
            dragon_length = -dragon_length;
            dragon_inverted = true;   
        }
        else if(dragon_length > 100)
        {
            dragon_length = 100;
        }
    }
    else
    {
        cout << "正月何だからまともに引数入れましょうよ" << endl;
        return -1;
    }


    dragon_head(dragon_inverted);
    for(int i = 0; i < dragon_length; i++)
    {
        dragon_body(i);
    }
    dragon_tail(dragon_length - 1, dragon_inverted);
    

    return 0;
}