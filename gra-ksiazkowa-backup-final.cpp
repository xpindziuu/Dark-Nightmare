#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

int a, pieniadze, betpieniadze, gosc, kosc, wybor;

const int start = 0;
const int m_prelobby = 1;
const int m_lobby = 2;
const int m_left_wing_01 = 3;
const int m_left_wing_dead_end = 4;
const int m_left_wing_02 = 5;
const int m_left_wing_03 = 6;
const int m_left_wing_bobby_trap = 7;
const int m_right_wing_01 = 8;
const int m_right_wing_secret = 9;
const int m_right_wing_03 = 10;
const int m_right_wing_04 = 11;
const int m_lobby_door = 12;
const int m_ending_sequence = 13;
const int m_secret_ending = 14;
const int qexit = 15;
const int m_cake = 16;
const int tasks = 17;
const int startminigame = 18;

int location = start;
int loadn = 0;

bool amuletInEq = false;
bool isPortalOpen = false;
bool cursed = false;
bool cakeseen = false;
bool caketoched = false;

bool a_pressb = false;
bool a_takeit = false;
bool a_diemon = false;
bool a_npctlk = false;
bool a_ending = false;
bool a_portal = false;
bool a_cakeed = false;

void line(int n)
{
    for (int i = 0; i < n; i++)
        cout << "~";
    cout << endl;
}
void zasady()
{
    system("cls");
    cout << "~~Zasady gry!~~" << endl;
    cout << "1. Wybierz liczbe o 1 do 10." << endl;
    cout << "2. Jezeli zgadniesz liczbe to dostajesz 4-krotnosc zabetowanej pieniadzei." << endl;
    cout << "3. Jezeli nie zgadniesz liczby to tracisz zabetowana pieniadze pieniedzy." << endl;
    line(80);
}
void komp(string k)
{
    if (k == "N")
        k = "polnocnym(N)";
    else if (k == "S")
        k = "poludniowym(S)";
    else if (k == "W")
        k = "zachodnim(W)";
    else if (k == "E")
        k = "wschodnim(E)";
    else if (k == "U")
        k = "niewiadomym";
    cout << "~~Jestes skierowany w kierunku " << k << "~~" << endl;
}

