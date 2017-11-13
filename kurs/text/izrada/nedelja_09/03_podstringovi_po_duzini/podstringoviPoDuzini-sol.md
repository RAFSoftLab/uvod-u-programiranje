## Analiza
Potrebno je ucitati tekst, pomoću funkcije gets(). Napravićemo funkciju podstringoviPoDuzini koja kao parametar prima pokazivač na niz karaktera(početno slovo u stringu). Označićemo sa n dužinu niza karaktera. U prvoj for petlji postavljamo sve moguće vrednosti za dužinu podstringa, a ona ima vrednost od 1 do n.-> For(duzina=1;duzina<+n;duzina++)
U drugoj for petlji postavljamo sve moguće vrednosti za levu granicu, a ona će biti u opsegu od 0 do n-duzina  ->  For(levagranica=0;levagranica+duzina<=n;levagranica++)
U trećoj for petlji ćemo proći kroz ceo podstring, koji je u granicama [levagranica,levagranica+duzina).->  For(k=levagranica;k<=levagranica+duzina;k++). U svakoj iteraciji treće petlje ispisaćemo trenutni karakter u podstringu tj s[k]. Nakon izvršetka ove for petlje, ispisali smo jedan podstring, pa je potrebno da pređemo u novi red.
U mainu pozivamo funkciju podstringovi za uneti string s.
