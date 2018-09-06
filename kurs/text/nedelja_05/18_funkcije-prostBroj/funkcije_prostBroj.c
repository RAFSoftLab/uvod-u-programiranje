 int prostBroj(int a){
    int prost = 1, i;
    for (i=2;i<a;i++) {
       if (a%i == 0) return 0;
    }
    return 1;
}
