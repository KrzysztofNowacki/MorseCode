#include <iostream>
#include <string>

void decode()
{
    std::string message{}, morse{};
    std::cout<<"Enter the morse message: ";
    std::getline(std::cin,morse);
    unsigned long start=0;
    for(unsigned long i{};i<morse.size();i++)
    {
        if(morse[i]==' '||i==morse.size()-1)
        {
            if(i==morse.size()-1)i++;
            std::string add{};
            for(unsigned long j=start;j<i;j++)
            {
                add+=morse[j];
            }
            if(add==".-") message+="a";
            else if(add=="-...") message+="b";
            else if(add=="-.-.") message+="c";
            else if(add=="-..") message+="d";
            else if(add==".") message+="e";
            else if(add=="..-.") message+="f";
            else if(add=="--.") message+="g";
            else if(add=="....") message+="h";
            else if(add=="..") message+="i";
            else if(add==".---") message+="j";
            else if(add=="-.-") message+="k";
            else if(add==".-..") message+="l";
            else if(add=="--") message+="m";
            else if(add=="-.") message+="n";
            else if(add=="---") message+="o";
            else if(add==".--.") message+="p";
            else if(add=="--.-") message+="q";
            else if(add==".-.") message+="r";
            else if(add=="...") message+="s";
            else if(add=="-") message+="t";
            else if(add=="..-") message+="u";
            else if(add=="...-") message+="v";
            else if(add==".--") message+="w";
            else if(add=="-..-") message+="x";
            else if(add=="-.--") message+="y";
            else if(add=="--..") message+="z";
            else if(add==".----") message+="1";
            else if(add=="..---") message+="2";
            else if(add=="...--") message+="3";
            else if(add=="....-") message+="4";
            else if(add==".....") message+="5";
            else if(add=="-....") message+="6";
            else if(add=="--...") message+="7";
            else if(add=="---..") message+="8";
            else if(add=="----.") message+="9";
            else if(add=="-----") message+="0";
            start=i+1;
            if(morse[i+1]==' ')
            {
                message+=" ";
                start=i+2;
                i++;
            }
        }
    }
    std::cout<<message<<'\n';
}

void code()
{
    std::string message, coded{};
    std::cout<<"Enter the message: ";
    std::getline(std::cin,message);
    for(unsigned long i{};i<message.size();i++)
    {
        int control=message[i];
        std::string add{};
        switch(control)
        {
            case 97:
                add=".-";
                break;
            case 98:
                add="-...";
                break;
            case 99:
                add="-.-.";
                break;
            case 100:
                add="-..";
                break;
            case 101:
                add=".";
                break;
            case 102:
                add="..-.";
                break;
            case 103:
                add="--.";
                break;
            case 104:
                add="....";
                break;
            case 105:
                add="..";
                break;
            case 106:
                add=".---";
                break;
            case 107:
                add="-.-";
                break;
            case 108:
                add=".-..";
                break;
            case 109:
                add="--";
                break;
            case 110:
                add="-.";
                break;
            case 111:
                add="---";
                break;
            case 112:
                add=".--.";
                break;
            case 113:
                add="--.-";
                break;
            case 114:
                add=".-.";
                break;
            case 115:
                add="...";
                break;
            case 116:
                add="-";
                break;
            case 117:
                add="..-";
                break;
            case 118:
                add="...-";
                break;
            case 119:
                add=".--";
                break;
            case 120:
                add="-..-";
                break;
            case 121:
                add="-.--";
                break;
            case 122:
                add="--..";
                break;
            case 49:
                add=".----";
                break;
            case 50:
                add="..---";
                break;
            case 51:
                add="...--";
                break;
            case 52:
                add="....-";
                break;
            case 53:
                add=".....";
                break;
            case 54:
                add="-....";
                break;
            case 55:
                add="--...";
                break;
            case 56:
                add="---..";
                break;
            case 57:
                add="----.";
                break;
            case 48:
                add="-----";
                break;
            case 32:
                add=" ";
                break;
        }
        coded=coded+add+" ";
    }
    if(coded[coded.size()-1]==' ')coded.erase(coded.size()-1,1);
    std::cout<<coded<<'\n';
}

int main()
{
    code();
    decode();
    return 0;
}
