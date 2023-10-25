int fact(int num)
{
    int sum = 1;
    while(num > 0) {
        sum *= num;
        num--;
    }
    return sum;
}