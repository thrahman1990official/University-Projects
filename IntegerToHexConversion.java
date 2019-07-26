package integertohexconverter;

import java.util.Scanner;

public class IntegerToHexConversion 
{
	public static void main(String[] args) 	
	{
int enterInteger=0;

System.out.println("We shall start with encoding process. Enter Unencoded decimal below: ");

Scanner scanInt = new Scanner(System.in);

int unencodedDecimal = scanInt.nextInt();
	
System.out.println("Unencoded decimal you have entered below");

System.out.println(unencodedDecimal);

int intermediateDecimal = unencodedDecimal + 8192;

System.out.println("The intermediate Decimal is: ");

System.out.println(intermediateDecimal);

String strIntHex = Integer.toHexString(intermediateDecimal);

System.out.println("The hexadecimal of the intermediate decimal is: ");

System.out.println(strIntHex);

int lowerBits = intermediateDecimal & 0x007F;

int upperBits = intermediateDecimal & 0x3F80;

int binaryEncoded = lowerBits + (upperBits<<1);

System.out.println("The Encoded Hexadecimal value is: ");

String strEncHex = String.format("%04X", binaryEncoded);

System.out.println(strEncHex);

System.out.println("We are done with the process of encoding and now we will decode.");

String lowerBytes = strEncHex.substring(0, (strEncHex.length()/2));

System.out.println("lower bytes of encoded hex: " + lowerBytes);

String upperBytes = strEncHex.substring(strEncHex.length()/2);

System.out.println("Upper bytes of encoded hex: " + upperBytes);

int lowByt = Integer.parseInt(lowerBytes, 16);

int higByt = Integer.parseInt(upperBytes, 16);

short compressedBytes = (short)(lowByt + (higByt << 7));

short decodedInteger = (short)(compressedBytes - 8192);

System.out.println("The decoded integer value is: " + decodedInteger);

System.exit(0);

	}
	
}