int main()
{
    cout << "Gra ksiazkowa." << endl;
    cout << "Dark Nightmare v1.2" << endl;
    Sleep(750);
    cout << "****Wiktor Pindral 2021****" << endl;
    Sleep(750);
    cout << endl;
    cout << "Pro TIP: Nie wciskaj przyciskow, jezeli nie mozesz przeczytac do czego sluza. :)" << endl;
    Sleep(3000);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Ladowanie mechanik gry ...";
    cout << '-' << flush;
    while (loadn != 20)
    {
        Sleep(100);
        cout << "\b\\" << flush;
        Sleep(100);
        cout << "\b|" << flush;
        Sleep(100);
        cout << "\b/" << flush;
        Sleep(100);
        cout << "\b-" << flush;
        loadn = loadn + 1;
        if (loadn == 5)
        {
            cout << endl;
            cout << "Ladowanie tekstow ... ";
        }
        else if (loadn == 16)
        {
            cout << endl;
            cout << "Ladowanie przedmiotow ... ";
        }
        else if (loadn == 18)
        {
            cout << endl;
            cout << "Konczenie ladowania ... ";
        }
    }

    while (true)
    {
        system("cls");
        system("color A");
        if (location == start)
        {
            system("cls");
            amuletInEq = false;
            isPortalOpen = false;
            cursed = false;
            cakeseen = false;
            caketoched = false;
            cout << "~~Dark Nightmare~~" << endl;
            Sleep(750);
            line(80);
            cout << "Prosze nie wpisywac liter do wyboru, poniewaz psuje to calosc gry. :(" << endl;
            Sleep(750);
            line(80);
            cout << "1. Rozpocznij przygode!" << endl;
            cout << "2. Zobacz osiagniecia." << endl;
            cout << "3. Zagraj w kasyno!" << endl;
            cout << "4. Wyjdz." << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                location = m_prelobby;
            else if (a == 2)
                location = tasks;
            else if (a == 3)
                location = startminigame;
            else if (a == 4)
                location = qexit;
        }
        else if (location == qexit)
        {
            cout << "*Czy napewno chcesz wyjsc?" << endl;
            Sleep(750);
            line(80);
            cout << "1. Tak :(" << endl;
            cout << "2. Nie ^^" << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                break;
            else if (a == 2)
                location = start;
        }
        else if (location == tasks)
        {
            cout << "~~Zdobyte osiagniecia~~" << endl;
            Sleep(750);
            cout << endl;
            cout << "0 = niezaliczone        1 = zaliczone" << endl;
            line(80);
            Sleep(750);
            cout << a_pressb << " - Hmm, ciekawe co ten przycisk robi?" << endl;
            cout << a_takeit << " - Lepiej to zabiore ze soba." << endl;
            cout << a_diemon << " - Deser dla potwora." << endl;
            cout << a_npctlk << " - Dziwna osoba." << endl;
            cout << a_ending << " - To be continued..." << endl;
            cout << a_portal << " - Dokad droga drogi portalu?" << endl;
            cout << a_cakeed << " - C4K3 w42 a 1i3 ???" << endl;
            Sleep(750);
            line(80);
            system("pause");

            location = start;
        }
        else if (location == m_prelobby)
        {
            komp("N");
            Sleep(750);
            line(80);
            cout << "*Budzisz sie w ciemnej komnacie." << endl;
            cout << "*Czujesz jak na glowe sypie ci sie strop." << endl;
            cout << "*Widzisz przed soba hol z drzwiami oswietlony dwoma pochodniami." << endl;
            Sleep(750);
            line(80);
            cout << "1. Idz naprzod." << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                location = m_lobby;
            else if (a == 2)
                location = m_cake;
        }
        else if (location == m_lobby)
        {
            if (amuletInEq == false)
            {
                komp("N");
                Sleep(750);
                line(80);
                cout << "*Wchodzisz do holu." << endl;
                cout << "*Komnata za toba zawala sie." << endl;
                cout << "*Przed toba znajduja sie drzwi." << endl;
                cout << "*Przy drzwiach rowniez znajduje sie przycisk." << endl;
                cout << "*Tabliczka znajdujaca sie przy przysku napisana jest w jakims dziwnym jezyku," << endl;
                cout << "ktorego nie rozumiesz." << endl;
                cout << "*Po lewej stronie znajduje sie ciemny korytarz," << endl;
                cout << "natomiast po prawej komnata oswietlona lekko fioletowym swiatlem." << endl;
                Sleep(750);
                line(80);
                cout << "1. Idz naprzod" << endl;
                cout << "2. Idz w lewo" << endl;
                cout << "3. Idz w prawo" << endl;
                cout << "4. Wcisnij przycisk" << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                {
                    system("cls");
                    cout << "*Drzwi sa zamkniete. Jakby magiczna sila nie pozwalaja ci ich otworzyc." << endl;
                    Sleep(750);
                    cout << "*Potrzebujesz jakiego przedmiotu jakby je otworzyc." << endl;
                    Sleep(750);
                    line(80);
                    system("pause");

                    location = m_lobby;
                }
                else if (a == 2)
                    location = m_left_wing_01;
                else if (a == 3)
                    location = m_right_wing_01;
                else if (a == 4)
                {
                    a_pressb = true;
                    system("cls");
                    cout << "*Sufit osuwa sie i cie miazdzy." << endl;
                    Sleep(750);
                    cout << "*Nie zyjesz." << endl;
                    Sleep(750);
                    line(80);
                    cout << "1. Zagraj ponownie" << endl;
                    cout << "2. Wyjdz" << endl;
                    cout << endl;
                    cout << "Wybierz opcje: ";
                    cin >> a;

                    if (a == 1)
                        location = start;
                    else if (a == 2)
                        location = qexit;
                }
            }
            else if (amuletInEq == true)
            {
                komp("N");
                Sleep(750);
                line(80);
                cout << "*Wchodzisz do holu." << endl;
                cout << "*Komnata za toba zawala sie." << endl;
                cout << "*Przed toba znajduja sie drzwi." << endl;
                cout << "*Przy drzwiach rowniez znajduje sie przycisk." << endl;
                cout << "*Tabliczka znajdujaca sie przy przysku napisana jest w jakims dziwnym jezyku," << endl;
                cout << "ktorego nie rozumiesz." << endl;
                cout << "*Po lewej stronie znajduje sie ciemny korytarz," << endl;
                cout << "natomiast po prawej komnata oswietlona lekko fioletowym swiatlem." << endl;
                Sleep(750);
                line(80);
                cout << "1. Idz naprzod" << endl;
                cout << "2. Idz w lewo" << endl;
                cout << "3. Idz w prawo" << endl;
                cout << "4. Wcisnij przycisk" << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                {
                    system("cls");
                    cout << "*Czy napewno chcesz uzyc przedmiotu aby otworzyc drzwi?" << endl;
                    Sleep(750);
                    line(80);
                    cout << "1. Tak" << endl;
                    cout << "2. Nie" << endl;
                    cout << endl;
                    cout << "Wybierz opcje: ";
                    cin >> a;

                    if (a == 1)
                        location = m_lobby_door;
                    else if (a == 2)
                        location = m_lobby;
                }
                else if (a == 2)
                    location = m_left_wing_01;
                else if (a == 3)
                    location = m_right_wing_01;
                else if (a == 4)
                {
                    system("cls");
                    cout << "*Sufit osuwa sie i cie miazdzy." << endl;
                    Sleep(750);
                    cout << "*Nie zyjesz." << endl;
                    Sleep(750);
                    line(80);
                    cout << "1. Zagraj ponownie" << endl;
                    cout << "2. Wyjdz" << endl;
                    cout << endl;
                    cout << "Wybierz opcje: ";
                    cin >> a;

                    if (a == 1)
                        location = start;
                    else if (a == 2)
                        location = qexit;
                }
            }
        }
        else if (location == m_left_wing_01)
        {
            komp("W");
            Sleep(750);
            line(80);
            cout << "*Wchodzisz do korytarza." << endl;
            cout << "*Jest tak ciemno, ze nie widzisz konca korytarza." << endl;
            cout << "*Po twojej prawej stronie widac wejscie do jeszcze ciemnejszego pomieszczenia." << endl;
            Sleep(750);
            line(80);
            cout << "1. Idz naprzod." << endl;
            cout << "2. Idz w prawo." << endl;
            cout << "3. Cofnij sie." << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                location = m_left_wing_02;
            else if (a == 2)
                location = m_left_wing_dead_end;
            else if (a == 3)
                location = m_lobby;
        }
        else if (location == m_left_wing_dead_end)
        {
            if (cursed == false)
            {
                komp("N");
                Sleep(750);
                line(80);
                cout << "*Trafiasz do pomieszczenia okrytego w egipskich ciemnosciach." << endl;
                cout << "*W pomieszczeniu ledwo dostrzegasz szkielet jakiegos nieszczesnika," << endl;
                cout << "ktory musial tu trafic przed toba." << endl;
                cout << "*W pomieszczeniu rowniez panuje spacyficzny zapach, ktorego nie da sie opisac." << endl;
                Sleep(750);
                line(80);
                cout << "1. Cofnij sie." << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                    location = m_left_wing_01;
            }
            else if (cursed == true)
            {
                komp("N");
                Sleep(750);
                line(80);
                cout << "*Trafiasz do pomieszczenia okrytego w egipskich ciemnosciach." << endl;
                cout << "*W pomieszczeniu ledwo dostrzegasz szkielet jakiegos nieszczesnika," << endl;
                cout << "ktory musial tu trafic przed toba." << endl;
                cout << "*Zaczynasz czuc chlod." << endl;
                cout << "*Nagle slyszysz, jakby ktos do ciebie szeptal z lewej strony." << endl;
                cout << "Cos szepcie czy nieskladne zdania, ktorych nie sposob zrozumiec." << endl;
                cout << "Jednyne co udaje ci sie zrozumiec to dwie liczby, ktore byly wplatane w wypowiedz." << endl;
                cout << "Sa to 1 i 0." << endl;
                Sleep(750);
                line(80);
                cout << "1. Cofnij sie." << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                    location = m_left_wing_01;
            }
        }
        else if (location == m_left_wing_02)
        {
            komp("W");
            Sleep(750);
            line(80);
            cout << "*Docierasz do konca korytarza." << endl;
            Sleep(750);
            cout << "*Zaczynasz slyszec jakies dziwne dzwieki dobiegajace z pokoju po twojej prawej stronie." << endl;
            Sleep(750);
            line(80);
            cout << "1. Idz w prawo." << endl;
            cout << "2. Cofnij sie." << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                location = m_left_wing_03;
            else if (a == 2)
                location = m_left_wing_01;
        }
        else if (location == m_left_wing_03)
        {
            if (amuletInEq == false)
            {
                komp("N");
                Sleep(750);
                line(80);
                cout << "*Trafiasz do rozwalonego pokoju." << endl;
                cout << "*Slyszysz dosyc glosne ryki jakiego potwora." << endl;
                cout << "*Na wprost widzisz uchylone drzwi przez ktore najprawdopodobniej przeszedl wlasnie potwor." << endl;
                cout << "*Z rogu pokoju dostrzegasz artefakt." << endl;
                Sleep(750);
                line(80);
                cout << "1. Idz naprzod." << endl;
                cout << "2. Wez artefakt." << endl;
                cout << "3. Cofnij sie." << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                    location = m_left_wing_bobby_trap;
                else if (a == 2)
                {
                    amuletInEq = true;
                    a_takeit = true;
                    location = m_left_wing_03;
                }
                else if (a == 3)
                    location = m_left_wing_02;
            }
            else if (amuletInEq == true)
            {
                komp("N");
                Sleep(750);
                line(80);
                cout << "*Trafiasz do rozwalonego pokoju." << endl;
                cout << "*Slyszysz dosyc glosne ryki jakiego potwora." << endl;
                cout << "*Na wprost widzisz uchylone drzwi przez ktore najprawdopodobniej przeszedl wlasnie potwor." << endl;
                Sleep(750);
                line(80);
                cout << "1. Idz naprzod." << endl;
                cout << "2. Cofnij sie." << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                    location = m_left_wing_bobby_trap;
                else if (a == 2)
                    location = m_left_wing_02;
            }
        }
        else if (location == m_left_wing_bobby_trap)
        {
            a_diemon = true;
            komp("N");
            Sleep(750);
            line(80);
            cout << "*Przechodzisz przez uchylone drzwi." << endl;
            cout << "*Widzisz przez soba czerwone oczy potwora wylaniajace sie z ciemnosci." << endl;
            cout << "*Potwor w najmniej spodziewanym momencie dopada cie." << endl;
            cout << "*Nie zyjesz." << endl;
            Sleep(750);
            line(80);
            cout << "1. Zagraj ponownie." << endl;
            cout << "2. Wyjdz." << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                location = start;
            else if (a == 2)
                location = qexit;
        }
        else if (location == m_right_wing_01)
        {
            if (isPortalOpen == false)
            {
                komp("E");
                Sleep(750);
                line(80);
                cout << "*Wchodzisz do komnaty oswietlonej fioletowym swiatlem." << endl;
                cout << "*Przed soba dostrzegasz portal, ktory jest nieaktywny." << endl;
                cout << "*Obok siebie widzisz klawiature numeryczna." << endl;
                cout << "*Najprawdopodobniej potrzebujesz 4-cyfrowej liczby, aby go aktywowac." << endl;
                cout << "*Po swojej lewej stronie znajduje sie ciemny korytarz." << endl;
                Sleep(750);
                line(80);
                cout << "1. Idz naprzod." << endl;
                cout << "2. Idz w lewo" << endl;
                cout << "3. Cofnij sie." << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                {
                    system("cls");
                    cout << "*Nie mozesz skorzystac z portalu, poniewaz nie jest aktywny." << endl;
                    Sleep(750);
                    line(80);
                    system("pause");

                    location = m_right_wing_01;

                }
                else if (a == 2)
                    location = m_right_wing_03;
                else if (a == 3)
                    location = m_lobby;
                else if (a == 1004)
                {
                    isPortalOpen = true;
                }
            }
            else if (isPortalOpen == true)
            {
                komp("E");
                Sleep(750);
                line(80);
                cout << "*Wchodzisz do komnaty oswietlonej fioletowym swiatlem." << endl;
                Sleep(750);
                cout << "*Portal wydaje sie aktywny." << endl;
                Sleep(750);
                line(80);
                cout << "1. Idz naprzod." << endl;
                cout << "2. Idz w lewo." << endl;
                cout << "3. Cofnij sie." << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                    location = m_right_wing_secret;
                else if (a == 2)
                    location = m_right_wing_03;
                else if (a == 3)
                    location = m_lobby;
            }
        }
        else if (location == m_right_wing_03)
        {
            komp("N");
            Sleep(750);
            line(80);
            cout << "*Jestes w ciemnym korytarzu. " << endl;
            Sleep(750);
            cout << "*Korytarz prowadzi w prawa strone." << endl;
            Sleep(750);
            line(80);
            cout << "1. Idz w prawo." << endl;
            cout << "2. Cofnij sie." << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                location = m_right_wing_04;
            else if (a == 2)
                location = m_right_wing_01;
        }
        else if (location == m_right_wing_04)
        {
            if (cursed == false)
            {
                komp("E");
                Sleep(750);
                line(80);
                cout << "*Trafiasz do dosyc sporego pomieszczenia." << endl;
                cout << "*W pomieszczeniu znajduje sie osoba odziana w ciemne szaty," << endl;
                cout << "ktora szepcze cos do siebie co chwile." << endl;
                cout << "*Przed nim lezy zapisany kawalek papieru." << endl;
                Sleep(750);
                line(80);
                cout << "1. Zagadaj do nieznajomego." << endl;
                cout << "2. Przeczytaj kawalek papieru." << endl;
                cout << "3. Cofnij sie." << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                {
                    a_npctlk = true;
                    cursed = true;
                    system("cls");
                    cout << "*Zagadujesz do nieznajomego." << endl;
                    cout << "*Nieznajomy zdaje sie nie rozumiec twoich slow." << endl;
                    cout << "*Probuje ci przekazac coc rekoma, natomiast ty nic nie rozumiesz." << endl;
                    cout << "*Nieznajomy nagle zaczyna krzyczec i ucieka z pomieszczenia." << endl;
                    cout << "*Nagle zaczynasz czuc dziwny chlod w sobie." << endl;
                    Sleep(750);
                    line(80);
                    system("pause");

                    location = m_right_wing_04;
                }
                else if (a == 2)
                {
                    system("cls");
                    cout << "*Podnosisz kawalek papieru z kamiennej podlogi." << endl;
                    Sleep(750);
                    cout << "*Kawalek papieru jest zapisany dziwnymi znakami, ktorych nie rozumiesz." << endl;
                    Sleep(750);
                    cout << "*Wsrod tajemniczych znakow udaje ci sie dostrzec dwie liczby." << endl;
                    Sleep(750);
                    cout << "*Sa to 0 i 4." << endl;
                    Sleep(750);
                    line(80);
                    system("pause");

                    location = m_right_wing_04;
                }
                else if (a == 3)
                    location = m_right_wing_03;
            }
            else if (cursed == true)
            {
                komp("E");
                Sleep(750);
                line(80);
                cout << "*Znajdujesz sie w dosyc sporym pomieszczeniu." << endl;
                Sleep(750);
                cout << "*Na podlodze lezy zapisany kawalek papieru." << endl;
                Sleep(750);
                line(80);
                cout << "1. Przeczytaj kawalek papieru." << endl;
                cout << "2. Cofnij sie." << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                {
                    system("cls");
                    cout << "*Podnosisz kawalek papieru z kamiennej podlogi." << endl;
                    Sleep(750);
                    cout << "*Kawalek papieru jest zapisany dziwnymi znakami, ktorych nie rozumiesz." << endl;
                    Sleep(750);
                    cout << "*Wsrod tajemniczych znakow udaje ci sie dostrzec dwie liczby." << endl;
                    Sleep(750);
                    cout << "*Sa to 0 i 4." << endl;
                    Sleep(750);
                    line(80);
                    system("pause");
                        
                    location = m_right_wing_04;
                }
                else if (a == 2)
                    location = m_right_wing_03;
            }
        }
        else if (location == m_right_wing_secret)
        {
            komp("U");
            Sleep(750);
            line(80);
            cout << "*Przechodzisz przez portal znajdujesz sie w dlugim korytarzu z razacym swiatlem na koncu." << endl;
            cout << "*Portal, z ktorego przyszedles jest jeszcze aktywny." << endl;
            cout << "*Mozesz jeszcze przez niego wrocic." << endl;
            Sleep(750);
            line(80);
            Sleep(750);
            cout << "!! UWAGA !!" << endl;
            Sleep(750);
            cout << "*Jezeli pojdziesz dalej nie bedziesz mogl juz wrocic. Zastanow sie nad swoja decyzja!" << endl;
            Sleep(750);
            line(80);
            cout << "1. Idz naprzod." << endl;
            cout << "2. Cofnij sie." << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                location = m_secret_ending;
            else if (a == 2)
                location = m_right_wing_01;
        }
        else if (location == m_secret_ending)
        {
            if (cakeseen == false)
            {
                a_portal = true;
                komp("U");
                Sleep(750);
                line(80);
                cout << "*Wchodzisz w razace swiatlo." << endl;
                Sleep(750);
                cout << "*Swiatlo jest tak mocne, ze nie sposob otworzyc oczu." << endl;
                Sleep(750);
                cout << "*Brniesz w nieznane przed siebie." << endl;
                Sleep(750);
                cout << "*Nagle slyszysz szepty docierajace do twoich uszy." << endl;
                Sleep(750);
                cout << "*Ktos probuje ostrzec cie przed czyms tobie nieznanym." << endl;
                Sleep(750);
                line(80);
                cout << "1. Koniec..?" << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                {
                    system("cls");
                    cout << "*Dziekuje za gre!" << endl;
                    Sleep(750);
                    cout << "*Mam nadzieje, ze przez ta chwile dobrze sie bawiles!" << endl;
                    Sleep(750);
                    cout << "(>^-^)>" << endl;
                    Sleep(750);
                    line(80);
                    cout << "1. Zagraj jeszcze raz" << endl;
                    cout << "2. Wyjdz" << endl;
                    cout << endl;
                    cout << "Wybierz opcje: ";
                    cin >> a;

                    if (a == 1)
                        location = start;
                    else if (a == 2)
                        location = qexit;
                }
            }
            else if (cakeseen == true)
            {
                a_cakeed = true;
                komp("U");
                Sleep(750);
                line(80);
                cout << "*Wchodzisz w razace swiatlo." << endl;
                Sleep(750);
                cout << "*Swiatlo jest tak mocne, ze nie sposob otworzyc oczu." << endl;
                Sleep(750);
                cout << "*Brniesz w nieznane przed siebie." << endl;
                Sleep(750);
                cout << "*Nagle slyszysz szepty docierajace do twoich uszy." << endl;
                Sleep(750);
                cout << "*Ktos probuje ostrzec cie przed czyms tobie nieznanym." << endl;
                Sleep(750);
                cout << "* 01110010 01100101 01101101 01100101 01101101 01100010 01100101 01110010 00100000 " << endl;
                Sleep(750);
                cout << "01110100 01101000 01100101 00100000 01100011 01100001 01101011 01100101 00100000 " << endl;
                Sleep(750);
                cout << "01101001 01110011 00100000 01100001 00100000 01101100 01101001 01100101 00101110." << endl;
                Sleep(750);
                line(80);
                cout << "1. Koniec..?" << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                {
                    system("cls");
                    cout << "*Dziekuje za gre!" << endl;
                    Sleep(750);
                    cout << "*Mam nadzieje, ze przez ta chwile dobrze sie bawiles!" << endl;
                    Sleep(750);
                    cout << "(>^-^)>" << endl;
                    Sleep(750);
                    line(80);
                    cout << "1. Zagraj jeszcze raz" << endl;
                    cout << "2. Wyjdz" << endl;
                    cout << endl;
                    cout << "Wybierz opcje: ";
                    cin >> a;

                    if (a == 1)
                        location = start;
                    else if (a == 2)
                        location = qexit;
                }
            }
        }
        else if (location == m_lobby_door)
        {
            komp("N");
            Sleep(750);
            line(80);
            cout << "*Przechodzisz przez magiczne drzwi." << endl;
            cout << "*Przed soba widzisz cos w stylu wielkiego podziemnego zamku." << endl;
            cout << "*Drzwi, przez ktore przeszedles sa jeszcze otwarte." << endl;
            cout << "*Mozesz jeszcze przez nie wrocic." << endl;
            Sleep(750);
            line(80);
            Sleep(750);
            cout << "!! UWAGA !!" << endl;
            Sleep(750);
            cout << "*Jezeli pojdziesz dalej nie bedziesz mogl juz wrocic. Zastanow sie nad swoja decyzja!" << endl;
            Sleep(750);
            line(80);
            cout << "1. Idz naprzod." << endl;
            cout << "2. Cofnij sie." << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                location = m_ending_sequence;
            else if (a == 2)
                location = m_lobby;
        }
        else if (location == m_ending_sequence)
        {
            a_ending = true;
            komp("N");
            Sleep(750);
            line(80);
            cout << "*Robisz kilka krokow przed siebie." << endl;
            Sleep(750);
            cout << "*Zachwycasz sie mrocznym aczkolwiek zapierajacym dech w piersiach widoku." << endl;
            Sleep(750);
            cout << "*Twoj zachwyt jest szybko przerwany przez ryczenie dobiegajace z tylu." << endl;
            Sleep(750);
            cout << "*Wnet slyszysz jak cos zaczyna cie gonic." << endl;
            Sleep(750);
            cout << "*Zaczynasz pedzic ile sil w nogach do zamku przed toba." << endl;
            Sleep(750);
            line(80);
            cout << "1. Koniec..?" << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                system("cls");
            cout << "*Dziekuje za gre!" << endl;
            Sleep(750);
            cout << "*Mam nadzieje, ze przez ta chwile dobrze sie bawiles!" << endl;
            Sleep(750);
            cout << "(>^-^)>" << endl;
            Sleep(750);
            line(80);
            cout << "1. Zagraj jeszcze raz" << endl;
            cout << "2. Wyjdz" << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
                location = start;
            else if (a == 2)
                location = qexit;
        }
        else if (location == m_cake)
        {
            if (caketoched == false)
            {
                cakeseen = true;
                komp("S");
                Sleep(750);
                line(80);
                cout << "Trafiasz to dziwnego pomieszczenia." << endl;
                cout << "Pomieszcznie jest calkowicie ciemne oprocz podswietlonego ciasta na stole." << endl;
                cout << "Ciekawe jakim sposobem znalazlo sie tu ciasto?" << endl;
                Sleep(750);
                line(80);
                cout << "1. Zjedz ciasto" << endl;
                cout << "2. Wyjdz z pokoju" << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                {
                    system("cls");
                    cout << "Chciales zjesc ciasto natomiast doslownie po przylozeniu reki do ciasta," << endl;
                    Sleep(750);
                    cout << "ono zniklo." << endl;
                    Sleep(750);
                    line(80);
                    cout << "1. ..." << endl;
                    cout << endl;
                    cout << "Wybierz opcje: ";
                    cin >> a;

                    if (a == 1)
                        caketoched = true;
                }
                else if (a == 2)
                    location = m_lobby;
            }
            else if (caketoched == true)
            {
                komp("S");
                Sleep(750);
                line(80);
                cout << "Trafiasz to dziwnego pomieszczenia." << endl;
                Sleep(750);
                cout << "Pomieszcznie jest calkowicie ciemne oprocz podswietlonego stolu." << endl;
                Sleep(750);
                line(80);
                cout << "1. Wyjdz z pokoju" << endl;
                cout << endl;
                cout << "Wybierz opcje: ";
                cin >> a;

                if (a == 1)
                    location = m_lobby;
            }
        }
        else if (location == startminigame)
        {
            cout << "~~Gra kasyno Main Menu~~" << endl;
            Sleep(750);
            cout << "Prosze nie wpisywac liter do wyboru, poniewaz psuje to calosc gry. :(" << endl;
            Sleep(750);
            line(80);
            cout << "1. Rozpocznij!" << endl;
            cout << "2. Wroc." << endl;
            cout << endl;
            cout << "Wybierz opcje: ";
            cin >> a;

            if (a == 1)
            {
                system("cls");
                srand(time(NULL));
                cout << "~~Gra kasyno~~" << endl;
                line(80);
                cout << "Wprowadz pieniadze pieniedzy, z ktora chcesz zaczac gre: ";
                cin >> pieniadze;

                do
                {
                    system("cls");
                    zasady();
                    cout << "Twoj balans: $" << pieniadze << endl;
                    do
                    {
                        cout << "Wpisz pieniadze do betu: $";
                        cin >> betpieniadze;
                        if (betpieniadze > pieniadze)
                            cout << "*Nie mozesz zabetowac wiecej pieniedzy niz aktualnie masz." << endl;
                    } while (betpieniadze > pieniadze);
                    do
                    {
                        cout << "Wpisz liczbe od 1 do 10: ";
                        cin >> wybor;
                        if (wybor <= 0 || wybor > 10)
                            cout << "Podaj liczbe od 1 do 10 :";
                    } while (wybor <= 0 || wybor > 10);
                    kosc = rand() % 10 + 1;
                    if (kosc == wybor)
                    {
                        cout << "*Zgadles! Wygrales 4-krotnosc betu: " << betpieniadze * 4 << endl;
                        pieniadze = pieniadze + (betpieniadze * 4);
                    }
                    else
                    {
                        cout << "*Niestety nie zgadles. Tracisz: " << betpieniadze << endl;
                        pieniadze = pieniadze - betpieniadze;
                    }
                    line(80);
                    cout << "*Liczba to: " << kosc << endl;
                    cout << "*" << "Aktualnie masz $" << pieniadze << endl;
                    if (pieniadze == 0)
                    {
                        cout << "*Przegrales, nie masz juz pieniedzy." << endl;
                        Sleep(3000);
                        break;
                    }
                    wybor = 0;
                    cout << "*Chcesz zagrac jeszcze raz?" << endl;
                    line(80);
                    cout << "1. Tak." << endl;
                    cout << "2. Nie." << endl;
                    cout << "Wybierz opcje: ";
                    cin >> wybor;

                } while (wybor == 1);
            }
            else if (a == 2)
                location = start;
        }
        
    }
    return 0;
}


