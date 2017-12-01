//Oisin DAKE
//Lab 12
//Complex Number Calculations
#include <iostream>//directives

using namespace std;


// structure
struct comp
{
    float im;
    float re;

};

comp mntiply(comp st1, comp st2);//defined
comp dvide(comp st1, comp st2);
comp add(comp st1, comp st2);
comp subtract(comp st1, comp st2);

using namespace std;


//main program
int main()
{
    struct comp entry1, entry2, sum, sub, mn, dv;

    cout << "Enter a real number: " << endl;// dispaly to user to get value
    cin >> entry1.re;
    cout << "Enter an imaginary number: " << endl;
    cin >> entry1.im;
    cout << "Enter another real number: " << endl;
    cin >> entry2.re;
    cout << "Enter another imaginary number: " << endl;
    cin >> entry2.im;

    sum = add(entry1, entry2);
    if(sum.im >= 0)
    {
        cout << "Sum is " << sum.re << "+" << sum.im << "j" << endl;
    }
    else
    {
        cout << "Sum is " << sum.re << sum.im << "j" << endl;
    }

    sub = subtract(entry1, entry2);

    if(sub.im >= 0)
    {
        cout << "Subtraction is " << sub.re << "+" << sub.im << "j" << endl;
    }
    else
    {
        cout << "Subtraction is " << sub.re << sub.im << "j" << endl;
    }

    mn = mntiply(entry1, entry2);


    if(mn.im >= 0)
    {
        cout << "mntiplaction is " << mn.re << "+" << mn.im << "j" << endl;
    }
    else
    {
        cout << "mntiplaction is " << mn.re << mn.im << "j" << endl;
    }
    dv = dvide(entry1, entry2);


    if(dv.im >= 0)
    {
        cout << "dvision is " << dv.re << "+" << dv.im << "j" << endl;
    }
    else
    {
        cout << "dvision is " << dv.re << dv.im << "j" << endl;
    }
    return 0;
}


comp add(comp st1, comp st2)
{

    struct comp Sum;//addition
    Sum.re = st1.re + st2.re;
    Sum.im = st1.im + st2.im;

    return Sum;
}


comp subtract(comp st1, comp st2)
{
    struct comp Sub;//subtraction
    Sub.re = st1.re - st2.re;
    Sub.im = st1.im - st2.im;
    return Sub;
}

comp mntiply(comp st1, comp st2)
{

    struct comp mn;
    mn.re = st1.re*st2.re - st1.im*st2.im;
    mn.im = st1.im*st2.re + st1.re*st2.im;

    return mn;
}

comp dvide(comp st1, comp st2)
{
    struct comp dv;
    float denr;
    dv.re = st1.re*st2.re + st1.im*st2.im;
    dv.im = st1.im*st2.re - st1.re*st2.im;
    denr = st2.re*st2.re + st2.im*st2.im;
    dv.re = dv.re/denr;
    dv.im = dv.im/denr;

    return dv;
}
