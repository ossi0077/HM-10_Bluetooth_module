//시리얼 통신을 위한 라이브러리 추가
#include <SoftwareSerial.h>

//블루투스용 시리얼 통신용 객체 생성
SoftwareSerial BTSerial(6, 7);

void setup()
{
    //보드레이트 설정
    Serial.begin(9600);
    BTSerial.begin(9600);
    Serial.println("시리얼 통신 시작");
}

void loop()
{
    //블루투스 시리얼로 들어온 데이터가 있다면 시리얼에 작성되도록 한다.
    while (BTSerial.available() > 0)
    {
        byte data = BTSerial.read();
        Serial.write(data);
    }

    //시리얼로 들어온 데이터가 있다면 블루투스 시리얼에 작성되도록 한다.
    while (Serial.available() > 0)
    {
        byte data = Serial.read();
        BTSerial.write(data);
    }
}
