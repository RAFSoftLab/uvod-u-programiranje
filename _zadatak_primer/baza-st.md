Марс. Четврта планета од Сунца, названа по Римском богу рата, позната и као "црвена планета" због гвожђе(III)оксида који преовлађује на њеној површини, планета чији је астрономски симбол уједно и симбол за мушки род, чији дан траје $24$ сата и $40$ минута и за коју се прича да поседује подземне воде. Зашто су ове информације битне за задатак? Нису.


Како прича обично иде, људска експедиција је слетела на Марс и одмах оформила базу. База се налази на површини димензије $N \times N$ метара која је, ради лакше навигације, издељена на $N^2$ квадратних сектора димензија $1 \times 1$ метар (распоређених у $N$ редова и $N$ колона). Експедиција, поучена класичним скај-фај филмовима, жели да осигура базу да их не би изненадило неко опасно створење попут Ејлиена, Марвина Марсовца, Џона Картера или Мета Дејмона. То ће одрадити тако што ће у неким секторима поставити сензоре. Кажемо да је сектор **сигуран** уколико се **у његовом реду или у његовој колони налази бар један сектор са сензором** (наравно, из овога следи да су и сектори са сензорима сигурни).

Помозите експедицији да постави сензоре **тако да тачно $M$ сектора буде сигурно**. Зашто $M$, а не сви? Зато што тада не би било места изненађењима, а тако скај-фај филмови не функционишу.

## Опис улаза

У првом и једином реду стандардног улаза налазе се два природна броја $N$ и $M$, раздвојена размаком, која, редом, представљају димензију базе и број сектора који мора који морају бити сигурни.

## Опис излаза

Уколико је немогуће поставити сензоре тако да тачно $М$ сектора буде сигурно, у првом и једином реду исписати $-1$. У супротном, у првом реду исписати број сензора $K$, а затим у наредних $K$ редова описати где треба поставити те сензоре: у сваком реду по два природна броја $x_i$ и $y_i$ која означавају да $i$-ти сензор треба поставити у сектору који се налази у пресеку $x_i$-те врсте и $y_i$-те колоне. Врсте су нумерисане од $1$ до $N$ одозго надоле, а колоне су нумерисане од $1$ до $N$ слева надесно. У сваком сектору сме бити највише један сензор. Уколико има више решења, исписати било које.

## Пример 1

### Улаз

~~~
4 14
~~~

### Излаз

~~~
4
1 1
1 3
2 1
3 3
~~~

## Пример 2

### Улаз

~~~
10 24
~~~

### Излаз

~~~
-1
~~~

## Објашњење примера

У првом тест примеру је $N = 4$ и $M = 14$, тј. тражи се да тачно 14 сектора буде сигурно. Ово је могуће постићи и на слици је приказан један од начина који одговара излазу за овај пример. Црним тачкама су означене позиције сензора док су сигурни сектори обојени и има их тачно 14. Постоје и другачија (тачна) решења. У другом примеру никако није могуће обезбедити да база $10 \times 10$ има тачно 24 сигурна сектора па је одговор '-1' (без наводника).

## Ограничења

* $1 \leq M \leq 10^{12}$.

Тест примери су подељени у $4$ дисјунктне групе:

* У тест примерима који вреде $10$ поена важи $1 \le N \leq 3$.
* У тест примерима који вреде $20$ поена важи $1 \leq N \leq 1000$, $M \leq 4N$.
* У тест примерима који вреде $25$ поена важи $1 \leq N \leq 10^6$.
* У тест примерима који вреде $45$ поена важи $1 \leq N \leq 10^{18}$.
