
# Assembler Derleyicisi

8-bitlik 
bir **El-Ceziri** işlemcisinin olduğu varsayılsın.

Bu işlemcinin **RAM 8-bitlik 2 KB’lık belleği (hafıza)** 
bulunmaktadır.

Aynı zamanda üzerinde **AX, BX, CX, DX** şeklin dört tane **8-bitlik kayıtçı (register)**
bulunmaktadır.

Bu işlemcinin komut kümesi aşağıdaki listede verilmiştir.
## Liste
**HRK X1,X2** // bu komutun anlamı X1=X2

**TOP X1,X2** // bu komutun anlamı X1=X1+X2

**CRP X1,X2** // bu komutun anlamı X1=X1*X2

**CIK X1,X2** // bu komutun anlamı X1=X1-X2

**BOL X1,X2** // bu komutun anlamı: tam kısmı X1=X1/X2 ve DX=X1 mod X2

**VE X1,X2** // bu komutun anlamı X1=X1X2

**VEYA X1,X2** // bu komutun anlamı X1=X1X2

**DEG X1** // bu komutun anlamı 𝑋1 = İkili tabanda 0 - 1 ve 1 - 0 yapan komuttur.

Verilen komut kümesinde TOP, CRP, CIK, BOL, VE, VEYA komutlarında operandlarından en az bir 
tanesinin kayıtçı olması zorunludur.

Örnek olarak,


TOP AX,BX //Bu komutta her iki operand kayıtçıdır.

TOP AX,[ADRES] //Bu komutta birinci operand AX kayıtçısı ve ikincisi ise RAM’in ADRES yeridir.

TOP [ADRES],BX // Bu komutun birincisi bellek ve ikinci ise kayıtçıdır.

## Adresleme

Adresleme: Üç tip adresleme modu bulunmaktadır. 

**a)** Eğer HRK AX,10 gibi bir komut olduğu durumda birinci operand direkt adresleme ve ikinci 
operand ise, hemen adresleme olarak isimlendirilmiştir, çünkü veri komutun bir parçasıdır; 
herhangi bir bellek erişimine gerek yoktur.

**b)** Dolaylı adresleme olarak üçüncüsü bulunmaktadır. Bu adresleme modunda ise, [[ADRES]] 
şeklinde bir kullanım sözkonusudur. Bu durumda aslına ADRES olarak belirlenen bellek 
kısmında verinin olduğu yerin adresi bulunmaktadır.
## Ekran Görüntüleri #1

![Uygulama Ekran Görüntüsü](https://media.discordapp.net/attachments/1039650319036076074/1104004358590447648/image.png?width=705&height=331)

  
## Ekran Görüntüleri #2
input.txt Dosyası içerisindeki kod satırı aşağıdaki gidibir.

HRK AX,100

HRK BX,50

TOP AX,BX

![Uygulama Ekran Görüntüsü](https://media.discordapp.net/attachments/1039650319036076074/1104004274364633138/image.png?width=898&height=323)

  
## Destek

Destek için brknackgz1@gmail.com adresine e-posta gönderin.

  
