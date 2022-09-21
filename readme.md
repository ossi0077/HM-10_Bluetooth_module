# HM-10 Bluetooth module

## ���
	- �۵� ���� : 5V
	- ������� ���� : 4.0
	- default name : HMSoft
	- default baud rate(Serial Connection) : 9600

## �ʿ� �ϵ����
	- HM-10
	- Arduino UNO
	- UNO cable
	- F-M cable(4ea)

## ����
	- TXD, RXD�� UNO������ Dgital�� ���ϴ� ������ �����Ͽ� ����մϴ�.(���������� D6, D7 ���)

|HM-10|Arduino UNO|
|--|--|
|GND|GND|
|VCC|5V|
|TXD|D6(���� ����)|
|RXD|D7(���� ����)|

## ���̺귯��
	- SoftwareSerial

## AT Command
	- AT ��ɾ ����Ͽ� ������� ���� Ȯ���� �����ϴ�.
	- �ø��� ����ͷ� AT Ŀ�ǵ带 �����Ͽ� ��� �����ϴ�.(��� �� ���ۿɼ��� �����ؼ� �����)
![AT_commands](./AT_commands.png)

## example_code.cpp ����