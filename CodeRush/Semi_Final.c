#include <stdio.h>
#include <stdlib.h>

int getChoice(int *a){
    scanf("%d", a);
    return *a;
}

void menu(){
    printf("CodeRush#1\n");
    printf("0. Get me otta here!");
    printf("1. A - Tìm Số Nguyên Lớn Nhất Trong 5 Số\n");
    printf("2. B - Tính tổng số quả táo thu hoạch\n");
    printf("3. C - Tìm Số Bị Thiếu\n");
    printf("4. D - Tìm Số Xuất Hiện Một Lần\n");
    printf("5. E - Tìm đoạn dài nhất toàn số chẵn\n");
    printf("Your choice:");
}
void bai1();
void bai2();
void bai3();
void bai4();
void bai5();

void main(){
    int choice;
    do {
        menu();
        getChoice(&choice);
        switch (choice)
        {
        case 0:
            printf("Bye bye!");
            break;
        default:
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        printf("Wrong choice. Choose again.\n");
            break;
        }
    } while (choice!=0);
    
}

/*A - Tìm Số Nguyên Lớn Nhất Trong 5 Số
#Đề bài:
Viết chương trình cho phép người dùng nhập vào 5 số nguyên bất kỳ từ bàn phím.
Hãy tìm và in ra màn hình giá trị lớn nhất trong 5 số đó.

#Dữ liệu vào:
Một dòng chứa 5 số nguyên, các số cách nhau bởi dấu cách (space)

#Dữ liệu ra:
Một số nguyên duy nhất là giá trị lớn nhất tìm được.

#Ví dụ:
Input #1:
1 2 3 4 5
Output #1:
5

Input #2:
-10 -5 -2 -1 -8
Output #2:
-1

Input #3:
10 50 20 5 1
Output #3:
50
*/
void bai1(){
    int n1, n2, n3, n4, n5;
    printf("Input n1 n2 n3 n4 n5:");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
}

/*B - Tính tổng số quả táo thu hoạch
#Đề bài:
Có một cây táo mỗi ngày rụng thêm TT quả so với ngày trước, bắt đầu từ SS quả ngày đầu tiên.
Hỏi nếu sau NN ngày thì tổng số quả táo đã thu được là bao nhiêu?

#Dữ liệu vào:
SS là số táo rụng bắt đầu từ ngày đầu tiên với điều kiện 1≤S≤1000
TT là số quả táo rụng thêm so với ngày trước đó với điều kiện 1≤T≤1000
NN là số ngày thu hoạch với điều kiện 1≤N≤1000

#Dữ liệu ra:
Tổng số quả táo đã thu hoạch được

#Ví dụ:
Input #1:
1 1 3
Output #1:
6

Input #2:
2 2 4
Output #2:
20
*/
void bai2(){

}

/*C - Tìm Số Bị Thiếu
#Đề bài:
Cho một số nguyên nn.Ta có một mảng gồm n–1n–1 số nguyên, trong đó các số đều nằm trong khoảng từ 1 đến 
n và không trùng nhau. Tuy nhiên, một số trong khoảng 1 đến n đã bị thiếu và không xuất hiện trong mảng. 
Hãy tìm và in ra số bị thiếu đó.

#Dữ liệu vào:
Dòng 1: Một số nguyên nn – giới hạn dãy số.
Dòng 2: Gồm n–1n–1 số nguyên khác nhau, mỗi số nằm từ 1 đến n

#Dữ liệu ra:
In ra duy nhất 1 số: số còn thiếu trong dãy.

#Ví dụ:
Input #1:
5
1 2 4 5
Output #1:
3

Input #2:
3
1 3
Output #2:
2
*/
void bai3(){

}

/*D - Tìm Số Xuất Hiện Một Lần
#Đề bài:
Cho một mảng gồm n phần tử. Trong mảng, mọi số đều xuất hiện đúng 2 lần, chỉ có duy nhất một số xuất 
hiện đúng 1 lần.
Hãy tìm số xuất hiện đúng 1 lần đó.

#Dữ liệu vào:
Dòng 1: Nhập nn là số lượng phần tử có trong mảng với điều kiện nn là số lẻ và thỏa điều kiện 
1≤n≤10000
Dòng 2: Các phần tử có trong mảng thỏa mãn yêu cầu của đề bài

#Dữ liệu ra:
Số xuất hiện 1 lần.

#Ví dụ:
Input #1:
5
1 2 1 3 2
Output #1:
3

Input #2:
7
4 1 2 1 2 4 5
Output #2:
5
*/
void bai4(){

}

/*E - Tìm đoạn dài nhất toàn số chẵn
#Đề bài:
Cho một mảng số nguyên có NN phần tử. Hãy tìm độ dài của dãy liên tiếp dài nhất toàn số chẵn.

#Dữ liệu vào:
NN là số lượng phần tử có trong mảng với điều kiện 1≤N≤1000
Ai​ là từng phần tử có trong mảng với điều kiện −105≤Ai≤105,i=1..N

#Dữ liệu ra:
Độ dài lớn nhất của đoạn liên tiếp toàn số chẵn

#Ví dụ:
Input #1:
7
2 4 6 1 2 4 8
Output #1:
3

Input #2:
5
1 3 5 7 9
Output #2:
0
*/
void bai5(){

}