#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int wei=0,ge=0,shi=0,bai=0,qian=0,wan=0,dao=0;
    string da;
    fstream f;
    f.open("88w.cpp",ios::out);
    f<<"#include<iostream>"<<"\n"<<"using namespace std;"<<endl;
    f<<"int main() {"<<endl;
    f<<"int x;";
    f<<"cout << \"请输入一个不多于5位数的正整数:\";"<<"\n"<<"cin >> x;"<<endl;
    f<<"switch(x){"<<endl;
    for (int ww=1;ww<100000;ww++)
    {
        int w1=ww;
        if (w1/10000!=0)
        {
            wei=5;
            ge=w1%10;
            w1 /=10;
            shi=w1%10;
            w1 /=10;
            bai=w1%10;
            w1 /=10;
            qian=w1%10;
            w1 /=10;
            wan=w1;
            dao=wan+10*qian+100*bai+1000*shi+10000*ge;
        }
        else if (w1/1000!=0)
        {
            wei=4;
            ge=w1%10;
            w1 /=10;
            shi=w1%10;
            w1 /=10;
            bai=w1%10;
            w1 /=10;
            qian=w1;
            dao=qian+10*bai+100*shi+1000*ge;
        }
        else if (w1/100!=0)
        {
            wei=3;
            ge=w1%10;
            w1 /=10;
            shi=w1%10;
            w1 /=10;
            bai=w1;
            dao=bai+10*shi+100*ge;
        }
        else if (w1/10!=0)
        {
            wei=2;
            ge=w1%10;
            w1 /=10;
            shi=w1;
            dao=shi+10*ge;
        }
        else
        {
            wei=1;
            ge=w1%10;
            dao=ge;
        }
        if (ge==0)
        {
            da=to_string(dao);
            da='0'+da;
        }
        else{
            da=to_string(dao);
        }
        
        f<<"case "<<ww<<":"<<endl;
        f<<"\t"<<"cout<<\"是"<<wei<<"位数\""<<"<<endl;"<<endl;
        f<<"\t"<<"cout<<\"个位数是："<<ge<<"\""<<"<<endl;"<<endl;
        f<<"\t"<<"cout<<\"十位数是："<<shi<<"\""<<"<<endl;"<<endl;
        f<<"\t"<<"cout<<\"百位数是："<<bai<<"\""<<"<<endl;"<<endl;
        f<<"\t"<<"cout<<\"千位数是："<<qian<<"\""<<"<<endl;"<<endl;
        f<<"\t"<<"cout<<\"万位数是："<<wan<<"\""<<"<<endl;"<<endl;
        f<<"\t"<<"cout<<\"倒过来是："<<da<<"\""<<"<<endl;"<<endl;
        f<<"\t"<<"break;"<<endl;
    }
    f<<"}\n"<<"return 0; \n}"<<endl;
    f.close();
    return 0;
}
