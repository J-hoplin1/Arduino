void setup() {
  // put your setup code here, to run once:
  //포트 초기화
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  String str1 = "One String", str2 = "Another String";
  int n = 1234;
  float f = 3.14;
  char c = 'A';

  Serial.println(str1); //string 출력
  Serial.println(str1 + " " + str2);//문자열 연결
  Serial.println(String(n));//정수로부터 10진 문자열 생성
  Serial.println(String(n, BIN));//정수로부터 2진 문자열 생성
  Serial.println(String(n, HEX)); // 정수로부터 16진 문자열 생성
  //실수의 겨웅 문자열로 직접 변환할 수 없다.
  //단, serial클래스의 print함수는 문자열 형식으로 출력할 수 있다.

  Serial.println(f);
  //다른 타입의 데이터를 연결하여 새로운 String 객체를 생성한다.
  Serial.println("String + integer : " + String(n));
  String str3 = "String + character : ";
  str3 += n;
  Serial.println(str3);

  while(true);
}
