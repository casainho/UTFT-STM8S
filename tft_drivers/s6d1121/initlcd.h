case S6D1121_8:
case S6D1121_16:
	UTFT_LCD_Write_COM_DATA(0x11,0x2004);		
	UTFT_LCD_Write_COM_DATA(0x13,0xCC00);		
	UTFT_LCD_Write_COM_DATA(0x15,0x2600);	
	UTFT_LCD_Write_COM_DATA(0x14,0x252A);	
	UTFT_LCD_Write_COM_DATA(0x12,0x0033);		
	UTFT_LCD_Write_COM_DATA(0x13,0xCC04);		
	UTFT_LCD_Write_COM_DATA(0x13,0xCC06);		
	UTFT_LCD_Write_COM_DATA(0x13,0xCC4F);		
	UTFT_LCD_Write_COM_DATA(0x13,0x674F);
	UTFT_LCD_Write_COM_DATA(0x11,0x2003);
	UTFT_LCD_Write_COM_DATA(0x30,0x2609);		
	UTFT_LCD_Write_COM_DATA(0x31,0x242C);		
	UTFT_LCD_Write_COM_DATA(0x32,0x1F23);		
	UTFT_LCD_Write_COM_DATA(0x33,0x2425);		
	UTFT_LCD_Write_COM_DATA(0x34,0x2226);		
	UTFT_LCD_Write_COM_DATA(0x35,0x2523);		
	UTFT_LCD_Write_COM_DATA(0x36,0x1C1A);		
	UTFT_LCD_Write_COM_DATA(0x37,0x131D);		
	UTFT_LCD_Write_COM_DATA(0x38,0x0B11);		
	UTFT_LCD_Write_COM_DATA(0x39,0x1210);		
	UTFT_LCD_Write_COM_DATA(0x3A,0x1315);		
	UTFT_LCD_Write_COM_DATA(0x3B,0x3619);		
	UTFT_LCD_Write_COM_DATA(0x3C,0x0D00);		
	UTFT_LCD_Write_COM_DATA(0x3D,0x000D);		
	UTFT_LCD_Write_COM_DATA(0x16,0x0007);		
	UTFT_LCD_Write_COM_DATA(0x02,0x0013);		
	UTFT_LCD_Write_COM_DATA(0x03,0x0003);		
	UTFT_LCD_Write_COM_DATA(0x01,0x0127);		
	UTFT_LCD_Write_COM_DATA(0x08,0x0303);		
	UTFT_LCD_Write_COM_DATA(0x0A,0x000B);		
	UTFT_LCD_Write_COM_DATA(0x0B,0x0003);   
	UTFT_LCD_Write_COM_DATA(0x0C,0x0000);   
	UTFT_LCD_Write_COM_DATA(0x41,0x0000);    
	UTFT_LCD_Write_COM_DATA(0x50,0x0000);   
	UTFT_LCD_Write_COM_DATA(0x60,0x0005);    
	UTFT_LCD_Write_COM_DATA(0x70,0x000B);    
	UTFT_LCD_Write_COM_DATA(0x71,0x0000);    
	UTFT_LCD_Write_COM_DATA(0x78,0x0000);    
	UTFT_LCD_Write_COM_DATA(0x7A,0x0000);   
	UTFT_LCD_Write_COM_DATA(0x79,0x0007);		
	UTFT_LCD_Write_COM_DATA(0x07,0x0051);   
	UTFT_LCD_Write_COM_DATA(0x07,0x0053);		
	UTFT_LCD_Write_COM_DATA(0x79,0x0000);
	UTFT_LCD_Write_COM(0x22);
	break;
