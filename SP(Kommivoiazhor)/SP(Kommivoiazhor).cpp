#include"Kommivoiazhor.h"
#include"Menu.h"


int main(int argc,char* argv[])
{
    setlocale(LC_ALL, "Rus");

    try
    {
        Menu m;
    }
    catch (std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }
   


    return 0;
}

