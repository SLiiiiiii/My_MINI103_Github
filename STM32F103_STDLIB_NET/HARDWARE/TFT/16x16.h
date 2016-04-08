/******************************************************
* Copyright (c) 2010, �Ͼ�����ѧԺ�Զ���ѧԺ
* All rights reserved.
* 
* �ļ����ƣ�16x16.h
* ժ    Ҫ��16*16 ������ģ
* 
* ��ǰ�汾��1.0
* ��    �ߣ�wanxing
* ������ڣ�2010��6��10��
*
* ȡ���汾��1.0 
* ԭ����  ��wanxing
* ������ڣ�2010��6��10��
********************************************************/




typedef struct LCD_16_X_16 // ������ģ���ݽṹ 
{
       unsigned char Index[2];// ������������(Index[1:0]=����������,Index[2]='\0')	
       char Msk[32];          // ���������� 
}lcd_16x16;




const lcd_16x16  hz_code_16[] =          // ���ݱ� 
{
"��",0x00,0x00,0x7F,0xFE,0x02,0x00,0x02,0x00,0x02,0x10,0x03,0xF8,0x02,0x10,0x04,0x10,
     0x04,0x10,0x04,0x10,0x08,0x10,0x08,0x10,0x10,0x10,0x20,0xE0,0x40,0x40,0x00,0x00,

"��",0x01,0x00,0x01,0x00,0x3F,0xF8,0x01,0x00,0xFF,0xFE,0x10,0x20,0x08,0x30,0x04,0x40,
     0x3F,0xF8,0x01,0x00,0x01,0x00,0x7F,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,

"��",0x10,0x80,0x10,0x80,0x20,0x80,0x7C,0xFC,0x45,0x04,0x45,0x04,0x46,0x04,0x7C,0x84,
     0x44,0x44,0x44,0x64,0x44,0x24,0x44,0x04,0x7C,0x04,0x44,0x28,0x40,0x10,0x00,0x00,

"ʯ",0x00,0x00,0xFF,0xFE,0x02,0x00,0x02,0x00,0x04,0x00,0x04,0x00,0x07,0xF8,0x0C,0x08,
     0x0C,0x08,0x14,0x08,0x24,0x08,0x44,0x08,0x84,0x08,0x07,0xF8,0x04,0x08,0x00,0x00,

"ͷ",0x00,0x80,0x10,0x80,0x0C,0x80,0x04,0x80,0x10,0x80,0x0C,0x80,0x08,0x80,0x00,0x80,
     0xFF,0xFE,0x00,0x80,0x01,0x40,0x02,0x20,0x04,0x30,0x08,0x18,0x10,0x0C,0x20,0x08,

	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x1F,0xF8,0x10,0x08,0x1F,0xF8,0x10,0x08,0x1F,0xF8,0x01,0x00,0x11,0x00,
	 0x1F,0xFC,0x21,0x00,0x21,0x00,0x4F,0xF8,0x01,0x00,0x01,0x00,0x7F,0xFE,0x00,0x00,
	
	
	/*---ת���ַ� �� ---8*/
"��",0x22,0x00,0x22,0x7C,0x7F,0x44,0x22,0x44,0x3E,0x44,0x22,0x7C,0x3E,0x44,0x22,0x44,
	 0x22,0x44,0xFF,0x7C,0x00,0x44,0x24,0x84,0x22,0x84,0x43,0x14,0x81,0x08,0x00,0x00,
	
	
	/*---ת���ַ� �� ---9*/
"��",0x00,0x00,0x3F,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x7F,0xFE,0x01,0x00,
	 0x01,0x00,0x02,0x80,0x02,0x40,0x04,0x20,0x08,0x18,0x10,0x0E,0x20,0x04,0x40,0x00,
	
	
	/*---ת���ַ� һ ---10*/
"һ",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x7F,0xFE,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x00,0x10,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x00,0x00,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x7F,0xFC,0x44,0x84,0x44,0x84,0x44,0x84,0x44,0x84,0x44,0x84,0x44,0x84,
	 0x48,0x84,0x48,0x7C,0x50,0x04,0x60,0x04,0x40,0x04,0x7F,0xFC,0x40,0x04,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x7F,0xF8,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x20,0x3F,0xF0,
	0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x24,0xFF,0xFE,0x00,0x00,0x00,0x00,
	
	
	/*---ת���ַ� �� ---15*/
"��",0x04,0x00,0x03,0x00,0x01,0x80,0x01,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,0x04,0x80,
	0x06,0x40,0x04,0x20,0x08,0x10,0x08,0x18,0x10,0x0C,0x20,0x0C,0x40,0x08,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0xFE,0x7F,0x00,0x01,0x00,
	0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x04,0x01,0x04,0x01,0x04,0x00,0xF8,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x00,0x40,0x04,0x60,0x06,0x40,0x04,0x40,0x04,0x40,0x04,0x40,0x08,0x20,
	0x08,0x20,0x10,0x10,0x10,0x10,0x20,0x08,0x40,0x0E,0x80,0x04,0x00,0x00,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x20,0x7F,0xF0,0x02,0x20,0x02,0x20,0x04,0x20,
	0x04,0x20,0x04,0x20,0x08,0x20,0x08,0x24,0x10,0x24,0x20,0x26,0x40,0x3C,0x00,0x00,
	
	
	/*---ת���ַ� �� ---19*/
"��",0x1F,0xF8,0x01,0x00,0x7F,0xFE,0x41,0x04,0x1D,0x70,0x01,0x00,0x1D,0x70,0x02,0x80,
	0x04,0x60,0x1A,0x1E,0xE1,0x08,0x1F,0xE0,0x00,0x40,0x02,0x80,0x01,0x00,0x01,0x00,

	/*---ת���ַ� �� ---20*/
"��",0x42,0x00,0x22,0x3C,0x22,0x24,0x02,0x24,0x8F,0xBC,0x52,0x24,0x12,0x24,0x2F,0xBC,
	 0x28,0xA4,0x28,0xA4,0xC8,0xA4,0x48,0xA4,0x4F,0xC4,0x40,0x44,0x40,0x94,0x41,0x08,
	
	
	/*---ת���ַ� �� ---*/
"��",0x04,0x40,0x04,0x40,0x04,0x40,0x04,0x44,0x04,0x4E,0x7C,0x58,0x04,0x60,0x04,0x40,
	 0x04,0x40,0x04,0x40,0x0C,0x40,0x34,0x42,0xE4,0x42,0x44,0x42,0x04,0x3E,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x3F,0xF0,0x20,0x10,0x20,0x10,0x3F,0xF0,0x21,0x00,0x21,0x00,0x3F,0xFC,
	 0x20,0x80,0x20,0x80,0x20,0x40,0x20,0x40,0x24,0x24,0x28,0x14,0x30,0x0C,0x20,0x04,
	
	
	/*---ת���ַ� �� ---*/
"��",0x20,0x80,0x10,0xC0,0x10,0x80,0xFD,0xFE,0x21,0x00,0x22,0x80,0x3C,0xFC,0x25,0x20,
	 0x24,0x20,0x25,0xFE,0x24,0x20,0x44,0x20,0x44,0x50,0x44,0x88,0x97,0x06,0x08,0x00,
	
	
	/*---ת���ַ� ѧ ---*/
"ѧ",0x01,0x08,0x10,0x8C,0x0C,0xC8,0x08,0x90,0x7F,0xFE,0x40,0x04,0x8F,0xE8,0x00,0x40,
	 0x00,0x80,0x7F,0xFE,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x02,0x80,0x01,0x00,
	
	
	/*---ת���ַ� Ժ ---25*/
"Ժ",0x00,0x80,0xF8,0x40,0x8F,0xFE,0x94,0x04,0xA0,0x00,0xA3,0xF8,0x90,0x00,0x88,0x00,
	 0x8F,0xFE,0xA9,0x20,0x91,0x20,0x81,0x20,0x82,0x22,0x82,0x22,0x84,0x22,0x88,0x1E,
	
	
	/*---ת���ַ� �� ---*/
"��",0x08,0x80,0x0C,0x80,0x09,0x00,0x13,0xFE,0x12,0x80,0x34,0x88,0x50,0xFC,0x90,0x80,
	 0x10,0x80,0x10,0x84,0x10,0xFE,0x10,0x80,0x10,0x80,0x10,0x80,0x10,0x80,0x10,0x80,
	
	
	/*---ת���ַ� �� ---*/
"��",0x01,0x00,0x01,0x08,0x3F,0xEC,0x01,0x10,0x01,0x20,0x7F,0xFE,0x00,0x80,0x03,0x00,
	 0x07,0xF8,0x1C,0x08,0xE4,0x08,0x07,0xF8,0x04,0x08,0x04,0x08,0x07,0xF8,0x04,0x08,
	

	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,

	
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x00,0x00,0x3F,0xF8,
	 0x01,0x00,0x01,0x00,0xFF,0xFE,0x02,0x80,0x04,0x40,0x08,0x30,0x30,0x1C,0xC0,0x08,
	
	
	/*---ת���ַ� ־ ---30*/
"־",0x01,0x00,0x01,0x00,0x01,0x00,0x7F,0xFE,0x01,0x00,0x01,0x00,0x3F,0xFC,0x00,0x00,
	 0x01,0x00,0x08,0x88,0x48,0xC4,0x48,0x86,0x48,0x14,0x88,0x18,0x07,0xF0,0x00,0x00,
	
	
	/*---ת���ַ� �� ---31*/
"��",0x40,0x80,0x20,0x80,0x27,0xFC,0x00,0x80,0x97,0xFC,0x51,0x00,0x5F,0xFE,0x22,0x10,
	 0x22,0x10,0x25,0xFE,0xC4,0x10,0x48,0x90,0x48,0x50,0x50,0x10,0x40,0x50,0x40,0x20,


	/*---ת���ַ� Һ ---*/
"Һ",0x40,0x40,0x20,0x20,0x27,0xFE,0x09,0x20,0x89,0x20,0x52,0x7C,0x52,0x44,0x16,0xA8,
	 0x2B,0x98,0x22,0x50,0xE2,0x20,0x22,0x30,0x22,0x50,0x22,0x88,0x23,0x0E,0x22,0x04,
		
		
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x0F,0xF0,0x08,0x10,0x0F,0xF0,0x08,0x10,0x0F,0xF0,0x08,0x10,0x00,0x00,
	 0x7E,0x7E,0x42,0x42,0x7E,0x7E,0x42,0x42,0x42,0x42,0x7E,0x7E,0x42,0x42,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x40,0x00,0x27,0xF0,0x24,0x10,0x07,0xF0,0x94,0x10,0x54,0x10,0x17,0xF0,0x20,0x00,
	 0x2F,0xFC,0xC9,0x24,0x49,0x24,0x49,0x24,0x49,0x24,0x49,0x24,0x5F,0xFE,0x40,0x00,
	
	
	/*---ת���ַ� �� ---35*/
"��",0x01,0x00,0x00,0x80,0x3F,0xFE,0x22,0x20,0x22,0x20,0x2F,0xFC,0x22,0x20,0x23,0xE0,
	 0x20,0x00,0x27,0xF8,0x22,0x10,0x21,0x20,0x20,0xC0,0x41,0x30,0x46,0x0E,0x98,0x04,
	
	
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x04,0x40,0x04,0x40,
	 0x44,0x48,0x24,0x48,0x14,0x50,0x14,0x60,0x04,0x40,0xFF,0xFE,0x00,0x00,0x00,0x00,
	
	
	/*---ת���ַ� ʾ ---37*/
"ʾ",0x00,0x00,0x1F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x01,0x00,0x01,0x00,
	 0x11,0x20,0x11,0x10,0x21,0x08,0x41,0x0C,0x81,0x04,0x01,0x00,0x05,0x00,0x02,0x00,

	/*---ת���ַ� �� ---*/
"��",0x20,0x40,0x10,0x40,0x10,0x40,0x07,0xFE,0x84,0x44,0x54,0x40,0x54,0x40,0x17,0xF8,
	 0x25,0x08,0x24,0x90,0xE4,0x90,0x24,0x60,0x28,0x60,0x28,0x98,0x31,0x0E,0x26,0x04,
	
	
	/*---ת���ַ� �� ---39*/
"��",0x3E,0x7C,0x22,0x44,0x22,0x44,0x3E,0x7C,0x01,0x10,0x01,0x08,0xFF,0xFC,0x06,0xC0,
	 0x18,0x30,0xE0,0x0E,0x3E,0xFC,0x22,0x88,0x22,0x88,0x22,0x88,0x3E,0xF8,0x00,0x00,

	/*---ת���ַ� �� ---40*/
"��",0x10,0x00,0x10,0x00,0x20,0x04,0x25,0xFE,0x44,0x20,0xF8,0x20,0x08,0x20,0x10,0x20,
	 0x20,0x20,0xFC,0x20,0x40,0x20,0x00,0x20,0x1C,0x20,0xE0,0x24,0x47,0xFE,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x08,0x20,0x08,0x20,0x0F,0x20,0x11,0x20,0x11,0x20,0x21,0x30,0x52,0x28,0x8A,0x24,
 	 0x0C,0x22,0x04,0x22,0x08,0x20,0x10,0x20,0x20,0x20,0x40,0x20,0x80,0x20,0x00,0x20,
	
	
	/*---ת���ַ� ң ---*/
"ң",0x00,0x78,0x47,0x80,0x21,0x08,0x24,0x90,0x02,0x20,0x03,0xF8,0xE4,0x40,0x20,0x40,
	 0x27,0xFC,0x20,0x40,0x22,0x48,0x22,0x48,0x23,0xF8,0x50,0x00,0x8F,0xFE,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x10,0x00,0x10,0x20,0x10,0x10,0xFD,0xFE,0x11,0x04,0x10,0x50,0x14,0x8C,0x19,0x04,
	0x30,0x00,0xD1,0xFC,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x53,0xFE,0x20,0x00,
	
	
	/*---ת���ַ� ʵ ---*/
"ʵ",0x01,0x00,0x00,0x80,0x3F,0xFE,0x28,0x04,0x46,0x88,0x04,0x80,0x08,0x80,0x06,0x80,
	0x04,0x80,0x7F,0xFE,0x00,0x80,0x01,0x40,0x02,0x20,0x04,0x10,0x18,0x18,0x60,0x10,
	
	
	/*---ת���ַ� �� ---45*/
"��",0x00,0x00,0xF8,0x40,0x08,0x40,0x48,0xA0,0x48,0x90,0x49,0x0E,0x4B,0xF0,0x7C,0x00,
	0x04,0x84,0x06,0x44,0x35,0x48,0xC5,0x48,0x04,0x10,0x17,0xFE,0x08,0x00,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x01,0x00,0x01,0x00,0x01,0x00,0x3F,0xF8,0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,
	0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,0x01,0x02,0x01,0x02,0x00,0xFE,0x00,0x00,
	
	
	/*---ת���ַ� Դ ---*/
"Դ",0x40,0x00,0x27,0xFE,0x24,0x40,0x04,0x80,0x85,0xFC,0x55,0x04,0x15,0xFC,0x15,0x04,
	0x25,0xFC,0x24,0x20,0xC4,0xA8,0x44,0xA4,0x49,0x22,0x4A,0x22,0x50,0xA0,0x40,0x40,
	
	
	/*---ת���ַ� �� ---*/
"��",0x20,0x3C,0x27,0xC0,0x22,0x48,0xF9,0x50,0x27,0xFE,0x20,0xE0,0x29,0x50,0x32,0x4E,
	0x6F,0xFC,0xA2,0x48,0x22,0x48,0x23,0xF8,0x22,0x48,0x22,0x48,0xA3,0xF8,0x42,0x08,
	
	
	/*---ת���ַ� �� ---*/
"��",0x10,0x40,0x08,0x60,0x08,0x40,0xFE,0xFE,0x20,0x84,0x20,0x84,0x3D,0x44,0x26,0x48,
	0x24,0x28,0x24,0x30,0x24,0x10,0x24,0x30,0x44,0x48,0x44,0x8E,0x95,0x04,0x08,0x00,
	
	
	/*---ת���ַ� �� ---50*/
"��",0x08,0x00,0x7E,0xFC,0x10,0x80,0x28,0x80,0x7E,0xFE,0x08,0x88,0x0E,0x88,0xF9,0x08,
	0x0A,0x08,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,0x00,0x00,
	
	
	/*---ת���ַ� ͣ ---*/
"ͣ",0x08,0x40,0x0C,0x20,0x0B,0xFE,0x10,0x00,0x11,0xF8,0x31,0x08,0x51,0xF8,0x90,0x00,
	0x17,0xFE,0x14,0x02,0x11,0xFC,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0xA0,0x10,0x40,
	
	
	/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0xF8,0x01,0x00,
	0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x04,0x7F,0xFE,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x00,0x04,0x7F,0xFE,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0xC0,0x01,0x60,0x01,0x30,
	0x01,0x20,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x02,0x00,0x03,0x00,0x02,0x00,0xFF,0xFE,0x02,0x00,0x02,0x00,0x04,0x00,0x04,0x00,
	0x0F,0xF8,0x08,0x80,0x10,0x80,0x10,0x80,0x20,0x80,0x40,0x80,0xBF,0xFE,0x00,0x00,
	
	
	/*---ת���ַ� �� ---55*/
"��",0x02,0x00,0x02,0x00,0x02,0x00,0xFF,0xFE,0x04,0x00,0x04,0x00,0x08,0x00,0x18,0x00,
	0x2F,0xF8,0x48,0x08,0x88,0x08,0x08,0x08,0x08,0x08,0x0F,0xF8,0x08,0x08,0x00,0x00,
	
	
	/*---ת���ַ� �� ---*/
"��",0x08,0x00,0x08,0x00,0x08,0x00,0x7F,0x7C,0x09,0x44,0x09,0x44,0x09,0x44,0x09,0x44,
	0x11,0x44,0x11,0x44,0x11,0x44,0x21,0x44,0x21,0x7C,0x45,0x44,0x82,0x40,0x00,0x00,
	
	
	/*---ת���ַ� �� ---57*/
"��",0x00,0x20,0x40,0x28,0x20,0x24,0x2F,0xFE,0x08,0x20,0x2F,0xE4,0x28,0x26,0x28,0x2C,
	0x4B,0xA8,0xCA,0xA8,0x4A,0x90,0x53,0x92,0x52,0xAA,0x20,0x46,0x41,0x82,0x00,0x00,


	/*---ת���ַ� �� ---*/
"��",0x20,0x20,0x20,0x20,0x27,0x7C,0x39,0x24,0x41,0xFE,0x7A,0x24,0xA7,0x7C,0x21,0x20,
	0xF9,0x7C,0x25,0x20,0x23,0xFE,0x21,0x20,0x2A,0xA0,0x34,0x60,0x28,0x1E,0x00,0x00,
	
	
	/*---ת���ַ� ֵ ---*/
"ֵ",0x10,0x40,0x18,0x60,0x17,0xFC,0x10,0x40,0x20,0x80,0x33,0xF8,0x62,0x08,0xA3,0xF8,
	0x22,0x08,0x23,0xF8,0x22,0x08,0x23,0xF8,0x22,0x08,0x22,0x08,0x2F,0xFE,0x20,0x00,
	
	
	/*---ת���ַ� �� ---60*/
"��",0x01,0x00,0x41,0x00,0x25,0x00,0x25,0xFE,0x2A,0x44,0x0A,0x48,0x14,0x40,0x10,0x40,
	0x20,0xC0,0xE0,0xA0,0x41,0x20,0x42,0x10,0x44,0x08,0x18,0x0E,0x60,0x04,0x00,0x00,
	
	
	/*---ת���ַ� �� ---61*/
"��",0x08,0x20,0x49,0x30,0x2A,0x20,0x1C,0x20,0xFF,0x7E,0x1C,0x44,0x2B,0x44,0x48,0xC4,
	0x08,0x28,0xFF,0x28,0x12,0x10,0x34,0x10,0x0C,0x28,0x32,0x4E,0xC0,0x84,0x00,0x00,

	/*---ת���ַ� �� ---*/
"��",0x10,0x90,0x10,0x90,0x3C,0x90,0x21,0xFC,0x40,0x90,0x7C,0x90,0x93,0xFE,0x10,0x00,
	0xFD,0xFC,0x11,0x04,0x11,0x04,0x11,0xFC,0x11,0x04,0x15,0x04,0x19,0xFC,0x11,0x04,
	
	
	/*---ת���ַ� �� ---63*/
"��",0x43,0xF8,0x22,0x08,0x32,0x08,0x22,0x08,0x03,0xF8,0x00,0x00,0xE7,0xFC,0x20,0x40,
	0x20,0x40,0x27,0xFE,0x20,0x40,0x28,0xA0,0x31,0x10,0x22,0x0C,0x04,0x06,0x08,0x04,

	/*---ת���ַ� �� ---64*/
"��",0x04,0x40,0x0E,0x50,0x78,0x48,0x08,0x48,0x08,0x40,0xFF,0xFE,0x08,0x40,0x08,0x44,
0x0A,0x44,0x0C,0x48,0x18,0x30,0x68,0x22,0x08,0x52,0x08,0x8A,0x2B,0x06,0x10,0x02,


/*---ת���ַ� Ҫ ---*/
"Ҫ",0x00,0x00,0x7F,0xFC,0x04,0x40,0x04,0x40,0x3F,0xF8,0x24,0x48,0x24,0x48,0x3F,0xF8,
0x02,0x00,0x7F,0xFC,0x04,0x20,0x08,0x40,0x1C,0x80,0x03,0x80,0x06,0x70,0x38,0x08,


/*---ת���ַ� �� ---66*/
"��",0x01,0x20,0x01,0x10,0x01,0x00,0x7F,0xFC,0x01,0x00,0x21,0x08,0x11,0x10,0x09,0xA0,
0x03,0x40,0x05,0x20,0x09,0x10,0x11,0x08,0x61,0x06,0x01,0x00,0x05,0x00,0x02,0x00,


/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x04,0x00,0x02,0x10,0x01,0x10,0x01,0x20,0x08,0x20,0x28,0x48,0x28,0x44,
0x28,0x84,0x49,0x02,0x4A,0x02,0x8C,0x12,0x08,0x10,0x18,0x10,0x27,0xF0,0x40,0x00,


/*---ת���ַ� �� ---68*/
"��",0x08,0x00,0x09,0xFE,0x10,0x20,0x20,0x40,0x41,0xFC,0x89,0x04,0x09,0x24,0x11,0x24,
0x21,0x24,0x45,0x24,0x85,0x24,0x09,0x44,0x10,0x50,0x20,0x88,0x41,0x04,0x82,0x02,


/*---ת���ַ� ɾ ---*/
"ɾ",0x00,0x02,0x7B,0xC2,0x4A,0x42,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0xFF,0xEA,
0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x42,0x5A,0x42,0x85,0x4A,0x08,0x84,


/*---ת���ַ� �� ---70*/
"��",0x00,0x40,0x78,0x40,0x48,0xA0,0x51,0x10,0x52,0x08,0x65,0xF6,0x50,0x40,0x48,0x40,
0x4F,0xFC,0x48,0x40,0x6A,0x50,0x52,0x48,0x44,0x44,0x48,0x44,0x41,0x40,0x40,0x80,

/*---ת���ַ� �� ---*/
"��",0x01,0x00,0x02,0x00,0x04,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,
0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,


/*---ת���ַ� �� ---72*/
"��",0x00,0x00,0x3F,0xF0,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x3F,0xF0,
0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x04,0x20,0x04,0x20,0x04,0x1F,0xFC,0x00,0x00,


/*---ת���ַ� �� ---73*/
"��",0x00,0x00,0x7F,0xF8,0x00,0x10,0x00,0x20,0x00,0x40,0x01,0x80,0x01,0x00,0x01,0x00,
0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x05,0x00,0x02,0x00,


/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x3F,0xF0,0x00,0x10,0x00,0x10,0x00,0x10,0x20,0x10,0x20,0x10,0x3F,0xF0,
0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x04,0x20,0x04,0x20,0x04,0x1F,0xFC,0x00,0x00,


/*---ת���ַ� �� ---75*/
"��",0x10,0x00,0x11,0xFC,0x20,0x08,0x24,0x10,0x44,0x30,0xF8,0x48,0x10,0x84,0x23,0x02,
0x40,0x00,0xFD,0xFC,0x40,0x20,0x00,0x20,0x1C,0x20,0xE0,0x20,0x43,0xFE,0x00,0x00,

/*---ת���ַ� ÿ ---*/
"ÿ",0x10,0x00,0x1F,0xFC,0x20,0x00,0x20,0x00,0x5F,0xF0,0x90,0x10,0x12,0x10,0x11,0x10,
0xFF,0xFE,0x20,0x10,0x22,0x10,0x21,0x10,0x3F,0xFC,0x00,0x10,0x00,0xA0,0x00,0x40,


/*---ת���ַ� �� ---*/
"��",0x00,0x80,0x40,0x80,0x20,0x80,0x20,0xFC,0x01,0x04,0x09,0x08,0x0A,0x40,0x14,0x40,
0x10,0x40,0xE0,0xA0,0x20,0xA0,0x21,0x10,0x21,0x10,0x22,0x08,0x24,0x04,0x08,0x02,


/*---ת���ַ� �� ---78*/
"��",0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x3F,0xF8,0x21,0x08,0x21,0x08,0x21,0x08,
0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,


/*---ת���ַ� �� ---79*/
"��",0x04,0x00,0x04,0x04,0x55,0x78,0x4E,0x40,0x44,0x40,0x7F,0x40,0x44,0x7E,0x4E,0x48,
0x55,0x48,0x65,0x48,0x44,0x48,0x44,0x48,0x40,0x48,0x7F,0x88,0x00,0x88,0x01,0x08,


/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x47,0xFC,0x24,0x44,0x24,0x44,0x05,0xF4,0x04,0x44,0xE4,0x44,0x27,0xFC,
0x24,0x04,0x25,0xF4,0x25,0x14,0x2D,0x14,0x35,0xF4,0x24,0x04,0x04,0x14,0x08,0x08,


/*---ת���ַ� �� ---82*/
"��",0x01,0x00,0x00,0x80,0x3F,0xFE,0x22,0x20,0x22,0x20,0x3F,0xFC,0x22,0x20,0x22,0x20,
0x23,0xE0,0x20,0x00,0x2F,0xF0,0x24,0x10,0x42,0x20,0x41,0xC0,0x86,0x30,0x38,0x0E,


/*---ת���ַ� �� ---*/
"��",0x00,0x80,0x40,0x80,0x20,0x80,0x20,0xFC,0x01,0x04,0x09,0x08,0x0A,0x40,0x14,0x40,
0x10,0x40,0xE0,0xA0,0x20,0xA0,0x21,0x10,0x21,0x10,0x22,0x08,0x24,0x04,0x08,0x02,


/*---ת���ַ� �� ---84*/
"��",0x08,0x20,0x49,0x20,0x2A,0x20,0x08,0x3E,0xFF,0x44,0x2A,0x44,0x49,0x44,0x88,0xA4,
0x10,0x28,0xFE,0x28,0x22,0x10,0x42,0x10,0x64,0x28,0x18,0x28,0x34,0x44,0xC2,0x82,


/*---ת���ַ� ׼ ---85*/
"׼",0x01,0x40,0x41,0x20,0x21,0x20,0x23,0xFE,0x02,0x20,0x16,0x20,0x1B,0xFC,0x12,0x20,
0x22,0x20,0x23,0xFC,0xE2,0x20,0x22,0x20,0x22,0x20,0x23,0xFE,0x22,0x00,0x02,0x00,


/*---ת���ַ� �� ---*/
"��",0x04,0x00,0x04,0x00,0x0F,0xF0,0x18,0x20,0x64,0x40,0x03,0x80,0x1C,0x70,0xE0,0x0E,
0x1F,0xF0,0x11,0x10,0x11,0x10,0x1F,0xF0,0x11,0x10,0x11,0x10,0x1F,0xF0,0x10,0x10,


/*---ת���ַ� �� ---*/
"��",0x02,0x10,0x44,0x10,0x2F,0x90,0x28,0x90,0x0F,0xBE,0x88,0xA4,0x4F,0xD4,0x54,0x14,
0x12,0x14,0x2F,0xD4,0xE4,0x14,0x27,0x88,0x24,0x88,0x28,0x94,0x2A,0x94,0x11,0x22,


/*---ת���ַ� �� ---88*/
"��",0x00,0x10,0x20,0x78,0x13,0xC0,0x10,0x40,0x80,0x40,0x47,0xFE,0x40,0x40,0x10,0x40,
0x10,0x40,0x23,0xF8,0xE2,0x08,0x22,0x08,0x22,0x08,0x22,0x08,0x23,0xF8,0x02,0x08,


/*---ת���ַ� �� ---*/
"��",0x08,0x10,0x08,0x78,0x0B,0xC0,0x10,0x40,0x10,0x40,0x30,0x40,0x30,0x40,0x5F,0xFE,
0x90,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x17,0xFC,0x10,0x00,


/*---ת���ַ� �� ---90*/
"��",0x04,0x00,0x04,0x00,0x0F,0xF0,0x18,0x20,0x24,0xC0,0x03,0x00,0x0C,0xC0,0x32,0x30,
0xC2,0x0E,0x1F,0xF0,0x02,0x10,0x04,0x10,0x04,0x10,0x08,0x10,0x10,0xA0,0x20,0x40,


/*---ת���ַ� �� ---*/
"��",0x02,0x00,0x02,0x00,0x04,0x00,0xFF,0xFE,0x08,0x00,0x08,0x40,0x10,0x40,0x30,0x40,
0x57,0xFC,0x90,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x1F,0xFE,0x10,0x00,


/*---ת���ַ� �� ---*/
"��",0x00,0x08,0x00,0x3C,0xF9,0xE0,0x08,0x20,0x10,0x20,0x11,0x20,0x21,0x3C,0x79,0x20,
0x09,0x20,0x09,0x20,0x49,0x20,0x31,0xFC,0x10,0x00,0x2C,0x00,0x43,0xFE,0x80,0x00,


/*---ת���ַ� ʱ ---93*/
"ʱ",0x00,0x08,0x00,0x08,0x7C,0x08,0x44,0x08,0x45,0xFE,0x44,0x08,0x44,0x08,0x7C,0x08,
0x44,0x88,0x44,0x48,0x44,0x48,0x44,0x08,0x7C,0x08,0x44,0x08,0x00,0x28,0x00,0x10,



/*---ת���ַ� �� ---*/
"��",0x20,0x00,0x13,0xFC,0x10,0x04,0x40,0x04,0x47,0xC4,0x44,0x44,0x44,0x44,0x44,0x44,
0x47,0xC4,0x44,0x44,0x44,0x44,0x44,0x44,0x47,0xC4,0x40,0x04,0x40,0x14,0x40,0x08,


/*---ת���ַ� �� ---*/
"��",0x00,0x04,0xFF,0x84,0x08,0x04,0x10,0x24,0x22,0x24,0x41,0x24,0xFF,0xA4,0x08,0xA4,
0x08,0x24,0x08,0x24,0x7F,0x24,0x08,0x24,0x08,0x04,0x0F,0x84,0xF8,0x14,0x40,0x08,



/*---ת���ַ� �� ---96*/
"��",0x10,0x20,0x10,0x20,0x3C,0x20,0x20,0x20,0x41,0xFC,0xBD,0x24,0x11,0x24,0x11,0x24,
0xFD,0x24,0x11,0xFC,0x11,0x24,0x10,0x20,0x14,0x20,0x18,0x20,0x10,0x20,0x00,0x20,


/*---ת���ַ� �� ---*/
"��",0x08,0x20,0x08,0x20,0xFF,0xFE,0x08,0x20,0x08,0x20,0x00,0x00,0x7F,0xF8,0x02,0x08,
0x02,0x08,0x02,0x08,0x02,0x08,0x02,0x50,0x02,0x20,0x02,0x00,0x02,0x00,0x02,0x00,


/*---ת���ַ� �� ---98*/
"��",0x10,0x20,0x10,0x20,0x10,0x40,0x11,0xFC,0xFD,0x04,0x11,0x04,0x11,0x04,0x15,0x04,
0x19,0xFC,0x31,0x04,0xD1,0x04,0x11,0x04,0x11,0x04,0x11,0x04,0x51,0xFC,0x21,0x04,

/*---ת���ַ� ϵ ---*/
"ϵ",0x00,0xF8,0x3F,0x00,0x04,0x00,0x08,0x20,0x10,0x40,0x3F,0x80,0x01,0x00,0x06,0x10,
0x18,0x08,0x7F,0xFC,0x01,0x04,0x09,0x20,0x11,0x10,0x21,0x08,0x45,0x04,0x02,0x00,


/*---ת���ַ� ͳ ---100*/
"ͳ",0x10,0x40,0x10,0x20,0x20,0x20,0x23,0xFE,0x48,0x40,0xF8,0x88,0x11,0x04,0x23,0xFE,
0x40,0x92,0xF8,0x90,0x40,0x90,0x00,0x90,0x19,0x12,0xE1,0x12,0x42,0x0E,0x04,0x00,


/*---ת���ַ� �� ---*/
"��",0x00,0x50,0x00,0x48,0x00,0x40,0x3F,0xFE,0x20,0x40,0x20,0x40,0x20,0x44,0x3E,0x44,
0x22,0x44,0x22,0x28,0x22,0x28,0x22,0x12,0x2A,0x32,0x44,0x4A,0x40,0x86,0x81,0x02,


/*---ת���ַ� �� ---102*/
"��",0x00,0x40,0x00,0x40,0x00,0x40,0xFE,0x40,0x11,0xFC,0x10,0x44,0x10,0x44,0x10,0x44,
0x10,0x44,0x10,0x84,0x10,0x84,0x1E,0x84,0xF1,0x04,0x41,0x04,0x02,0x28,0x04,0x10,

/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x21,0xF0,0x11,0x10,0x11,0x10,0x01,0x10,0x02,0x0E,0xF4,0x00,0x13,0xF8,
0x11,0x08,0x11,0x10,0x10,0x90,0x14,0xA0,0x18,0x40,0x10,0xA0,0x03,0x18,0x0C,0x06,


/*---ת���ַ� �� ---104*/
"��",0x7F,0xFC,0x44,0x44,0x7F,0xFC,0x01,0x00,0x7F,0xFC,0x01,0x00,0x1F,0xF0,0x10,0x10,
0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0xFF,0xFE,0x00,0x00,


/*---ת���ַ� �� ---*/
"��",0x01,0x00,0x11,0x10,0x11,0x08,0x22,0x00,0x3F,0xFC,0x02,0x00,0x04,0x00,0x07,0xF8,
0x0A,0x08,0x09,0x08,0x11,0x10,0x10,0xA0,0x20,0x40,0x40,0xA0,0x03,0x18,0x1C,0x06,


/*---ת���ַ� �� ---*/
"��",0x02,0x08,0x21,0x08,0x11,0x10,0x17,0xFC,0x00,0x40,0x00,0x40,0xF0,0x40,0x17,0xFE,
0x10,0x40,0x10,0xA0,0x10,0x90,0x11,0x08,0x12,0x08,0x28,0x00,0x47,0xFE,0x00,0x00,


/*---ת���ַ� �� ---*/
"��",0x00,0x40,0x22,0x48,0x11,0x48,0x11,0x50,0x80,0x40,0x43,0xF8,0x4A,0x08,0x0A,0x08,
0x13,0xF8,0x12,0x08,0xE2,0x08,0x23,0xF8,0x22,0x08,0x22,0x08,0x22,0x28,0x02,0x10,


/*---ת���ַ� Ϣ ---108*/
"Ϣ",0x01,0x00,0x02,0x00,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,
0x1F,0xF0,0x10,0x10,0x01,0x00,0x08,0x84,0x48,0x92,0x48,0x12,0x87,0xF0,0x00,0x00,


/*---ת���ַ� �� ---109*/
"��",0x01,0x00,0x01,0x00,0x02,0x80,0x04,0x40,0x08,0x20,0x10,0x10,0x21,0x08,0xC1,0x06,
0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,


/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x3F,0xF8,0x21,0x08,0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,0x21,0x08,
0x21,0x08,0x3F,0xF8,0x21,0x08,0x21,0x08,0x21,0x08,0x41,0x08,0x41,0x28,0x80,0x10,


/*---ת���ַ� �� ---111*/
"��",0x00,0x00,0x3F,0xF0,0x00,0x20,0x00,0x40,0x51,0x94,0x49,0x24,0x45,0x44,0x41,0x04,
0x45,0x44,0x49,0x24,0x51,0x14,0x45,0x04,0x42,0x04,0x40,0x04,0x7F,0xFC,0x00,0x04,



/*---ת���ַ� ͬ ---*/
"ͬ",0x00,0x00,0x3F,0xFC,0x20,0x04,0x20,0x04,0x2F,0xF4,0x20,0x04,0x20,0x04,0x27,0xE4,
0x24,0x24,0x24,0x24,0x24,0x24,0x27,0xE4,0x24,0x24,0x20,0x04,0x20,0x14,0x20,0x08,


/*---ת���ַ� �� ---113*/
"��",0x01,0x00,0x3F,0xF8,0x08,0x20,0x04,0x40,0xFF,0xFE,0x00,0x00,0x1F,0xF0,0x10,0x10,
0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x02,0x00,0x51,0x04,0x51,0x12,0x90,0x12,0x0F,0xF0,

/*---ת���ַ� �� ---114*/
"��",0x00,0x00,0x7F,0xFC,0x00,0x80,0x00,0x80,0x01,0x00,0x01,0x00,0x03,0x40,0x05,0x20,
0x09,0x10,0x11,0x08,0x21,0x04,0x41,0x04,0x81,0x00,0x01,0x00,0x01,0x00,0x01,0x00,

/*---ת���ַ� �� ---115*/
"��",0x00,0x40,0x40,0x40,0x27,0xFC,0x20,0x40,0x03,0xF8,0x00,0x40,0xE7,0xFE,0x20,0x00,
0x23,0xF8,0x22,0x08,0x23,0xF8,0x22,0x08,0x2B,0xF8,0x32,0x08,0x22,0x28,0x02,0x10,

 
/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x23,0xF8,0x10,0x00,0x10,0x00,0x00,0x00,0x07,0xFC,0xF0,0x40,0x10,0x80,
0x11,0x10,0x12,0x08,0x17,0xFC,0x12,0x04,0x10,0x00,0x28,0x00,0x47,0xFE,0x00,0x00,


/*---ת���ַ� �� ---*/
"��",0x08,0x00,0x09,0xFC,0x10,0x00,0x20,0x00,0x48,0x00,0x08,0x00,0x13,0xFE,0x30,0x20,
0x50,0x20,0x90,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0xA0,0x10,0x40,


/*---ת���ַ� �� ---*/
"��",0x08,0x40,0x08,0x20,0x0B,0xFE,0x10,0x00,0x10,0x00,0x31,0xFC,0x30,0x00,0x50,0x00,
0x91,0xFC,0x10,0x00,0x10,0x00,0x11,0xFC,0x11,0x04,0x11,0x04,0x11,0xFC,0x11,0x04,


/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x00,0x00,0xFF,0xFE,
0x08,0x00,0x10,0x00,0x1F,0xF0,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0xA0,0x00,0x40,


/*---ת���ַ� �� ---120*/
"��",0x00,0x00,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0xFF,0xFE,0x00,0x00,0x1F,0xF0,
0x11,0x10,0x1F,0xF0,0x11,0x10,0x1F,0xF0,0x01,0x00,0x1F,0xF0,0x01,0x00,0x7F,0xFC,


/*---ת���ַ� �� ---121*/
"��",0x10,0x40,0x10,0x40,0x20,0xA0,0x21,0x10,0x4A,0x08,0xF4,0x06,0x13,0xF8,0x20,0x00,
0x40,0x00,0xFB,0xF8,0x42,0x08,0x02,0x08,0x1A,0x08,0xE2,0x08,0x43,0xF8,0x02,0x08,


/*---ת���ַ� �� ---*/
"��",0x00,0x80,0x20,0x40,0x10,0x40,0x17,0xFC,0x00,0x10,0x02,0x10,0xF1,0x20,0x10,0xA0,
0x10,0x40,0x10,0xA0,0x11,0x10,0x12,0x08,0x14,0x08,0x28,0x00,0x47,0xFE,0x00,0x00,


/*---ת���ַ� �� ---*/
"��",0x02,0x00,0x01,0x00,0x7F,0xFE,0x40,0x02,0x80,0x04,0x1F,0xE0,0x00,0x40,0x00,0x80,
0x01,0x00,0xFF,0xFE,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x05,0x00,0x02,0x00,


/*---ת���ַ� �� ---*/
"��",0x10,0x40,0x10,0x40,0x3F,0x7E,0x48,0x90,0x85,0x08,0x08,0x10,0x08,0x10,0x13,0xFE,
0x30,0x10,0x51,0x10,0x90,0x90,0x10,0x90,0x10,0x10,0x10,0x10,0x10,0x50,0x10,0x20,


/*---ת���ַ� �� ---125*/
"��",0x01,0x00,0x01,0x00,0x3F,0xF8,0x21,0x08,0x21,0x08,0x3F,0xF8,0x01,0x00,0x01,0x00,
0x7F,0xFC,0x41,0x04,0x41,0x04,0x7F,0xFC,0x41,0x04,0x01,0x00,0x01,0x00,0x01,0x00,


/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x0F,0xE0,0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x20,
0x08,0x20,0x08,0x20,0x10,0x20,0x10,0x22,0x20,0x22,0x20,0x22,0x40,0x1E,0x80,0x00,


/*---ת���ַ� �� ---*/
"��",0x00,0x00,0x01,0xFC,0xFD,0x04,0x11,0x04,0x11,0x24,0x11,0x24,0x11,0x24,0x7D,0x24,
0x11,0x24,0x11,0x54,0x10,0x50,0x10,0x90,0x1C,0x90,0xE1,0x12,0x42,0x12,0x04,0x0E,


/*---ת���ַ� ֮ ---*/
"֮",0x02,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x7F,0xF8,0x00,0x10,0x00,0x20,0x00,0x40,
0x00,0x80,0x01,0x00,0x02,0x00,0x04,0x00,0x18,0x00,0x24,0x00,0x43,0xFE,0x00,0x00,


/*---ת���ַ� �� ---129*/
"��",0x00,0x00,0x0F,0xDE,0x72,0x52,0x52,0x52,0x52,0x54,0x57,0xD4,0x52,0x58,0x52,0x54,
0x52,0x52,0x5F,0xD2,0x72,0x52,0x52,0x5A,0x02,0x54,0x04,0x50,0x05,0x50,0x08,0x90,


/*---ת���ַ� �� ---*/
"��",0x10,0x40,0x24,0x44,0x42,0x48,0xFF,0x70,0x01,0x40,0x00,0x42,0x7E,0x42,0x42,0x3E,
0x42,0x00,0x7E,0x44,0x42,0x48,0x42,0x70,0x7E,0x40,0x42,0x42,0x4A,0x42,0x44,0x3E,


/*---ת���ַ� �� ---*/
"��",0x08,0x40,0x08,0x40,0x48,0x40,0x48,0x80,0x48,0xFE,0x49,0x08,0x4A,0x88,0x48,0x88,
0x48,0x88,0x58,0x50,0x68,0x50,0x48,0x20,0x08,0x50,0x08,0x88,0x09,0x04,0x0A,0x02,


/*---ת���ַ� �� ---132*/
"��",0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,0x00,0x00,
0xFF,0xFE,0x01,0x00,0x11,0x00,0x11,0xF8,0x11,0x00,0x29,0x00,0x45,0x00,0x83,0xFE,


/*---ת���ַ� �� ---*/
"��",0x09,0x00,0x08,0x80,0x1F,0xFC,0x30,0x80,0x5F,0xF8,0x90,0x80,0x1F,0xF8,0x10,0x80,
0x1F,0xFC,0x11,0x00,0xFF,0xFE,0x05,0x40,0x09,0x20,0x31,0x18,0xC1,0x06,0x01,0x00,


/*---ת���ַ� �� ---*/
"��",0x02,0x00,0x01,0x00,0x7F,0xFE,0x40,0x02,0x80,0x04,0x1F,0xF0,0x00,0x00,0x00,0x00,
0x7F,0xFC,0x04,0x40,0x04,0x40,0x04,0x40,0x08,0x44,0x08,0x44,0x10,0x44,0x60,0x3C,


/*---ת���ַ� �� ---135*/
"��",0x08,0x20,0x08,0x20,0xFF,0xBE,0x08,0x44,0x7F,0xA4,0x49,0x24,0x7F,0x28,0x2A,0x10,
0x49,0x28,0x88,0x46,0x00,0x00,0x7F,0xFC,0x01,0x00,0x11,0xF8,0x11,0x00,0xFF,0xFE,


};