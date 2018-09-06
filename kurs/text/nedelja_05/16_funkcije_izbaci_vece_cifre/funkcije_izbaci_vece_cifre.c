
int izbaciVeceCifre(int a, int k){
    int resenje = 0, cifra, stepen = 1;
    while (a>0) {
        cifra = a%10;
        a /= 10;
        if (cifra<=k) {
            resenje = resenje + stepen*cifra;
            stepen *=10;
        }
    }
    return resenje;
}
