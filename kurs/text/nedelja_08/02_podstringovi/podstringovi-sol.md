## Analiza
Potrebno je ucitati tekst, pomoću funkcije gets(). Napravićemo funkciju podstringovi koja kao parametar prima pokazivač na niz karaktera(početno slovo u stringu). Označićemo sa n dužinu niza karaktera. U prvoj for petlji postavljamo sve moguće vrednosti za levu granicu, a ona će biti u opsegu od 0 do broja karaktera-1.-> For(levagranica=0;levagranica<n;levagranica++)
U drugoj for petlji postavljamo sve moguće vrednosti za desnu granicu podstringa, a ona će biti u opsegu od leve granice, do broja karaktera-1  ->  For(desnagranica=levagranica;desnagranica<n;desnagranica++)
U trećoj for petlji ćemo proći kroz ceo podstring, koji je u granicama [levagranica,desnagranica].->  For(k=levagranica;k<=desnagranica;k++). U svakoj iteraciji treće petlje ispisaćemo trenutni karakter u podstringu tj s[k]. Nakon izvršetka ove for petlje, ispisali smo jedan podstring, pa je potrebno da pređemo u novi red.
U mainu pozivamo funkciju podstringovi za uneti string s.
