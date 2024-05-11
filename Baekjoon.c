#include <stdio.h>

int main(){
    char pNum[13]; //입력받을 전화번호(알파벳 형식)
    int i = 0, time = 0; //반복자, 걸리는 시간 정의
    scanf("%s", pNum); //전화번호(알파벳) 입력받기
    while(pNum[i] != 0){
        if(((int)pNum[i] - 65) / 3 != 7 || 9){ //각 알파벳에 해당하는 숫자가 7이나 9가 아닐 경우: 7이나 9는 해당하는 알파벳이 4개씩 있기 때문에
            time += ((int)pNum[i] - 65) / 3 + 3; //숫자에 해당하는 알파벳이 3개씩 있음, 기존 숫자 더해주기
        }
        else{
            time += ((int)pNum[i] - 65) / 4 + 3; //숫자에 해당하는 알파벳이 4개씩 있음, 기존 숫자 더해주기
        }
        i++; //다음 알파벳으로 넘어가기
    }
    printf("%d", time); //결과 출력
    return 0;
}