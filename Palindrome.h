#ifndef PALINDROME_H
#define PALINDROME_H

#include <vector>

using namespace std;

bool isPermutation(unsigned long long n,unsigned long long m)
{
    short num[10];
    short i=0;
    
    for(i=0;i<10;i++)
    {
        num[i]=0;
    }
    
    while(n>9)
    {
        num[n%10]++;
        n/=10;
    }
    num[n]++;
    
    while(m>9)
    {
        num[m%10]--;
        m/=10;
    }
    num[m]--;
    
    for(i=0;i<10;i++)
    {
        if(num[i]!=0)
        {
            return false;
        }
    }
    
    return true;
}


bool isUnique(long n)
{
    bool dig[10];
    
    for(short i=0;i<10;i++)
    {
        dig[i]=false;
    }
    
    long temp=n;
    
    while(temp>=1)
    {
        if(dig[temp%10]==true)
        {
            return false;
        }
        else
        {
            dig[temp%10]=true;
            temp/=10;
        }
    }
    return true;
}

short numDigit(unsigned long long n)
{
    short count = 1;
    
    while(n >= 10)
    {
        count++;
        n=n/10;
    }
    return count;
}

// 1 to 9 pandigital
bool isUniquePan(long n)
{
    bool dig[10];
    
    for(short i=0;i<10;i++)
    {
        dig[i]=false;
    }
    
    long temp=n;
    
    while(temp>=1)
    {
        if(dig[temp%10]==true)
        {
            return false;
        }
        else
        {
            dig[temp%10]=true;
            temp/=10;
        }
    }
    short size=numDigit(n);
    short incr = 0;
    
    for(short x=1;x<=size;x++)
    {
        if(dig[x]==true)
        {
            incr++;
        }
    }
    
    if(incr==size)
    {
        return true;
    }
    return false;
}

// 0 to 9 pandigital
bool isUniquePanZero(long n)
{
    bool dig[10];
    
    for(short i=0;i<10;i++)
    {
        dig[i]=false;
    }
    
    long temp=n;
    
    while(temp>=1)
    {
        if(dig[temp%10]==true)
        {
            return false;
        }
        else
        {
            dig[temp%10]=true;
            temp/=10;
        }
    }
    short size=numDigit(n);
    short incr = 0;
    
    for(short x=0;x<=size;x++)
    {
        if(dig[x]==true)
        {
            incr++;
        }
    }
    
    if(incr==size)
    {
        return true;
    }
    return false;
}

bool containsZero(long n)
{
    for(short i=0;n>0;i++)
    {
        if(n%10==0)
        {
            return true;
        }
        n=n/10;
    }
    return false;
}

/*  Will return for digits with maximum of 30 digits. */
short placeRet(unsigned long long n,short place)
{
    vector<short> nSplit;
    int num = numDigit(n);
    
    while(n>=10)
    {
        nSplit.push_back(n%10);
        n=n/10;
    }
    nSplit.push_back(n);
    
    short retInd;
    
    switch(num)
    {
        case 1:
            return nSplit[0];
            break;
        case 2:
            retInd=2-place;
            return nSplit[retInd];
            break;
        case 3:
            retInd=3-place;
            return nSplit[retInd];
            break;
        case 4:
            retInd=4-place;
            return nSplit[retInd];
            break;
        case 5:
            retInd=5-place;
            return nSplit[retInd];
            break;
        case 6:
            retInd=6-place;
            return nSplit[retInd];
            break;
        case 7:
            retInd=7-place;
            return nSplit[retInd];
            break;
        case 8:
            retInd=8-place;
            return nSplit[retInd];
            break;
        case 9:
            retInd=9-place;
            return nSplit[retInd];
            break;
        case 10:
            retInd=10-place;
            return nSplit[retInd];
            break;
        case 11:
            retInd=11-place;
            return nSplit[retInd];
            break;
        case 12:
            retInd=12-place;
            return nSplit[retInd];
            break;
        case 13:
            retInd=13-place;
            return nSplit[retInd];
            break;
        case 14:
            retInd=14-place;
            return nSplit[retInd];
            break;
        case 15:
            retInd=15-place;
            return nSplit[retInd];
            break;
        case 16:
            retInd=16-place;
            return nSplit[retInd];
            break;
        case 17:
            retInd=17-place;
            return nSplit[retInd];
            break;
        case 18:
            retInd=18-place;
            return nSplit[retInd];
            break;
        case 19:
            retInd=19-place;
            return nSplit[retInd];
            break;
        case 20:
            retInd=20-place;
            return nSplit[retInd];
            break;
        case 21:
            retInd=21-place;
            return nSplit[retInd];
            break;
        case 22:
            retInd=22-place;
            return nSplit[retInd];
            break;
        case 23:
            retInd=23-place;
            return nSplit[retInd];
            break;
        case 24:
            retInd=24-place;
            return nSplit[retInd];
            break;
        case 25:
            retInd=25-place;
            return nSplit[retInd];
            break;
        case 26:
            retInd=26-place;
            return nSplit[retInd];
            break;
        case 27:
            retInd=27-place;
            return nSplit[retInd];
            break;
        case 28:
            retInd=28-place;
            return nSplit[retInd];
            break;
        case 29:
            retInd=29-place;
            return nSplit[retInd];
            break;
        case 30:
            retInd=30-place;
            return nSplit[retInd];
            break;
    }
}

bool palCheck(long long n)
{
    int num = numDigit(n);
    long long revNum = 0;
    long long buf = n;
    for(short i=1;i<=num;i++)
    {
        if(i==1)
        {
            revNum = buf%10;
            buf = buf/10;
        }
        else
        {
            revNum *= 10;
            revNum += buf%10;
            buf /= 10;
        }
    }
    
    if(revNum==n)
    {
        return true;
    }
    return false;
}

long long revRet(long long n)
{
    int num = numDigit(n);
    long long revNum = 0;
    long long buf = n;
    for(short i=1;i<=num;i++)
    {
        if(i==1)
        {
            revNum = buf%10;
            buf = buf/10;
        }
        else
        {
            revNum *= 10;
            revNum += buf%10;
            buf /= 10;
        }
    }
    
    return revNum;
}
#endif
