//�ø��� ����� ���� ���̺귯�� �߰�
#include <SoftwareSerial.h>

//��������� �ø��� ��ſ� ��ü ����
SoftwareSerial BTSerial(6, 7);

void setup()
{
    //���巹��Ʈ ����
    Serial.begin(9600);
    BTSerial.begin(9600);
    Serial.println("�ø��� ��� ����");
}

void loop()
{
    //������� �ø���� ���� �����Ͱ� �ִٸ� �ø��� �ۼ��ǵ��� �Ѵ�.
    while (BTSerial.available() > 0)
    {
        byte data = BTSerial.read();
        Serial.write(data);
    }

    //�ø���� ���� �����Ͱ� �ִٸ� ������� �ø��� �ۼ��ǵ��� �Ѵ�.
    while (Serial.available() > 0)
    {
        byte data = Serial.read();
        BTSerial.write(data);
    }
}
