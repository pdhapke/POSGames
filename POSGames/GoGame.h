//file to be updated by Peter Hapke

#pragma once
#include <vector>
#include <list>
#include <iostream>

struct Coordinates {
	int x; 
	int y; 
	char owner; // 'b' for black 'w' for white 'n' for none or neither
	int shapeNumber; 
};


struct Shape {
	int liberties; 
	char owner; 
	std::vector<Coordinates*> gamePieces; 
};

namespace POSGames {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GoGame
	/// </summary>
	public ref class GoGame : public System::Windows::Forms::Form
	{
		
	public:
		GoGame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			


		Coordinates temp; 
		int DEFAULT_SHAPE_NUMBER_WHICH_IS_TOO_BIG = 999;
		temp.owner = 'n'; 
		for(int i = 0; i < 361; i++){
			temp.x = i%19; 
			temp.y = i/19; //integer division is on purpose here
			temp.shapeNumber = DEFAULT_SHAPE_NUMBER_WHICH_IS_TOO_BIG; 
			virtualBoard->push_back(temp); 
		}

		board->Add(checkBox1);
		board->Add(checkBox2);
		board->Add(checkBox3);
		board->Add(checkBox4);
		board->Add(checkBox5);
		board->Add(checkBox6);
		board->Add(checkBox7);
		board->Add(checkBox8);
		board->Add(checkBox9);
		board->Add(checkBox10);
		board->Add(checkBox11);
		board->Add(checkBox12);
		board->Add(checkBox13);
		board->Add(checkBox14);
		board->Add(checkBox15);
		board->Add(checkBox16);
		board->Add(checkBox17);
		board->Add(checkBox18);
		board->Add(checkBox19);
		board->Add(checkBox20);
		board->Add(checkBox21);
		board->Add(checkBox22);
		board->Add(checkBox23);
		board->Add(checkBox24);
		board->Add(checkBox25);
		board->Add(checkBox26);
		board->Add(checkBox27);
		board->Add(checkBox28);
		board->Add(checkBox29);
		board->Add(checkBox30);
		board->Add(checkBox31);
		board->Add(checkBox32);
		board->Add(checkBox33);
		board->Add(checkBox34);
		board->Add(checkBox35);
		board->Add(checkBox36);
		board->Add(checkBox37);
		board->Add(checkBox38);
		board->Add(checkBox39);
		board->Add(checkBox40);
		board->Add(checkBox41);
		board->Add(checkBox42);
		board->Add(checkBox43);
		board->Add(checkBox44);
		board->Add(checkBox45);
		board->Add(checkBox46);
		board->Add(checkBox47);
		board->Add(checkBox48);
		board->Add(checkBox49);
		board->Add(checkBox50);
		board->Add(checkBox51);
		board->Add(checkBox52);
		board->Add(checkBox53);
		board->Add(checkBox54);
		board->Add(checkBox55);
		board->Add(checkBox56);
		board->Add(checkBox57);
		board->Add(checkBox58);
		board->Add(checkBox59);
		board->Add(checkBox60);
		board->Add(checkBox61);
		board->Add(checkBox62);
		board->Add(checkBox63);
		board->Add(checkBox64);
		board->Add(checkBox65);
		board->Add(checkBox66);
		board->Add(checkBox67);
		board->Add(checkBox68);
		board->Add(checkBox69);
		board->Add(checkBox70);
		board->Add(checkBox71);
		board->Add(checkBox72);
		board->Add(checkBox73);
		board->Add(checkBox74);
		board->Add(checkBox75);
		board->Add(checkBox76);
		board->Add(checkBox77);
		board->Add(checkBox78);
		board->Add(checkBox79);
		board->Add(checkBox80);
		board->Add(checkBox81);
		board->Add(checkBox82);
		board->Add(checkBox83);
		board->Add(checkBox84);
		board->Add(checkBox85);
		board->Add(checkBox86);
		board->Add(checkBox87);
		board->Add(checkBox88);
		board->Add(checkBox89);
		board->Add(checkBox90);
		board->Add(checkBox91);
		board->Add(checkBox92);
		board->Add(checkBox93);
		board->Add(checkBox94);
		board->Add(checkBox95);
		board->Add(checkBox96);
		board->Add(checkBox97);
		board->Add(checkBox98);
		board->Add(checkBox99);
		board->Add(checkBox100);
		board->Add(checkBox101);
		board->Add(checkBox102);
		board->Add(checkBox103);
		board->Add(checkBox104);
		board->Add(checkBox105);
		board->Add(checkBox106);
		board->Add(checkBox107);
		board->Add(checkBox108);
		board->Add(checkBox109);
		board->Add(checkBox110);
		board->Add(checkBox111);
		board->Add(checkBox112);
		board->Add(checkBox113);
		board->Add(checkBox114);
		board->Add(checkBox115);
		board->Add(checkBox116);
		board->Add(checkBox117);
		board->Add(checkBox118);
		board->Add(checkBox119);
		board->Add(checkBox120);
		board->Add(checkBox121);
		board->Add(checkBox122);
		board->Add(checkBox123);
		board->Add(checkBox124);
		board->Add(checkBox125);
		board->Add(checkBox126);
		board->Add(checkBox127);
		board->Add(checkBox128);
		board->Add(checkBox129);
		board->Add(checkBox130);
		board->Add(checkBox131);
		board->Add(checkBox132);
		board->Add(checkBox133);
		board->Add(checkBox134);
		board->Add(checkBox135);
		board->Add(checkBox136);
		board->Add(checkBox137);
		board->Add(checkBox138);
		board->Add(checkBox139);
		board->Add(checkBox140);
		board->Add(checkBox141);
		board->Add(checkBox142);
		board->Add(checkBox143);
		board->Add(checkBox144);
		board->Add(checkBox145);
		board->Add(checkBox146);
		board->Add(checkBox147);
		board->Add(checkBox148);
		board->Add(checkBox149);
		board->Add(checkBox150);
		board->Add(checkBox151);
		board->Add(checkBox152);
		board->Add(checkBox153);
		board->Add(checkBox154);
		board->Add(checkBox155);
		board->Add(checkBox156);
		board->Add(checkBox157);
		board->Add(checkBox158);
		board->Add(checkBox159);
		board->Add(checkBox160);
		board->Add(checkBox161);
		board->Add(checkBox162);
		board->Add(checkBox163);
		board->Add(checkBox164);
		board->Add(checkBox165);
		board->Add(checkBox166);
		board->Add(checkBox167);
		board->Add(checkBox168);
		board->Add(checkBox169);
		board->Add(checkBox170);
		board->Add(checkBox171);
		board->Add(checkBox172);
		board->Add(checkBox173);
		board->Add(checkBox174);
		board->Add(checkBox175);
		board->Add(checkBox176);
		board->Add(checkBox177);
		board->Add(checkBox178);
		board->Add(checkBox179);
		board->Add(checkBox180);
		board->Add(checkBox181);
		board->Add(checkBox182);
		board->Add(checkBox183);
		board->Add(checkBox184);
		board->Add(checkBox185);
		board->Add(checkBox186);
		board->Add(checkBox187);
		board->Add(checkBox188);
		board->Add(checkBox189);
		board->Add(checkBox190);
		board->Add(checkBox191);
		board->Add(checkBox192);
		board->Add(checkBox193);
		board->Add(checkBox194);
		board->Add(checkBox195);
		board->Add(checkBox196);
		board->Add(checkBox197);
		board->Add(checkBox198);
		board->Add(checkBox199);
		board->Add(checkBox200);
		board->Add(checkBox201);
		board->Add(checkBox202);
		board->Add(checkBox203);
		board->Add(checkBox204);
		board->Add(checkBox205);
		board->Add(checkBox206);
		board->Add(checkBox207);
		board->Add(checkBox208);
		board->Add(checkBox209);
		board->Add(checkBox210);
		board->Add(checkBox211);
		board->Add(checkBox212);
		board->Add(checkBox213);
		board->Add(checkBox214);
		board->Add(checkBox215);
		board->Add(checkBox216);
		board->Add(checkBox217);
		board->Add(checkBox218);
		board->Add(checkBox219);
		board->Add(checkBox220);
		board->Add(checkBox221);
		board->Add(checkBox222);
		board->Add(checkBox223);
		board->Add(checkBox224);
		board->Add(checkBox225);
		board->Add(checkBox226);
		board->Add(checkBox227);
		board->Add(checkBox228);
		board->Add(checkBox229);
		board->Add(checkBox230);
		board->Add(checkBox231);
		board->Add(checkBox232);
		board->Add(checkBox233);
		board->Add(checkBox234);
		board->Add(checkBox235);
		board->Add(checkBox236);
		board->Add(checkBox237);
		board->Add(checkBox238);
		board->Add(checkBox239);
		board->Add(checkBox240);
		board->Add(checkBox241);
		board->Add(checkBox242);
		board->Add(checkBox243);
		board->Add(checkBox244);
		board->Add(checkBox245);
		board->Add(checkBox246);
		board->Add(checkBox247);
		board->Add(checkBox248);
		board->Add(checkBox249);
		board->Add(checkBox250);
		board->Add(checkBox251);
		board->Add(checkBox252);
		board->Add(checkBox253);
		board->Add(checkBox254);
		board->Add(checkBox255);
		board->Add(checkBox256);
		board->Add(checkBox257);
		board->Add(checkBox258);
		board->Add(checkBox259);
		board->Add(checkBox260);
		board->Add(checkBox261);
		board->Add(checkBox262);
		board->Add(checkBox263);
		board->Add(checkBox264);
		board->Add(checkBox265);
		board->Add(checkBox266);
		board->Add(checkBox267);
		board->Add(checkBox268);
		board->Add(checkBox269);
		board->Add(checkBox270);
		board->Add(checkBox271);
		board->Add(checkBox272);
		board->Add(checkBox273);
		board->Add(checkBox274);
		board->Add(checkBox275);
		board->Add(checkBox276);
		board->Add(checkBox277);
		board->Add(checkBox278);
		board->Add(checkBox279);
		board->Add(checkBox280);
		board->Add(checkBox281);
		board->Add(checkBox282);
		board->Add(checkBox283);
		board->Add(checkBox284);
		board->Add(checkBox285);
		board->Add(checkBox286);
		board->Add(checkBox287);
		board->Add(checkBox288);
		board->Add(checkBox289);
		board->Add(checkBox290);
		board->Add(checkBox291);
		board->Add(checkBox292);
		board->Add(checkBox293);
		board->Add(checkBox294);
		board->Add(checkBox295);
		board->Add(checkBox296);
		board->Add(checkBox297);
		board->Add(checkBox298);
		board->Add(checkBox299);
		board->Add(checkBox300);
		board->Add(checkBox301);
		board->Add(checkBox302);
		board->Add(checkBox303);
		board->Add(checkBox304);
		board->Add(checkBox305);
		board->Add(checkBox306);
		board->Add(checkBox307);
		board->Add(checkBox308);
		board->Add(checkBox309);
		board->Add(checkBox310);
		board->Add(checkBox311);
		board->Add(checkBox312);
		board->Add(checkBox313);
		board->Add(checkBox314);
		board->Add(checkBox315);
		board->Add(checkBox316);
		board->Add(checkBox317);
		board->Add(checkBox318);
		board->Add(checkBox319);
		board->Add(checkBox320);
		board->Add(checkBox321);
		board->Add(checkBox322);
		board->Add(checkBox323);
		board->Add(checkBox324);
		board->Add(checkBox325);
		board->Add(checkBox326);
		board->Add(checkBox327);
		board->Add(checkBox328);
		board->Add(checkBox329);
		board->Add(checkBox330);
		board->Add(checkBox331);
		board->Add(checkBox332);
		board->Add(checkBox333);
		board->Add(checkBox334);
		board->Add(checkBox335);
		board->Add(checkBox336);
		board->Add(checkBox337);
		board->Add(checkBox338);
		board->Add(checkBox339);
		board->Add(checkBox340);
		board->Add(checkBox341);
		board->Add(checkBox342);
		board->Add(checkBox343);
		board->Add(checkBox344);
		board->Add(checkBox345);
		board->Add(checkBox346);
		board->Add(checkBox347);
		board->Add(checkBox348);
		board->Add(checkBox349);
		board->Add(checkBox350);
		board->Add(checkBox351);
		board->Add(checkBox352);
		board->Add(checkBox353);
		board->Add(checkBox354);
		board->Add(checkBox355);
		board->Add(checkBox356);
		board->Add(checkBox357);
		board->Add(checkBox358);
		board->Add(checkBox359);
		board->Add(checkBox360);
		board->Add(checkBox361);


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GoGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBox1;
			
	protected:
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::CheckBox^  checkBox15;
	private: System::Windows::Forms::CheckBox^  checkBox16;
	private: System::Windows::Forms::CheckBox^  checkBox17;
	private: System::Windows::Forms::CheckBox^  checkBox18;
	private: System::Windows::Forms::CheckBox^  checkBox19;
	private: System::Windows::Forms::CheckBox^  checkBox20;
	private: System::Windows::Forms::CheckBox^  checkBox21;
	private: System::Windows::Forms::CheckBox^  checkBox22;
	private: System::Windows::Forms::CheckBox^  checkBox23;
	private: System::Windows::Forms::CheckBox^  checkBox24;
	private: System::Windows::Forms::CheckBox^  checkBox25;
	private: System::Windows::Forms::CheckBox^  checkBox26;
	private: System::Windows::Forms::CheckBox^  checkBox27;
	private: System::Windows::Forms::CheckBox^  checkBox28;
	private: System::Windows::Forms::CheckBox^  checkBox29;
	private: System::Windows::Forms::CheckBox^  checkBox30;
	private: System::Windows::Forms::CheckBox^  checkBox31;
	private: System::Windows::Forms::CheckBox^  checkBox32;
	private: System::Windows::Forms::CheckBox^  checkBox33;
	private: System::Windows::Forms::CheckBox^  checkBox34;
	private: System::Windows::Forms::CheckBox^  checkBox35;
	private: System::Windows::Forms::CheckBox^  checkBox36;
	private: System::Windows::Forms::CheckBox^  checkBox37;
	private: System::Windows::Forms::CheckBox^  checkBox38;
	private: System::Windows::Forms::CheckBox^  checkBox39;
	private: System::Windows::Forms::CheckBox^  checkBox40;
	private: System::Windows::Forms::CheckBox^  checkBox41;
	private: System::Windows::Forms::CheckBox^  checkBox42;
	private: System::Windows::Forms::CheckBox^  checkBox43;
	private: System::Windows::Forms::CheckBox^  checkBox44;
	private: System::Windows::Forms::CheckBox^  checkBox45;
	private: System::Windows::Forms::CheckBox^  checkBox46;
	private: System::Windows::Forms::CheckBox^  checkBox47;
	private: System::Windows::Forms::CheckBox^  checkBox48;
	private: System::Windows::Forms::CheckBox^  checkBox49;
	private: System::Windows::Forms::CheckBox^  checkBox50;
	private: System::Windows::Forms::CheckBox^  checkBox51;
	private: System::Windows::Forms::CheckBox^  checkBox52;
	private: System::Windows::Forms::CheckBox^  checkBox53;
	private: System::Windows::Forms::CheckBox^  checkBox54;
	private: System::Windows::Forms::CheckBox^  checkBox55;
	private: System::Windows::Forms::CheckBox^  checkBox56;
	private: System::Windows::Forms::CheckBox^  checkBox57;
	private: System::Windows::Forms::CheckBox^  checkBox58;
	private: System::Windows::Forms::CheckBox^  checkBox59;
	private: System::Windows::Forms::CheckBox^  checkBox60;
	private: System::Windows::Forms::CheckBox^  checkBox61;
	private: System::Windows::Forms::CheckBox^  checkBox62;
	private: System::Windows::Forms::CheckBox^  checkBox63;
	private: System::Windows::Forms::CheckBox^  checkBox64;
	private: System::Windows::Forms::CheckBox^  checkBox65;
	private: System::Windows::Forms::CheckBox^  checkBox66;
	private: System::Windows::Forms::CheckBox^  checkBox67;
	private: System::Windows::Forms::CheckBox^  checkBox68;
	private: System::Windows::Forms::CheckBox^  checkBox69;
	private: System::Windows::Forms::CheckBox^  checkBox70;
	private: System::Windows::Forms::CheckBox^  checkBox71;
	private: System::Windows::Forms::CheckBox^  checkBox72;
	private: System::Windows::Forms::CheckBox^  checkBox73;
	private: System::Windows::Forms::CheckBox^  checkBox74;
	private: System::Windows::Forms::CheckBox^  checkBox75;
	private: System::Windows::Forms::CheckBox^  checkBox76;
	private: System::Windows::Forms::CheckBox^  checkBox77;
	private: System::Windows::Forms::CheckBox^  checkBox78;
	private: System::Windows::Forms::CheckBox^  checkBox79;
	private: System::Windows::Forms::CheckBox^  checkBox80;
	private: System::Windows::Forms::CheckBox^  checkBox81;
	private: System::Windows::Forms::CheckBox^  checkBox82;
	private: System::Windows::Forms::CheckBox^  checkBox83;
	private: System::Windows::Forms::CheckBox^  checkBox84;
	private: System::Windows::Forms::CheckBox^  checkBox85;
	private: System::Windows::Forms::CheckBox^  checkBox86;
	private: System::Windows::Forms::CheckBox^  checkBox87;
	private: System::Windows::Forms::CheckBox^  checkBox88;
	private: System::Windows::Forms::CheckBox^  checkBox89;
	private: System::Windows::Forms::CheckBox^  checkBox90;
	private: System::Windows::Forms::CheckBox^  checkBox91;
	private: System::Windows::Forms::CheckBox^  checkBox92;
	private: System::Windows::Forms::CheckBox^  checkBox93;
	private: System::Windows::Forms::CheckBox^  checkBox94;
	private: System::Windows::Forms::CheckBox^  checkBox95;
	private: System::Windows::Forms::CheckBox^  checkBox96;
	private: System::Windows::Forms::CheckBox^  checkBox97;
	private: System::Windows::Forms::CheckBox^  checkBox98;
	private: System::Windows::Forms::CheckBox^  checkBox99;
	private: System::Windows::Forms::CheckBox^  checkBox100;
	private: System::Windows::Forms::CheckBox^  checkBox101;
	private: System::Windows::Forms::CheckBox^  checkBox102;
	private: System::Windows::Forms::CheckBox^  checkBox103;
	private: System::Windows::Forms::CheckBox^  checkBox104;
	private: System::Windows::Forms::CheckBox^  checkBox105;
	private: System::Windows::Forms::CheckBox^  checkBox106;
	private: System::Windows::Forms::CheckBox^  checkBox107;
	private: System::Windows::Forms::CheckBox^  checkBox108;
	private: System::Windows::Forms::CheckBox^  checkBox109;
	private: System::Windows::Forms::CheckBox^  checkBox110;
	private: System::Windows::Forms::CheckBox^  checkBox111;
	private: System::Windows::Forms::CheckBox^  checkBox112;
	private: System::Windows::Forms::CheckBox^  checkBox113;
	private: System::Windows::Forms::CheckBox^  checkBox114;
	private: System::Windows::Forms::CheckBox^  checkBox115;
	private: System::Windows::Forms::CheckBox^  checkBox116;
	private: System::Windows::Forms::CheckBox^  checkBox117;
	private: System::Windows::Forms::CheckBox^  checkBox118;
	private: System::Windows::Forms::CheckBox^  checkBox119;
	private: System::Windows::Forms::CheckBox^  checkBox120;
	private: System::Windows::Forms::CheckBox^  checkBox121;
	private: System::Windows::Forms::CheckBox^  checkBox122;
	private: System::Windows::Forms::CheckBox^  checkBox123;
	private: System::Windows::Forms::CheckBox^  checkBox124;
	private: System::Windows::Forms::CheckBox^  checkBox125;
	private: System::Windows::Forms::CheckBox^  checkBox126;
	private: System::Windows::Forms::CheckBox^  checkBox127;
	private: System::Windows::Forms::CheckBox^  checkBox128;
	private: System::Windows::Forms::CheckBox^  checkBox129;
	private: System::Windows::Forms::CheckBox^  checkBox130;
	private: System::Windows::Forms::CheckBox^  checkBox131;
	private: System::Windows::Forms::CheckBox^  checkBox132;
	private: System::Windows::Forms::CheckBox^  checkBox133;
	private: System::Windows::Forms::CheckBox^  checkBox134;
	private: System::Windows::Forms::CheckBox^  checkBox135;
	private: System::Windows::Forms::CheckBox^  checkBox136;
	private: System::Windows::Forms::CheckBox^  checkBox137;
	private: System::Windows::Forms::CheckBox^  checkBox138;
	private: System::Windows::Forms::CheckBox^  checkBox139;
	private: System::Windows::Forms::CheckBox^  checkBox140;
	private: System::Windows::Forms::CheckBox^  checkBox141;
	private: System::Windows::Forms::CheckBox^  checkBox142;
	private: System::Windows::Forms::CheckBox^  checkBox143;
	private: System::Windows::Forms::CheckBox^  checkBox144;
	private: System::Windows::Forms::CheckBox^  checkBox145;
	private: System::Windows::Forms::CheckBox^  checkBox146;
	private: System::Windows::Forms::CheckBox^  checkBox147;
	private: System::Windows::Forms::CheckBox^  checkBox148;
	private: System::Windows::Forms::CheckBox^  checkBox149;
	private: System::Windows::Forms::CheckBox^  checkBox150;
	private: System::Windows::Forms::CheckBox^  checkBox151;
	private: System::Windows::Forms::CheckBox^  checkBox152;
	private: System::Windows::Forms::CheckBox^  checkBox153;
	private: System::Windows::Forms::CheckBox^  checkBox154;
	private: System::Windows::Forms::CheckBox^  checkBox155;
	private: System::Windows::Forms::CheckBox^  checkBox156;
	private: System::Windows::Forms::CheckBox^  checkBox157;
	private: System::Windows::Forms::CheckBox^  checkBox158;
	private: System::Windows::Forms::CheckBox^  checkBox159;
	private: System::Windows::Forms::CheckBox^  checkBox160;
	private: System::Windows::Forms::CheckBox^  checkBox161;
	private: System::Windows::Forms::CheckBox^  checkBox162;
	private: System::Windows::Forms::CheckBox^  checkBox163;
	private: System::Windows::Forms::CheckBox^  checkBox164;
	private: System::Windows::Forms::CheckBox^  checkBox165;
	private: System::Windows::Forms::CheckBox^  checkBox166;
	private: System::Windows::Forms::CheckBox^  checkBox167;
	private: System::Windows::Forms::CheckBox^  checkBox168;
	private: System::Windows::Forms::CheckBox^  checkBox169;
	private: System::Windows::Forms::CheckBox^  checkBox170;
	private: System::Windows::Forms::CheckBox^  checkBox171;
	private: System::Windows::Forms::CheckBox^  checkBox172;
	private: System::Windows::Forms::CheckBox^  checkBox173;
	private: System::Windows::Forms::CheckBox^  checkBox174;
	private: System::Windows::Forms::CheckBox^  checkBox175;
	private: System::Windows::Forms::CheckBox^  checkBox176;
	private: System::Windows::Forms::CheckBox^  checkBox177;
	private: System::Windows::Forms::CheckBox^  checkBox178;
	private: System::Windows::Forms::CheckBox^  checkBox179;
	private: System::Windows::Forms::CheckBox^  checkBox180;
	private: System::Windows::Forms::CheckBox^  checkBox181;
	private: System::Windows::Forms::CheckBox^  checkBox182;
	private: System::Windows::Forms::CheckBox^  checkBox183;
	private: System::Windows::Forms::CheckBox^  checkBox184;
	private: System::Windows::Forms::CheckBox^  checkBox185;
	private: System::Windows::Forms::CheckBox^  checkBox186;
	private: System::Windows::Forms::CheckBox^  checkBox187;
	private: System::Windows::Forms::CheckBox^  checkBox188;
	private: System::Windows::Forms::CheckBox^  checkBox189;
	private: System::Windows::Forms::CheckBox^  checkBox190;
	private: System::Windows::Forms::CheckBox^  checkBox191;
	private: System::Windows::Forms::CheckBox^  checkBox192;
	private: System::Windows::Forms::CheckBox^  checkBox193;
	private: System::Windows::Forms::CheckBox^  checkBox194;
	private: System::Windows::Forms::CheckBox^  checkBox195;
	private: System::Windows::Forms::CheckBox^  checkBox196;
	private: System::Windows::Forms::CheckBox^  checkBox197;
	private: System::Windows::Forms::CheckBox^  checkBox198;
	private: System::Windows::Forms::CheckBox^  checkBox199;
	private: System::Windows::Forms::CheckBox^  checkBox200;
	private: System::Windows::Forms::CheckBox^  checkBox201;
	private: System::Windows::Forms::CheckBox^  checkBox202;
	private: System::Windows::Forms::CheckBox^  checkBox203;
	private: System::Windows::Forms::CheckBox^  checkBox204;
	private: System::Windows::Forms::CheckBox^  checkBox205;
	private: System::Windows::Forms::CheckBox^  checkBox206;
	private: System::Windows::Forms::CheckBox^  checkBox207;
	private: System::Windows::Forms::CheckBox^  checkBox208;
	private: System::Windows::Forms::CheckBox^  checkBox209;
	private: System::Windows::Forms::CheckBox^  checkBox210;
	private: System::Windows::Forms::CheckBox^  checkBox211;
	private: System::Windows::Forms::CheckBox^  checkBox212;
	private: System::Windows::Forms::CheckBox^  checkBox213;
	private: System::Windows::Forms::CheckBox^  checkBox214;
	private: System::Windows::Forms::CheckBox^  checkBox215;
	private: System::Windows::Forms::CheckBox^  checkBox216;
	private: System::Windows::Forms::CheckBox^  checkBox217;
	private: System::Windows::Forms::CheckBox^  checkBox218;
	private: System::Windows::Forms::CheckBox^  checkBox219;
	private: System::Windows::Forms::CheckBox^  checkBox220;
	private: System::Windows::Forms::CheckBox^  checkBox221;
	private: System::Windows::Forms::CheckBox^  checkBox222;
	private: System::Windows::Forms::CheckBox^  checkBox223;
	private: System::Windows::Forms::CheckBox^  checkBox224;
	private: System::Windows::Forms::CheckBox^  checkBox225;
	private: System::Windows::Forms::CheckBox^  checkBox226;
	private: System::Windows::Forms::CheckBox^  checkBox227;
	private: System::Windows::Forms::CheckBox^  checkBox228;
	private: System::Windows::Forms::CheckBox^  checkBox229;
	private: System::Windows::Forms::CheckBox^  checkBox230;
	private: System::Windows::Forms::CheckBox^  checkBox231;
	private: System::Windows::Forms::CheckBox^  checkBox232;
	private: System::Windows::Forms::CheckBox^  checkBox233;
	private: System::Windows::Forms::CheckBox^  checkBox234;
	private: System::Windows::Forms::CheckBox^  checkBox235;
	private: System::Windows::Forms::CheckBox^  checkBox236;
	private: System::Windows::Forms::CheckBox^  checkBox237;
	private: System::Windows::Forms::CheckBox^  checkBox238;
	private: System::Windows::Forms::CheckBox^  checkBox239;
	private: System::Windows::Forms::CheckBox^  checkBox240;
	private: System::Windows::Forms::CheckBox^  checkBox241;
	private: System::Windows::Forms::CheckBox^  checkBox242;
	private: System::Windows::Forms::CheckBox^  checkBox243;
	private: System::Windows::Forms::CheckBox^  checkBox244;
	private: System::Windows::Forms::CheckBox^  checkBox245;
	private: System::Windows::Forms::CheckBox^  checkBox246;
	private: System::Windows::Forms::CheckBox^  checkBox247;
	private: System::Windows::Forms::CheckBox^  checkBox248;
	private: System::Windows::Forms::CheckBox^  checkBox249;
	private: System::Windows::Forms::CheckBox^  checkBox250;
	private: System::Windows::Forms::CheckBox^  checkBox251;
	private: System::Windows::Forms::CheckBox^  checkBox252;
	private: System::Windows::Forms::CheckBox^  checkBox253;
	private: System::Windows::Forms::CheckBox^  checkBox254;
	private: System::Windows::Forms::CheckBox^  checkBox255;
	private: System::Windows::Forms::CheckBox^  checkBox256;
	private: System::Windows::Forms::CheckBox^  checkBox257;
	private: System::Windows::Forms::CheckBox^  checkBox258;
	private: System::Windows::Forms::CheckBox^  checkBox259;
	private: System::Windows::Forms::CheckBox^  checkBox260;
	private: System::Windows::Forms::CheckBox^  checkBox261;
	private: System::Windows::Forms::CheckBox^  checkBox262;
	private: System::Windows::Forms::CheckBox^  checkBox263;
	private: System::Windows::Forms::CheckBox^  checkBox264;
	private: System::Windows::Forms::CheckBox^  checkBox265;
	private: System::Windows::Forms::CheckBox^  checkBox266;
	private: System::Windows::Forms::CheckBox^  checkBox267;
	private: System::Windows::Forms::CheckBox^  checkBox268;
	private: System::Windows::Forms::CheckBox^  checkBox269;
	private: System::Windows::Forms::CheckBox^  checkBox270;
	private: System::Windows::Forms::CheckBox^  checkBox271;
	private: System::Windows::Forms::CheckBox^  checkBox272;
	private: System::Windows::Forms::CheckBox^  checkBox273;
	private: System::Windows::Forms::CheckBox^  checkBox274;
	private: System::Windows::Forms::CheckBox^  checkBox275;
	private: System::Windows::Forms::CheckBox^  checkBox276;
	private: System::Windows::Forms::CheckBox^  checkBox277;
	private: System::Windows::Forms::CheckBox^  checkBox278;
	private: System::Windows::Forms::CheckBox^  checkBox279;
	private: System::Windows::Forms::CheckBox^  checkBox280;
	private: System::Windows::Forms::CheckBox^  checkBox281;
	private: System::Windows::Forms::CheckBox^  checkBox282;
	private: System::Windows::Forms::CheckBox^  checkBox283;
	private: System::Windows::Forms::CheckBox^  checkBox284;
	private: System::Windows::Forms::CheckBox^  checkBox285;
	private: System::Windows::Forms::CheckBox^  checkBox286;
	private: System::Windows::Forms::CheckBox^  checkBox287;
	private: System::Windows::Forms::CheckBox^  checkBox288;
	private: System::Windows::Forms::CheckBox^  checkBox289;
	private: System::Windows::Forms::CheckBox^  checkBox290;
	private: System::Windows::Forms::CheckBox^  checkBox291;
	private: System::Windows::Forms::CheckBox^  checkBox292;
	private: System::Windows::Forms::CheckBox^  checkBox293;
	private: System::Windows::Forms::CheckBox^  checkBox294;
	private: System::Windows::Forms::CheckBox^  checkBox295;
	private: System::Windows::Forms::CheckBox^  checkBox296;
	private: System::Windows::Forms::CheckBox^  checkBox297;
	private: System::Windows::Forms::CheckBox^  checkBox298;
	private: System::Windows::Forms::CheckBox^  checkBox299;
	private: System::Windows::Forms::CheckBox^  checkBox300;
	private: System::Windows::Forms::CheckBox^  checkBox301;
	private: System::Windows::Forms::CheckBox^  checkBox302;
	private: System::Windows::Forms::CheckBox^  checkBox303;
	private: System::Windows::Forms::CheckBox^  checkBox304;
	private: System::Windows::Forms::CheckBox^  checkBox305;
	private: System::Windows::Forms::CheckBox^  checkBox306;
	private: System::Windows::Forms::CheckBox^  checkBox307;
	private: System::Windows::Forms::CheckBox^  checkBox308;
	private: System::Windows::Forms::CheckBox^  checkBox309;
	private: System::Windows::Forms::CheckBox^  checkBox310;
	private: System::Windows::Forms::CheckBox^  checkBox311;
	private: System::Windows::Forms::CheckBox^  checkBox312;
	private: System::Windows::Forms::CheckBox^  checkBox313;
	private: System::Windows::Forms::CheckBox^  checkBox314;
	private: System::Windows::Forms::CheckBox^  checkBox315;
	private: System::Windows::Forms::CheckBox^  checkBox316;
	private: System::Windows::Forms::CheckBox^  checkBox317;
	private: System::Windows::Forms::CheckBox^  checkBox318;
	private: System::Windows::Forms::CheckBox^  checkBox319;
	private: System::Windows::Forms::CheckBox^  checkBox320;
	private: System::Windows::Forms::CheckBox^  checkBox321;
	private: System::Windows::Forms::CheckBox^  checkBox322;
	private: System::Windows::Forms::CheckBox^  checkBox323;
	private: System::Windows::Forms::CheckBox^  checkBox324;
	private: System::Windows::Forms::CheckBox^  checkBox325;
	private: System::Windows::Forms::CheckBox^  checkBox326;
	private: System::Windows::Forms::CheckBox^  checkBox327;
	private: System::Windows::Forms::CheckBox^  checkBox328;
	private: System::Windows::Forms::CheckBox^  checkBox329;
	private: System::Windows::Forms::CheckBox^  checkBox330;
	private: System::Windows::Forms::CheckBox^  checkBox331;
	private: System::Windows::Forms::CheckBox^  checkBox332;
	private: System::Windows::Forms::CheckBox^  checkBox333;
	private: System::Windows::Forms::CheckBox^  checkBox334;
	private: System::Windows::Forms::CheckBox^  checkBox335;
	private: System::Windows::Forms::CheckBox^  checkBox336;
	private: System::Windows::Forms::CheckBox^  checkBox337;
	private: System::Windows::Forms::CheckBox^  checkBox338;
	private: System::Windows::Forms::CheckBox^  checkBox339;
	private: System::Windows::Forms::CheckBox^  checkBox340;
	private: System::Windows::Forms::CheckBox^  checkBox341;
	private: System::Windows::Forms::CheckBox^  checkBox342;
	private: System::Windows::Forms::CheckBox^  checkBox343;
	private: System::Windows::Forms::CheckBox^  checkBox344;
	private: System::Windows::Forms::CheckBox^  checkBox345;
	private: System::Windows::Forms::CheckBox^  checkBox346;
	private: System::Windows::Forms::CheckBox^  checkBox347;
	private: System::Windows::Forms::CheckBox^  checkBox348;
	private: System::Windows::Forms::CheckBox^  checkBox349;
	private: System::Windows::Forms::CheckBox^  checkBox350;
	private: System::Windows::Forms::CheckBox^  checkBox351;
	private: System::Windows::Forms::CheckBox^  checkBox352;
	private: System::Windows::Forms::CheckBox^  checkBox353;
	private: System::Windows::Forms::CheckBox^  checkBox354;
	private: System::Windows::Forms::CheckBox^  checkBox355;
	private: System::Windows::Forms::CheckBox^  checkBox356;
	private: System::Windows::Forms::CheckBox^  checkBox357;
	private: System::Windows::Forms::CheckBox^  checkBox358;
	private: System::Windows::Forms::CheckBox^  checkBox359;
	private: System::Windows::Forms::CheckBox^  checkBox360;
	private: System::Windows::Forms::CheckBox^  checkBox361;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::Collections::Generic::List<System::Windows::Forms::CheckBox ^>^ board = gcnew System::Collections::Generic::List<System::Windows::Forms::CheckBox ^>();
		std::vector<Coordinates> *virtualBoard = new std::vector<Coordinates>(); 
		std::vector<Shape> *shapesList = new std::vector<Shape>(); 

private: System::Windows::Forms::Label^  label1;
		 char turn = 'b';
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GoGame::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox34 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox35 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox36 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox37 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox38 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox39 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox40 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox41 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox42 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox43 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox44 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox45 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox46 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox47 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox48 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox49 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox50 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox51 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox52 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox53 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox54 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox55 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox56 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox57 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox58 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox59 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox60 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox61 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox62 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox63 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox64 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox65 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox66 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox67 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox68 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox69 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox70 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox71 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox72 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox73 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox74 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox75 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox76 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox77 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox78 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox79 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox80 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox81 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox82 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox83 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox84 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox85 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox86 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox87 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox88 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox89 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox90 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox91 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox92 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox93 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox94 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox95 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox96 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox97 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox98 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox99 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox100 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox101 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox102 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox103 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox104 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox105 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox106 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox107 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox108 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox109 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox110 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox111 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox112 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox113 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox114 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox115 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox116 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox117 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox118 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox119 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox120 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox121 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox122 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox123 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox124 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox125 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox126 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox127 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox128 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox129 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox130 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox131 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox132 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox133 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox134 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox135 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox136 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox137 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox138 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox139 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox140 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox141 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox142 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox143 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox144 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox145 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox146 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox147 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox148 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox149 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox150 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox151 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox152 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox153 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox154 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox155 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox156 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox157 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox158 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox159 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox160 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox161 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox162 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox163 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox164 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox165 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox166 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox167 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox168 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox169 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox170 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox171 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox172 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox173 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox174 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox175 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox176 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox177 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox178 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox179 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox180 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox181 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox182 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox183 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox184 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox185 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox186 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox187 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox188 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox189 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox190 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox191 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox192 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox193 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox194 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox195 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox196 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox197 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox198 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox199 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox200 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox201 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox202 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox203 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox204 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox205 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox206 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox207 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox208 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox209 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox210 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox211 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox212 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox213 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox214 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox215 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox216 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox217 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox218 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox219 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox220 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox221 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox222 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox223 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox224 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox225 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox226 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox227 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox228 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox229 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox230 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox231 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox232 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox233 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox234 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox235 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox236 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox237 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox238 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox239 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox240 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox241 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox242 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox243 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox244 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox245 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox246 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox247 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox248 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox249 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox250 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox251 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox252 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox253 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox254 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox255 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox256 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox257 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox258 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox259 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox260 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox261 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox262 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox263 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox264 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox265 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox266 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox267 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox268 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox269 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox270 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox271 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox272 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox273 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox274 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox275 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox276 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox277 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox278 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox279 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox280 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox281 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox282 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox283 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox284 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox285 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox286 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox287 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox288 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox289 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox290 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox291 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox292 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox293 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox294 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox295 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox296 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox297 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox298 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox299 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox300 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox301 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox302 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox303 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox304 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox305 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox306 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox307 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox308 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox309 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox310 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox311 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox312 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox313 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox314 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox315 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox316 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox317 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox318 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox319 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox320 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox321 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox322 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox323 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox324 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox325 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox326 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox327 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox328 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox329 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox330 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox331 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox332 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox333 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox334 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox335 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox336 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox337 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox338 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox339 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox340 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox341 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox342 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox343 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox344 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox345 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox346 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox347 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox348 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox349 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox350 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox351 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox352 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox353 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox354 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox355 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox356 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox357 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox358 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox359 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox360 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox361 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->checkBox1->CausesValidation = false;
			this->checkBox1->Location = System::Drawing::Point(22, 119);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(60, 60);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->TabStop = false;
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->checkBox2->Location = System::Drawing::Point(82, 119);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(60, 60);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->TabStop = false;
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox3->Location = System::Drawing::Point(142, 119);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(60, 60);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->TabStop = false;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox4->Location = System::Drawing::Point(202, 119);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(60, 60);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->TabStop = false;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox5->Location = System::Drawing::Point(262, 119);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(60, 60);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->TabStop = false;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox6->Location = System::Drawing::Point(322, 119);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(60, 60);
			this->checkBox6->TabIndex = 5;
			this->checkBox6->TabStop = false;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox7->Location = System::Drawing::Point(382, 119);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(60, 60);
			this->checkBox7->TabIndex = 6;
			this->checkBox7->TabStop = false;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox8->Location = System::Drawing::Point(442, 119);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(60, 60);
			this->checkBox8->TabIndex = 7;
			this->checkBox8->TabStop = false;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox9->Location = System::Drawing::Point(502, 119);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(60, 60);
			this->checkBox9->TabIndex = 8;
			this->checkBox9->TabStop = false;
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox10->Location = System::Drawing::Point(562, 119);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(60, 60);
			this->checkBox10->TabIndex = 9;
			this->checkBox10->TabStop = false;
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox11->Location = System::Drawing::Point(622, 119);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(60, 60);
			this->checkBox11->TabIndex = 10;
			this->checkBox11->TabStop = false;
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox12->Location = System::Drawing::Point(682, 119);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(60, 60);
			this->checkBox12->TabIndex = 11;
			this->checkBox12->TabStop = false;
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox13->Location = System::Drawing::Point(742, 119);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(60, 60);
			this->checkBox13->TabIndex = 12;
			this->checkBox13->TabStop = false;
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox14->Location = System::Drawing::Point(802, 119);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(60, 60);
			this->checkBox14->TabIndex = 13;
			this->checkBox14->TabStop = false;
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox15->Location = System::Drawing::Point(862, 119);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(60, 60);
			this->checkBox15->TabIndex = 14;
			this->checkBox15->TabStop = false;
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox16
			// 
			this->checkBox16->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox16->Location = System::Drawing::Point(922, 119);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(60, 60);
			this->checkBox16->TabIndex = 15;
			this->checkBox16->TabStop = false;
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox17
			// 
			this->checkBox17->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox17->Location = System::Drawing::Point(982, 119);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(60, 60);
			this->checkBox17->TabIndex = 16;
			this->checkBox17->TabStop = false;
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox18->Location = System::Drawing::Point(1042, 119);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(60, 60);
			this->checkBox18->TabIndex = 17;
			this->checkBox18->TabStop = false;
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox19
			// 
			this->checkBox19->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox19->Location = System::Drawing::Point(1102, 119);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(60, 60);
			this->checkBox19->TabIndex = 18;
			this->checkBox19->TabStop = false;
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox20
			// 
			this->checkBox20->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox20->Location = System::Drawing::Point(22, 179);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(60, 60);
			this->checkBox20->TabIndex = 37;
			this->checkBox20->TabStop = false;
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox21
			// 
			this->checkBox21->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox21->Location = System::Drawing::Point(82, 179);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(60, 60);
			this->checkBox21->TabIndex = 36;
			this->checkBox21->TabStop = false;
			this->checkBox21->UseVisualStyleBackColor = true;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox22
			// 
			this->checkBox22->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox22->Location = System::Drawing::Point(142, 179);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(60, 60);
			this->checkBox22->TabIndex = 35;
			this->checkBox22->TabStop = false;
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox23
			// 
			this->checkBox23->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox23->Location = System::Drawing::Point(202, 179);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(60, 60);
			this->checkBox23->TabIndex = 34;
			this->checkBox23->TabStop = false;
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox24
			// 
			this->checkBox24->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox24->Location = System::Drawing::Point(262, 179);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(60, 60);
			this->checkBox24->TabIndex = 33;
			this->checkBox24->TabStop = false;
			this->checkBox24->UseVisualStyleBackColor = true;
			this->checkBox24->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox25
			// 
			this->checkBox25->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox25->Location = System::Drawing::Point(322, 179);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(60, 60);
			this->checkBox25->TabIndex = 32;
			this->checkBox25->TabStop = false;
			this->checkBox25->UseVisualStyleBackColor = true;
			this->checkBox25->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox26
			// 
			this->checkBox26->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox26->Location = System::Drawing::Point(382, 179);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(60, 60);
			this->checkBox26->TabIndex = 31;
			this->checkBox26->TabStop = false;
			this->checkBox26->UseVisualStyleBackColor = true;
			this->checkBox26->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox27
			// 
			this->checkBox27->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox27->Location = System::Drawing::Point(442, 179);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(60, 60);
			this->checkBox27->TabIndex = 30;
			this->checkBox27->TabStop = false;
			this->checkBox27->UseVisualStyleBackColor = true;
			this->checkBox27->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox28
			// 
			this->checkBox28->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox28->Location = System::Drawing::Point(502, 179);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(60, 60);
			this->checkBox28->TabIndex = 29;
			this->checkBox28->TabStop = false;
			this->checkBox28->UseVisualStyleBackColor = true;
			this->checkBox28->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox29
			// 
			this->checkBox29->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox29->Location = System::Drawing::Point(562, 179);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(60, 60);
			this->checkBox29->TabIndex = 28;
			this->checkBox29->TabStop = false;
			this->checkBox29->UseVisualStyleBackColor = true;
			this->checkBox29->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox30
			// 
			this->checkBox30->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox30->Location = System::Drawing::Point(622, 179);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(60, 60);
			this->checkBox30->TabIndex = 27;
			this->checkBox30->TabStop = false;
			this->checkBox30->UseVisualStyleBackColor = true;
			this->checkBox30->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox31
			// 
			this->checkBox31->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox31->Location = System::Drawing::Point(682, 179);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(60, 60);
			this->checkBox31->TabIndex = 26;
			this->checkBox31->TabStop = false;
			this->checkBox31->UseVisualStyleBackColor = true;
			this->checkBox31->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox32
			// 
			this->checkBox32->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox32->Location = System::Drawing::Point(742, 179);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(60, 60);
			this->checkBox32->TabIndex = 25;
			this->checkBox32->TabStop = false;
			this->checkBox32->UseVisualStyleBackColor = true;
			this->checkBox32->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox33
			// 
			this->checkBox33->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox33->Location = System::Drawing::Point(802, 179);
			this->checkBox33->Name = L"checkBox33";
			this->checkBox33->Size = System::Drawing::Size(60, 60);
			this->checkBox33->TabIndex = 24;
			this->checkBox33->TabStop = false;
			this->checkBox33->UseVisualStyleBackColor = true;
			this->checkBox33->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox34
			// 
			this->checkBox34->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox34->Location = System::Drawing::Point(862, 179);
			this->checkBox34->Name = L"checkBox34";
			this->checkBox34->Size = System::Drawing::Size(60, 60);
			this->checkBox34->TabIndex = 23;
			this->checkBox34->TabStop = false;
			this->checkBox34->UseVisualStyleBackColor = true;
			this->checkBox34->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox35
			// 
			this->checkBox35->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox35->Location = System::Drawing::Point(922, 179);
			this->checkBox35->Name = L"checkBox35";
			this->checkBox35->Size = System::Drawing::Size(60, 60);
			this->checkBox35->TabIndex = 22;
			this->checkBox35->TabStop = false;
			this->checkBox35->UseVisualStyleBackColor = true;
			this->checkBox35->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox36
			// 
			this->checkBox36->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox36->Location = System::Drawing::Point(982, 179);
			this->checkBox36->Name = L"checkBox36";
			this->checkBox36->Size = System::Drawing::Size(60, 60);
			this->checkBox36->TabIndex = 21;
			this->checkBox36->TabStop = false;
			this->checkBox36->UseVisualStyleBackColor = true;
			this->checkBox36->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox37
			// 
			this->checkBox37->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox37->Location = System::Drawing::Point(1042, 179);
			this->checkBox37->Name = L"checkBox37";
			this->checkBox37->Size = System::Drawing::Size(60, 60);
			this->checkBox37->TabIndex = 20;
			this->checkBox37->TabStop = false;
			this->checkBox37->UseVisualStyleBackColor = true;
			this->checkBox37->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox38
			// 
			this->checkBox38->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox38->Location = System::Drawing::Point(1102, 179);
			this->checkBox38->Name = L"checkBox38";
			this->checkBox38->Size = System::Drawing::Size(60, 60);
			this->checkBox38->TabIndex = 19;
			this->checkBox38->TabStop = false;
			this->checkBox38->UseVisualStyleBackColor = true;
			this->checkBox38->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox39
			// 
			this->checkBox39->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox39->Location = System::Drawing::Point(22, 239);
			this->checkBox39->Name = L"checkBox39";
			this->checkBox39->Size = System::Drawing::Size(60, 60);
			this->checkBox39->TabIndex = 56;
			this->checkBox39->TabStop = false;
			this->checkBox39->UseVisualStyleBackColor = true;
			this->checkBox39->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox40
			// 
			this->checkBox40->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox40->Location = System::Drawing::Point(82, 239);
			this->checkBox40->Name = L"checkBox40";
			this->checkBox40->Size = System::Drawing::Size(60, 60);
			this->checkBox40->TabIndex = 55;
			this->checkBox40->TabStop = false;
			this->checkBox40->UseVisualStyleBackColor = true;
			this->checkBox40->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox41
			// 
			this->checkBox41->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox41->Location = System::Drawing::Point(142, 239);
			this->checkBox41->Name = L"checkBox41";
			this->checkBox41->Size = System::Drawing::Size(60, 60);
			this->checkBox41->TabIndex = 54;
			this->checkBox41->TabStop = false;
			this->checkBox41->UseVisualStyleBackColor = true;
			this->checkBox41->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox42
			// 
			this->checkBox42->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox42->Location = System::Drawing::Point(202, 239);
			this->checkBox42->Name = L"checkBox42";
			this->checkBox42->Size = System::Drawing::Size(60, 60);
			this->checkBox42->TabIndex = 53;
			this->checkBox42->TabStop = false;
			this->checkBox42->UseVisualStyleBackColor = true;
			this->checkBox42->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox43
			// 
			this->checkBox43->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox43->Location = System::Drawing::Point(262, 239);
			this->checkBox43->Name = L"checkBox43";
			this->checkBox43->Size = System::Drawing::Size(60, 60);
			this->checkBox43->TabIndex = 52;
			this->checkBox43->TabStop = false;
			this->checkBox43->UseVisualStyleBackColor = true;
			this->checkBox43->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox44
			// 
			this->checkBox44->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox44->Location = System::Drawing::Point(322, 239);
			this->checkBox44->Name = L"checkBox44";
			this->checkBox44->Size = System::Drawing::Size(60, 60);
			this->checkBox44->TabIndex = 51;
			this->checkBox44->TabStop = false;
			this->checkBox44->UseVisualStyleBackColor = true;
			this->checkBox44->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox45
			// 
			this->checkBox45->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox45->Location = System::Drawing::Point(382, 239);
			this->checkBox45->Name = L"checkBox45";
			this->checkBox45->Size = System::Drawing::Size(60, 60);
			this->checkBox45->TabIndex = 50;
			this->checkBox45->TabStop = false;
			this->checkBox45->UseVisualStyleBackColor = true;
			this->checkBox45->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox46
			// 
			this->checkBox46->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox46->Location = System::Drawing::Point(442, 239);
			this->checkBox46->Name = L"checkBox46";
			this->checkBox46->Size = System::Drawing::Size(60, 60);
			this->checkBox46->TabIndex = 49;
			this->checkBox46->TabStop = false;
			this->checkBox46->UseVisualStyleBackColor = true;
			this->checkBox46->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox47
			// 
			this->checkBox47->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox47->Location = System::Drawing::Point(502, 239);
			this->checkBox47->Name = L"checkBox47";
			this->checkBox47->Size = System::Drawing::Size(60, 60);
			this->checkBox47->TabIndex = 48;
			this->checkBox47->TabStop = false;
			this->checkBox47->UseVisualStyleBackColor = true;
			this->checkBox47->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox48
			// 
			this->checkBox48->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox48->Location = System::Drawing::Point(562, 239);
			this->checkBox48->Name = L"checkBox48";
			this->checkBox48->Size = System::Drawing::Size(60, 60);
			this->checkBox48->TabIndex = 47;
			this->checkBox48->TabStop = false;
			this->checkBox48->UseVisualStyleBackColor = true;
			this->checkBox48->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox49
			// 
			this->checkBox49->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox49->Location = System::Drawing::Point(622, 239);
			this->checkBox49->Name = L"checkBox49";
			this->checkBox49->Size = System::Drawing::Size(60, 60);
			this->checkBox49->TabIndex = 46;
			this->checkBox49->TabStop = false;
			this->checkBox49->UseVisualStyleBackColor = true;
			this->checkBox49->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox50
			// 
			this->checkBox50->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox50->Location = System::Drawing::Point(682, 239);
			this->checkBox50->Name = L"checkBox50";
			this->checkBox50->Size = System::Drawing::Size(60, 60);
			this->checkBox50->TabIndex = 45;
			this->checkBox50->TabStop = false;
			this->checkBox50->UseVisualStyleBackColor = true;
			this->checkBox50->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox51
			// 
			this->checkBox51->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox51->Location = System::Drawing::Point(742, 239);
			this->checkBox51->Name = L"checkBox51";
			this->checkBox51->Size = System::Drawing::Size(60, 60);
			this->checkBox51->TabIndex = 44;
			this->checkBox51->TabStop = false;
			this->checkBox51->UseVisualStyleBackColor = true;
			this->checkBox51->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox52
			// 
			this->checkBox52->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox52->Location = System::Drawing::Point(802, 239);
			this->checkBox52->Name = L"checkBox52";
			this->checkBox52->Size = System::Drawing::Size(60, 60);
			this->checkBox52->TabIndex = 43;
			this->checkBox52->TabStop = false;
			this->checkBox52->UseVisualStyleBackColor = true;
			this->checkBox52->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox53
			// 
			this->checkBox53->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox53->Location = System::Drawing::Point(862, 239);
			this->checkBox53->Name = L"checkBox53";
			this->checkBox53->Size = System::Drawing::Size(60, 60);
			this->checkBox53->TabIndex = 42;
			this->checkBox53->TabStop = false;
			this->checkBox53->UseVisualStyleBackColor = true;
			this->checkBox53->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox54
			// 
			this->checkBox54->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox54->Location = System::Drawing::Point(922, 239);
			this->checkBox54->Name = L"checkBox54";
			this->checkBox54->Size = System::Drawing::Size(60, 60);
			this->checkBox54->TabIndex = 41;
			this->checkBox54->TabStop = false;
			this->checkBox54->UseVisualStyleBackColor = true;
			this->checkBox54->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox55
			// 
			this->checkBox55->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox55->Location = System::Drawing::Point(982, 239);
			this->checkBox55->Name = L"checkBox55";
			this->checkBox55->Size = System::Drawing::Size(60, 60);
			this->checkBox55->TabIndex = 40;
			this->checkBox55->TabStop = false;
			this->checkBox55->UseVisualStyleBackColor = true;
			this->checkBox55->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox56
			// 
			this->checkBox56->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox56->Location = System::Drawing::Point(1042, 239);
			this->checkBox56->Name = L"checkBox56";
			this->checkBox56->Size = System::Drawing::Size(60, 60);
			this->checkBox56->TabIndex = 39;
			this->checkBox56->TabStop = false;
			this->checkBox56->UseVisualStyleBackColor = true;
			this->checkBox56->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox57
			// 
			this->checkBox57->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox57->Location = System::Drawing::Point(1102, 239);
			this->checkBox57->Name = L"checkBox57";
			this->checkBox57->Size = System::Drawing::Size(60, 60);
			this->checkBox57->TabIndex = 38;
			this->checkBox57->TabStop = false;
			this->checkBox57->UseVisualStyleBackColor = true;
			this->checkBox57->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox58
			// 
			this->checkBox58->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox58->Location = System::Drawing::Point(22, 299);
			this->checkBox58->Name = L"checkBox58";
			this->checkBox58->Size = System::Drawing::Size(60, 60);
			this->checkBox58->TabIndex = 75;
			this->checkBox58->TabStop = false;
			this->checkBox58->UseVisualStyleBackColor = true;
			this->checkBox58->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox59
			// 
			this->checkBox59->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox59->Location = System::Drawing::Point(82, 299);
			this->checkBox59->Name = L"checkBox59";
			this->checkBox59->Size = System::Drawing::Size(60, 60);
			this->checkBox59->TabIndex = 74;
			this->checkBox59->TabStop = false;
			this->checkBox59->UseVisualStyleBackColor = true;
			this->checkBox59->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox60
			// 
			this->checkBox60->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox60->Location = System::Drawing::Point(142, 299);
			this->checkBox60->Name = L"checkBox60";
			this->checkBox60->Size = System::Drawing::Size(60, 60);
			this->checkBox60->TabIndex = 73;
			this->checkBox60->TabStop = false;
			this->checkBox60->UseVisualStyleBackColor = true;
			this->checkBox60->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox61
			// 
			this->checkBox61->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox61->Location = System::Drawing::Point(202, 299);
			this->checkBox61->Name = L"checkBox61";
			this->checkBox61->Size = System::Drawing::Size(60, 60);
			this->checkBox61->TabIndex = 72;
			this->checkBox61->TabStop = false;
			this->checkBox61->UseVisualStyleBackColor = true;
			this->checkBox61->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox62
			// 
			this->checkBox62->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox62->Location = System::Drawing::Point(262, 299);
			this->checkBox62->Name = L"checkBox62";
			this->checkBox62->Size = System::Drawing::Size(60, 60);
			this->checkBox62->TabIndex = 71;
			this->checkBox62->TabStop = false;
			this->checkBox62->UseVisualStyleBackColor = true;
			this->checkBox62->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox63
			// 
			this->checkBox63->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox63->Location = System::Drawing::Point(322, 299);
			this->checkBox63->Name = L"checkBox63";
			this->checkBox63->Size = System::Drawing::Size(60, 60);
			this->checkBox63->TabIndex = 70;
			this->checkBox63->TabStop = false;
			this->checkBox63->UseVisualStyleBackColor = true;
			this->checkBox63->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox64
			// 
			this->checkBox64->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox64->Location = System::Drawing::Point(382, 299);
			this->checkBox64->Name = L"checkBox64";
			this->checkBox64->Size = System::Drawing::Size(60, 60);
			this->checkBox64->TabIndex = 69;
			this->checkBox64->TabStop = false;
			this->checkBox64->UseVisualStyleBackColor = true;
			this->checkBox64->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox65
			// 
			this->checkBox65->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox65->Location = System::Drawing::Point(442, 299);
			this->checkBox65->Name = L"checkBox65";
			this->checkBox65->Size = System::Drawing::Size(60, 60);
			this->checkBox65->TabIndex = 68;
			this->checkBox65->TabStop = false;
			this->checkBox65->UseVisualStyleBackColor = true;
			this->checkBox65->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox66
			// 
			this->checkBox66->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox66->Location = System::Drawing::Point(502, 299);
			this->checkBox66->Name = L"checkBox66";
			this->checkBox66->Size = System::Drawing::Size(60, 60);
			this->checkBox66->TabIndex = 67;
			this->checkBox66->TabStop = false;
			this->checkBox66->UseVisualStyleBackColor = true;
			this->checkBox66->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox67
			// 
			this->checkBox67->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox67->Location = System::Drawing::Point(562, 299);
			this->checkBox67->Name = L"checkBox67";
			this->checkBox67->Size = System::Drawing::Size(60, 60);
			this->checkBox67->TabIndex = 66;
			this->checkBox67->TabStop = false;
			this->checkBox67->UseVisualStyleBackColor = true;
			this->checkBox67->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox68
			// 
			this->checkBox68->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox68->Location = System::Drawing::Point(622, 299);
			this->checkBox68->Name = L"checkBox68";
			this->checkBox68->Size = System::Drawing::Size(60, 60);
			this->checkBox68->TabIndex = 65;
			this->checkBox68->TabStop = false;
			this->checkBox68->UseVisualStyleBackColor = true;
			this->checkBox68->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox69
			// 
			this->checkBox69->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox69->Location = System::Drawing::Point(682, 299);
			this->checkBox69->Name = L"checkBox69";
			this->checkBox69->Size = System::Drawing::Size(60, 60);
			this->checkBox69->TabIndex = 64;
			this->checkBox69->TabStop = false;
			this->checkBox69->UseVisualStyleBackColor = true;
			this->checkBox69->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox70
			// 
			this->checkBox70->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox70->Location = System::Drawing::Point(742, 299);
			this->checkBox70->Name = L"checkBox70";
			this->checkBox70->Size = System::Drawing::Size(60, 60);
			this->checkBox70->TabIndex = 63;
			this->checkBox70->TabStop = false;
			this->checkBox70->UseVisualStyleBackColor = true;
			this->checkBox70->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox71
			// 
			this->checkBox71->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox71->Location = System::Drawing::Point(802, 299);
			this->checkBox71->Name = L"checkBox71";
			this->checkBox71->Size = System::Drawing::Size(60, 60);
			this->checkBox71->TabIndex = 62;
			this->checkBox71->TabStop = false;
			this->checkBox71->UseVisualStyleBackColor = true;
			this->checkBox71->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox72
			// 
			this->checkBox72->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox72->Location = System::Drawing::Point(862, 299);
			this->checkBox72->Name = L"checkBox72";
			this->checkBox72->Size = System::Drawing::Size(60, 60);
			this->checkBox72->TabIndex = 61;
			this->checkBox72->TabStop = false;
			this->checkBox72->UseVisualStyleBackColor = true;
			this->checkBox72->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox73
			// 
			this->checkBox73->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox73->Location = System::Drawing::Point(922, 299);
			this->checkBox73->Name = L"checkBox73";
			this->checkBox73->Size = System::Drawing::Size(60, 60);
			this->checkBox73->TabIndex = 60;
			this->checkBox73->TabStop = false;
			this->checkBox73->UseVisualStyleBackColor = true;
			this->checkBox73->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox74
			// 
			this->checkBox74->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox74->Location = System::Drawing::Point(982, 299);
			this->checkBox74->Name = L"checkBox74";
			this->checkBox74->Size = System::Drawing::Size(60, 60);
			this->checkBox74->TabIndex = 59;
			this->checkBox74->TabStop = false;
			this->checkBox74->UseVisualStyleBackColor = true;
			this->checkBox74->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox75
			// 
			this->checkBox75->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox75->Location = System::Drawing::Point(1042, 299);
			this->checkBox75->Name = L"checkBox75";
			this->checkBox75->Size = System::Drawing::Size(60, 60);
			this->checkBox75->TabIndex = 58;
			this->checkBox75->TabStop = false;
			this->checkBox75->UseVisualStyleBackColor = true;
			this->checkBox75->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox76
			// 
			this->checkBox76->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox76->Location = System::Drawing::Point(1102, 299);
			this->checkBox76->Name = L"checkBox76";
			this->checkBox76->Size = System::Drawing::Size(60, 60);
			this->checkBox76->TabIndex = 57;
			this->checkBox76->TabStop = false;
			this->checkBox76->UseVisualStyleBackColor = true;
			this->checkBox76->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox77
			// 
			this->checkBox77->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox77->Location = System::Drawing::Point(22, 359);
			this->checkBox77->Name = L"checkBox77";
			this->checkBox77->Size = System::Drawing::Size(60, 60);
			this->checkBox77->TabIndex = 94;
			this->checkBox77->TabStop = false;
			this->checkBox77->UseVisualStyleBackColor = true;
			this->checkBox77->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox78
			// 
			this->checkBox78->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox78->Location = System::Drawing::Point(82, 359);
			this->checkBox78->Name = L"checkBox78";
			this->checkBox78->Size = System::Drawing::Size(60, 60);
			this->checkBox78->TabIndex = 93;
			this->checkBox78->TabStop = false;
			this->checkBox78->UseVisualStyleBackColor = true;
			this->checkBox78->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox79
			// 
			this->checkBox79->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox79->Location = System::Drawing::Point(142, 359);
			this->checkBox79->Name = L"checkBox79";
			this->checkBox79->Size = System::Drawing::Size(60, 60);
			this->checkBox79->TabIndex = 92;
			this->checkBox79->TabStop = false;
			this->checkBox79->UseVisualStyleBackColor = true;
			this->checkBox79->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox80
			// 
			this->checkBox80->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox80->Location = System::Drawing::Point(202, 359);
			this->checkBox80->Name = L"checkBox80";
			this->checkBox80->Size = System::Drawing::Size(60, 60);
			this->checkBox80->TabIndex = 91;
			this->checkBox80->TabStop = false;
			this->checkBox80->UseVisualStyleBackColor = true;
			this->checkBox80->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox81
			// 
			this->checkBox81->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox81->Location = System::Drawing::Point(262, 359);
			this->checkBox81->Name = L"checkBox81";
			this->checkBox81->Size = System::Drawing::Size(60, 60);
			this->checkBox81->TabIndex = 90;
			this->checkBox81->TabStop = false;
			this->checkBox81->UseVisualStyleBackColor = true;
			this->checkBox81->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox82
			// 
			this->checkBox82->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox82->Location = System::Drawing::Point(322, 359);
			this->checkBox82->Name = L"checkBox82";
			this->checkBox82->Size = System::Drawing::Size(60, 60);
			this->checkBox82->TabIndex = 89;
			this->checkBox82->TabStop = false;
			this->checkBox82->UseVisualStyleBackColor = true;
			this->checkBox82->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox83
			// 
			this->checkBox83->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox83->Location = System::Drawing::Point(382, 359);
			this->checkBox83->Name = L"checkBox83";
			this->checkBox83->Size = System::Drawing::Size(60, 60);
			this->checkBox83->TabIndex = 88;
			this->checkBox83->TabStop = false;
			this->checkBox83->UseVisualStyleBackColor = true;
			this->checkBox83->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox84
			// 
			this->checkBox84->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox84->Location = System::Drawing::Point(442, 359);
			this->checkBox84->Name = L"checkBox84";
			this->checkBox84->Size = System::Drawing::Size(60, 60);
			this->checkBox84->TabIndex = 87;
			this->checkBox84->TabStop = false;
			this->checkBox84->UseVisualStyleBackColor = true;
			this->checkBox84->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox85
			// 
			this->checkBox85->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox85->Location = System::Drawing::Point(502, 359);
			this->checkBox85->Name = L"checkBox85";
			this->checkBox85->Size = System::Drawing::Size(60, 60);
			this->checkBox85->TabIndex = 86;
			this->checkBox85->TabStop = false;
			this->checkBox85->UseVisualStyleBackColor = true;
			this->checkBox85->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox86
			// 
			this->checkBox86->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox86->Location = System::Drawing::Point(562, 359);
			this->checkBox86->Name = L"checkBox86";
			this->checkBox86->Size = System::Drawing::Size(60, 60);
			this->checkBox86->TabIndex = 85;
			this->checkBox86->TabStop = false;
			this->checkBox86->UseVisualStyleBackColor = true;
			this->checkBox86->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox87
			// 
			this->checkBox87->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox87->Location = System::Drawing::Point(622, 359);
			this->checkBox87->Name = L"checkBox87";
			this->checkBox87->Size = System::Drawing::Size(60, 60);
			this->checkBox87->TabIndex = 84;
			this->checkBox87->TabStop = false;
			this->checkBox87->UseVisualStyleBackColor = true;
			this->checkBox87->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox88
			// 
			this->checkBox88->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox88->Location = System::Drawing::Point(682, 359);
			this->checkBox88->Name = L"checkBox88";
			this->checkBox88->Size = System::Drawing::Size(60, 60);
			this->checkBox88->TabIndex = 83;
			this->checkBox88->TabStop = false;
			this->checkBox88->UseVisualStyleBackColor = true;
			this->checkBox88->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox89
			// 
			this->checkBox89->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox89->Location = System::Drawing::Point(742, 359);
			this->checkBox89->Name = L"checkBox89";
			this->checkBox89->Size = System::Drawing::Size(60, 60);
			this->checkBox89->TabIndex = 82;
			this->checkBox89->TabStop = false;
			this->checkBox89->UseVisualStyleBackColor = true;
			this->checkBox89->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox90
			// 
			this->checkBox90->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox90->Location = System::Drawing::Point(802, 359);
			this->checkBox90->Name = L"checkBox90";
			this->checkBox90->Size = System::Drawing::Size(60, 60);
			this->checkBox90->TabIndex = 81;
			this->checkBox90->TabStop = false;
			this->checkBox90->UseVisualStyleBackColor = true;
			this->checkBox90->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox91
			// 
			this->checkBox91->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox91->Location = System::Drawing::Point(862, 359);
			this->checkBox91->Name = L"checkBox91";
			this->checkBox91->Size = System::Drawing::Size(60, 60);
			this->checkBox91->TabIndex = 80;
			this->checkBox91->TabStop = false;
			this->checkBox91->UseVisualStyleBackColor = true;
			this->checkBox91->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox92
			// 
			this->checkBox92->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox92->Location = System::Drawing::Point(922, 359);
			this->checkBox92->Name = L"checkBox92";
			this->checkBox92->Size = System::Drawing::Size(60, 60);
			this->checkBox92->TabIndex = 79;
			this->checkBox92->TabStop = false;
			this->checkBox92->UseVisualStyleBackColor = true;
			this->checkBox92->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox93
			// 
			this->checkBox93->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox93->Location = System::Drawing::Point(982, 359);
			this->checkBox93->Name = L"checkBox93";
			this->checkBox93->Size = System::Drawing::Size(60, 60);
			this->checkBox93->TabIndex = 78;
			this->checkBox93->TabStop = false;
			this->checkBox93->UseVisualStyleBackColor = true;
			this->checkBox93->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox94
			// 
			this->checkBox94->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox94->Location = System::Drawing::Point(1042, 359);
			this->checkBox94->Name = L"checkBox94";
			this->checkBox94->Size = System::Drawing::Size(60, 60);
			this->checkBox94->TabIndex = 77;
			this->checkBox94->TabStop = false;
			this->checkBox94->UseVisualStyleBackColor = true;
			this->checkBox94->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox95
			// 
			this->checkBox95->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox95->Location = System::Drawing::Point(1102, 359);
			this->checkBox95->Name = L"checkBox95";
			this->checkBox95->Size = System::Drawing::Size(60, 60);
			this->checkBox95->TabIndex = 76;
			this->checkBox95->TabStop = false;
			this->checkBox95->UseVisualStyleBackColor = true;
			this->checkBox95->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox96
			// 
			this->checkBox96->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox96->Location = System::Drawing::Point(22, 419);
			this->checkBox96->Name = L"checkBox96";
			this->checkBox96->Size = System::Drawing::Size(60, 60);
			this->checkBox96->TabIndex = 113;
			this->checkBox96->TabStop = false;
			this->checkBox96->UseVisualStyleBackColor = true;
			this->checkBox96->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox97
			// 
			this->checkBox97->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox97->Location = System::Drawing::Point(82, 419);
			this->checkBox97->Name = L"checkBox97";
			this->checkBox97->Size = System::Drawing::Size(60, 60);
			this->checkBox97->TabIndex = 112;
			this->checkBox97->TabStop = false;
			this->checkBox97->UseVisualStyleBackColor = true;
			this->checkBox97->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox98
			// 
			this->checkBox98->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox98->Location = System::Drawing::Point(142, 419);
			this->checkBox98->Name = L"checkBox98";
			this->checkBox98->Size = System::Drawing::Size(60, 60);
			this->checkBox98->TabIndex = 111;
			this->checkBox98->TabStop = false;
			this->checkBox98->UseVisualStyleBackColor = true;
			this->checkBox98->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox99
			// 
			this->checkBox99->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox99->Location = System::Drawing::Point(202, 419);
			this->checkBox99->Name = L"checkBox99";
			this->checkBox99->Size = System::Drawing::Size(60, 60);
			this->checkBox99->TabIndex = 110;
			this->checkBox99->TabStop = false;
			this->checkBox99->UseVisualStyleBackColor = true;
			this->checkBox99->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox100
			// 
			this->checkBox100->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox100->Location = System::Drawing::Point(262, 419);
			this->checkBox100->Name = L"checkBox100";
			this->checkBox100->Size = System::Drawing::Size(60, 60);
			this->checkBox100->TabIndex = 109;
			this->checkBox100->TabStop = false;
			this->checkBox100->UseVisualStyleBackColor = true;
			this->checkBox100->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox101
			// 
			this->checkBox101->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox101->Location = System::Drawing::Point(322, 419);
			this->checkBox101->Name = L"checkBox101";
			this->checkBox101->Size = System::Drawing::Size(60, 60);
			this->checkBox101->TabIndex = 108;
			this->checkBox101->TabStop = false;
			this->checkBox101->UseVisualStyleBackColor = true;
			this->checkBox101->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox102
			// 
			this->checkBox102->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox102->Location = System::Drawing::Point(382, 419);
			this->checkBox102->Name = L"checkBox102";
			this->checkBox102->Size = System::Drawing::Size(60, 60);
			this->checkBox102->TabIndex = 107;
			this->checkBox102->TabStop = false;
			this->checkBox102->UseVisualStyleBackColor = true;
			this->checkBox102->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox103
			// 
			this->checkBox103->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox103->Location = System::Drawing::Point(442, 419);
			this->checkBox103->Name = L"checkBox103";
			this->checkBox103->Size = System::Drawing::Size(60, 60);
			this->checkBox103->TabIndex = 106;
			this->checkBox103->TabStop = false;
			this->checkBox103->UseVisualStyleBackColor = true;
			this->checkBox103->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox104
			// 
			this->checkBox104->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox104->Location = System::Drawing::Point(502, 419);
			this->checkBox104->Name = L"checkBox104";
			this->checkBox104->Size = System::Drawing::Size(60, 60);
			this->checkBox104->TabIndex = 105;
			this->checkBox104->TabStop = false;
			this->checkBox104->UseVisualStyleBackColor = true;
			this->checkBox104->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox105
			// 
			this->checkBox105->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox105->Location = System::Drawing::Point(562, 419);
			this->checkBox105->Name = L"checkBox105";
			this->checkBox105->Size = System::Drawing::Size(60, 60);
			this->checkBox105->TabIndex = 104;
			this->checkBox105->TabStop = false;
			this->checkBox105->UseVisualStyleBackColor = true;
			this->checkBox105->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox106
			// 
			this->checkBox106->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox106->Location = System::Drawing::Point(622, 419);
			this->checkBox106->Name = L"checkBox106";
			this->checkBox106->Size = System::Drawing::Size(60, 60);
			this->checkBox106->TabIndex = 103;
			this->checkBox106->TabStop = false;
			this->checkBox106->UseVisualStyleBackColor = true;
			this->checkBox106->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox107
			// 
			this->checkBox107->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox107->Location = System::Drawing::Point(682, 419);
			this->checkBox107->Name = L"checkBox107";
			this->checkBox107->Size = System::Drawing::Size(60, 60);
			this->checkBox107->TabIndex = 102;
			this->checkBox107->TabStop = false;
			this->checkBox107->UseVisualStyleBackColor = true;
			this->checkBox107->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox108
			// 
			this->checkBox108->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox108->Location = System::Drawing::Point(742, 419);
			this->checkBox108->Name = L"checkBox108";
			this->checkBox108->Size = System::Drawing::Size(60, 60);
			this->checkBox108->TabIndex = 101;
			this->checkBox108->TabStop = false;
			this->checkBox108->UseVisualStyleBackColor = true;
			this->checkBox108->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox109
			// 
			this->checkBox109->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox109->Location = System::Drawing::Point(802, 419);
			this->checkBox109->Name = L"checkBox109";
			this->checkBox109->Size = System::Drawing::Size(60, 60);
			this->checkBox109->TabIndex = 100;
			this->checkBox109->TabStop = false;
			this->checkBox109->UseVisualStyleBackColor = true;
			this->checkBox109->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox110
			// 
			this->checkBox110->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox110->Location = System::Drawing::Point(862, 419);
			this->checkBox110->Name = L"checkBox110";
			this->checkBox110->Size = System::Drawing::Size(60, 60);
			this->checkBox110->TabIndex = 99;
			this->checkBox110->TabStop = false;
			this->checkBox110->UseVisualStyleBackColor = true;
			this->checkBox110->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox111
			// 
			this->checkBox111->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox111->Location = System::Drawing::Point(922, 419);
			this->checkBox111->Name = L"checkBox111";
			this->checkBox111->Size = System::Drawing::Size(60, 60);
			this->checkBox111->TabIndex = 98;
			this->checkBox111->TabStop = false;
			this->checkBox111->UseVisualStyleBackColor = true;
			this->checkBox111->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox112
			// 
			this->checkBox112->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox112->Location = System::Drawing::Point(982, 419);
			this->checkBox112->Name = L"checkBox112";
			this->checkBox112->Size = System::Drawing::Size(60, 60);
			this->checkBox112->TabIndex = 97;
			this->checkBox112->TabStop = false;
			this->checkBox112->UseVisualStyleBackColor = true;
			this->checkBox112->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox113
			// 
			this->checkBox113->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox113->Location = System::Drawing::Point(1042, 419);
			this->checkBox113->Name = L"checkBox113";
			this->checkBox113->Size = System::Drawing::Size(60, 60);
			this->checkBox113->TabIndex = 96;
			this->checkBox113->TabStop = false;
			this->checkBox113->UseVisualStyleBackColor = true;
			this->checkBox113->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox114
			// 
			this->checkBox114->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox114->Location = System::Drawing::Point(1102, 419);
			this->checkBox114->Name = L"checkBox114";
			this->checkBox114->Size = System::Drawing::Size(60, 60);
			this->checkBox114->TabIndex = 95;
			this->checkBox114->TabStop = false;
			this->checkBox114->UseVisualStyleBackColor = true;
			this->checkBox114->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox115
			// 
			this->checkBox115->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox115->Location = System::Drawing::Point(22, 479);
			this->checkBox115->Name = L"checkBox115";
			this->checkBox115->Size = System::Drawing::Size(60, 60);
			this->checkBox115->TabIndex = 132;
			this->checkBox115->TabStop = false;
			this->checkBox115->UseVisualStyleBackColor = true;
			this->checkBox115->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox116
			// 
			this->checkBox116->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox116->Location = System::Drawing::Point(82, 479);
			this->checkBox116->Name = L"checkBox116";
			this->checkBox116->Size = System::Drawing::Size(60, 60);
			this->checkBox116->TabIndex = 131;
			this->checkBox116->TabStop = false;
			this->checkBox116->UseVisualStyleBackColor = true;
			this->checkBox116->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox117
			// 
			this->checkBox117->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox117->Location = System::Drawing::Point(142, 479);
			this->checkBox117->Name = L"checkBox117";
			this->checkBox117->Size = System::Drawing::Size(60, 60);
			this->checkBox117->TabIndex = 130;
			this->checkBox117->TabStop = false;
			this->checkBox117->UseVisualStyleBackColor = true;
			this->checkBox117->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox118
			// 
			this->checkBox118->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox118->Location = System::Drawing::Point(202, 479);
			this->checkBox118->Name = L"checkBox118";
			this->checkBox118->Size = System::Drawing::Size(60, 60);
			this->checkBox118->TabIndex = 129;
			this->checkBox118->TabStop = false;
			this->checkBox118->UseVisualStyleBackColor = true;
			this->checkBox118->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox119
			// 
			this->checkBox119->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox119->Location = System::Drawing::Point(262, 479);
			this->checkBox119->Name = L"checkBox119";
			this->checkBox119->Size = System::Drawing::Size(60, 60);
			this->checkBox119->TabIndex = 128;
			this->checkBox119->TabStop = false;
			this->checkBox119->UseVisualStyleBackColor = true;
			this->checkBox119->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox120
			// 
			this->checkBox120->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox120->Location = System::Drawing::Point(322, 479);
			this->checkBox120->Name = L"checkBox120";
			this->checkBox120->Size = System::Drawing::Size(60, 60);
			this->checkBox120->TabIndex = 127;
			this->checkBox120->TabStop = false;
			this->checkBox120->UseVisualStyleBackColor = true;
			this->checkBox120->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox121
			// 
			this->checkBox121->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox121->Location = System::Drawing::Point(382, 479);
			this->checkBox121->Name = L"checkBox121";
			this->checkBox121->Size = System::Drawing::Size(60, 60);
			this->checkBox121->TabIndex = 126;
			this->checkBox121->TabStop = false;
			this->checkBox121->UseVisualStyleBackColor = true;
			this->checkBox121->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox122
			// 
			this->checkBox122->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox122->Location = System::Drawing::Point(442, 479);
			this->checkBox122->Name = L"checkBox122";
			this->checkBox122->Size = System::Drawing::Size(60, 60);
			this->checkBox122->TabIndex = 125;
			this->checkBox122->TabStop = false;
			this->checkBox122->UseVisualStyleBackColor = true;
			this->checkBox122->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox123
			// 
			this->checkBox123->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox123->Location = System::Drawing::Point(502, 479);
			this->checkBox123->Name = L"checkBox123";
			this->checkBox123->Size = System::Drawing::Size(60, 60);
			this->checkBox123->TabIndex = 124;
			this->checkBox123->TabStop = false;
			this->checkBox123->UseVisualStyleBackColor = true;
			this->checkBox123->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox124
			// 
			this->checkBox124->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox124->Location = System::Drawing::Point(562, 479);
			this->checkBox124->Name = L"checkBox124";
			this->checkBox124->Size = System::Drawing::Size(60, 60);
			this->checkBox124->TabIndex = 123;
			this->checkBox124->TabStop = false;
			this->checkBox124->UseVisualStyleBackColor = true;
			this->checkBox124->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox125
			// 
			this->checkBox125->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox125->Location = System::Drawing::Point(622, 479);
			this->checkBox125->Name = L"checkBox125";
			this->checkBox125->Size = System::Drawing::Size(60, 60);
			this->checkBox125->TabIndex = 122;
			this->checkBox125->TabStop = false;
			this->checkBox125->UseVisualStyleBackColor = true;
			this->checkBox125->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox126
			// 
			this->checkBox126->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox126->Location = System::Drawing::Point(682, 479);
			this->checkBox126->Name = L"checkBox126";
			this->checkBox126->Size = System::Drawing::Size(60, 60);
			this->checkBox126->TabIndex = 121;
			this->checkBox126->TabStop = false;
			this->checkBox126->UseVisualStyleBackColor = true;
			this->checkBox126->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox127
			// 
			this->checkBox127->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox127->Location = System::Drawing::Point(742, 479);
			this->checkBox127->Name = L"checkBox127";
			this->checkBox127->Size = System::Drawing::Size(60, 60);
			this->checkBox127->TabIndex = 120;
			this->checkBox127->TabStop = false;
			this->checkBox127->UseVisualStyleBackColor = true;
			this->checkBox127->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox128
			// 
			this->checkBox128->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox128->Location = System::Drawing::Point(802, 479);
			this->checkBox128->Name = L"checkBox128";
			this->checkBox128->Size = System::Drawing::Size(60, 60);
			this->checkBox128->TabIndex = 119;
			this->checkBox128->TabStop = false;
			this->checkBox128->UseVisualStyleBackColor = true;
			this->checkBox128->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox129
			// 
			this->checkBox129->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox129->Location = System::Drawing::Point(862, 479);
			this->checkBox129->Name = L"checkBox129";
			this->checkBox129->Size = System::Drawing::Size(60, 60);
			this->checkBox129->TabIndex = 118;
			this->checkBox129->TabStop = false;
			this->checkBox129->UseVisualStyleBackColor = true;
			this->checkBox129->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox130
			// 
			this->checkBox130->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox130->Location = System::Drawing::Point(922, 479);
			this->checkBox130->Name = L"checkBox130";
			this->checkBox130->Size = System::Drawing::Size(60, 60);
			this->checkBox130->TabIndex = 117;
			this->checkBox130->TabStop = false;
			this->checkBox130->UseVisualStyleBackColor = true;
			this->checkBox130->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox131
			// 
			this->checkBox131->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox131->Location = System::Drawing::Point(982, 479);
			this->checkBox131->Name = L"checkBox131";
			this->checkBox131->Size = System::Drawing::Size(60, 60);
			this->checkBox131->TabIndex = 116;
			this->checkBox131->TabStop = false;
			this->checkBox131->UseVisualStyleBackColor = true;
			this->checkBox131->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox132
			// 
			this->checkBox132->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox132->Location = System::Drawing::Point(1042, 479);
			this->checkBox132->Name = L"checkBox132";
			this->checkBox132->Size = System::Drawing::Size(60, 60);
			this->checkBox132->TabIndex = 115;
			this->checkBox132->TabStop = false;
			this->checkBox132->UseVisualStyleBackColor = true;
			this->checkBox132->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox133
			// 
			this->checkBox133->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox133->Location = System::Drawing::Point(1102, 479);
			this->checkBox133->Name = L"checkBox133";
			this->checkBox133->Size = System::Drawing::Size(60, 60);
			this->checkBox133->TabIndex = 114;
			this->checkBox133->TabStop = false;
			this->checkBox133->UseVisualStyleBackColor = true;
			this->checkBox133->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox134
			// 
			this->checkBox134->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox134->Location = System::Drawing::Point(22, 539);
			this->checkBox134->Name = L"checkBox134";
			this->checkBox134->Size = System::Drawing::Size(60, 60);
			this->checkBox134->TabIndex = 151;
			this->checkBox134->TabStop = false;
			this->checkBox134->UseVisualStyleBackColor = true;
			this->checkBox134->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox135
			// 
			this->checkBox135->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox135->Location = System::Drawing::Point(82, 539);
			this->checkBox135->Name = L"checkBox135";
			this->checkBox135->Size = System::Drawing::Size(60, 60);
			this->checkBox135->TabIndex = 150;
			this->checkBox135->TabStop = false;
			this->checkBox135->UseVisualStyleBackColor = true;
			this->checkBox135->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox136
			// 
			this->checkBox136->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox136->Location = System::Drawing::Point(142, 539);
			this->checkBox136->Name = L"checkBox136";
			this->checkBox136->Size = System::Drawing::Size(60, 60);
			this->checkBox136->TabIndex = 149;
			this->checkBox136->TabStop = false;
			this->checkBox136->UseVisualStyleBackColor = true;
			this->checkBox136->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox137
			// 
			this->checkBox137->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox137->Location = System::Drawing::Point(202, 539);
			this->checkBox137->Name = L"checkBox137";
			this->checkBox137->Size = System::Drawing::Size(60, 60);
			this->checkBox137->TabIndex = 148;
			this->checkBox137->TabStop = false;
			this->checkBox137->UseVisualStyleBackColor = true;
			this->checkBox137->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox138
			// 
			this->checkBox138->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox138->Location = System::Drawing::Point(262, 539);
			this->checkBox138->Name = L"checkBox138";
			this->checkBox138->Size = System::Drawing::Size(60, 60);
			this->checkBox138->TabIndex = 147;
			this->checkBox138->TabStop = false;
			this->checkBox138->UseVisualStyleBackColor = true;
			this->checkBox138->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox139
			// 
			this->checkBox139->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox139->Location = System::Drawing::Point(322, 539);
			this->checkBox139->Name = L"checkBox139";
			this->checkBox139->Size = System::Drawing::Size(60, 60);
			this->checkBox139->TabIndex = 146;
			this->checkBox139->TabStop = false;
			this->checkBox139->UseVisualStyleBackColor = true;
			this->checkBox139->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox140
			// 
			this->checkBox140->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox140->Location = System::Drawing::Point(382, 539);
			this->checkBox140->Name = L"checkBox140";
			this->checkBox140->Size = System::Drawing::Size(60, 60);
			this->checkBox140->TabIndex = 145;
			this->checkBox140->TabStop = false;
			this->checkBox140->UseVisualStyleBackColor = true;
			this->checkBox140->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox141
			// 
			this->checkBox141->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox141->Location = System::Drawing::Point(442, 539);
			this->checkBox141->Name = L"checkBox141";
			this->checkBox141->Size = System::Drawing::Size(60, 60);
			this->checkBox141->TabIndex = 144;
			this->checkBox141->TabStop = false;
			this->checkBox141->UseVisualStyleBackColor = true;
			this->checkBox141->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox142
			// 
			this->checkBox142->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox142->Location = System::Drawing::Point(502, 539);
			this->checkBox142->Name = L"checkBox142";
			this->checkBox142->Size = System::Drawing::Size(60, 60);
			this->checkBox142->TabIndex = 143;
			this->checkBox142->TabStop = false;
			this->checkBox142->UseVisualStyleBackColor = true;
			this->checkBox142->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox143
			// 
			this->checkBox143->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox143->Location = System::Drawing::Point(562, 539);
			this->checkBox143->Name = L"checkBox143";
			this->checkBox143->Size = System::Drawing::Size(60, 60);
			this->checkBox143->TabIndex = 142;
			this->checkBox143->TabStop = false;
			this->checkBox143->UseVisualStyleBackColor = true;
			this->checkBox143->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox144
			// 
			this->checkBox144->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox144->Location = System::Drawing::Point(622, 539);
			this->checkBox144->Name = L"checkBox144";
			this->checkBox144->Size = System::Drawing::Size(60, 60);
			this->checkBox144->TabIndex = 141;
			this->checkBox144->TabStop = false;
			this->checkBox144->UseVisualStyleBackColor = true;
			this->checkBox144->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox145
			// 
			this->checkBox145->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox145->Location = System::Drawing::Point(682, 539);
			this->checkBox145->Name = L"checkBox145";
			this->checkBox145->Size = System::Drawing::Size(60, 60);
			this->checkBox145->TabIndex = 140;
			this->checkBox145->TabStop = false;
			this->checkBox145->UseVisualStyleBackColor = true;
			this->checkBox145->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox146
			// 
			this->checkBox146->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox146->Location = System::Drawing::Point(742, 539);
			this->checkBox146->Name = L"checkBox146";
			this->checkBox146->Size = System::Drawing::Size(60, 60);
			this->checkBox146->TabIndex = 139;
			this->checkBox146->TabStop = false;
			this->checkBox146->UseVisualStyleBackColor = true;
			this->checkBox146->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox147
			// 
			this->checkBox147->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox147->Location = System::Drawing::Point(802, 539);
			this->checkBox147->Name = L"checkBox147";
			this->checkBox147->Size = System::Drawing::Size(60, 60);
			this->checkBox147->TabIndex = 138;
			this->checkBox147->TabStop = false;
			this->checkBox147->UseVisualStyleBackColor = true;
			this->checkBox147->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox148
			// 
			this->checkBox148->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox148->Location = System::Drawing::Point(862, 539);
			this->checkBox148->Name = L"checkBox148";
			this->checkBox148->Size = System::Drawing::Size(60, 60);
			this->checkBox148->TabIndex = 137;
			this->checkBox148->TabStop = false;
			this->checkBox148->UseVisualStyleBackColor = true;
			this->checkBox148->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox149
			// 
			this->checkBox149->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox149->Location = System::Drawing::Point(922, 539);
			this->checkBox149->Name = L"checkBox149";
			this->checkBox149->Size = System::Drawing::Size(60, 60);
			this->checkBox149->TabIndex = 136;
			this->checkBox149->TabStop = false;
			this->checkBox149->UseVisualStyleBackColor = true;
			this->checkBox149->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox150
			// 
			this->checkBox150->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox150->Location = System::Drawing::Point(982, 539);
			this->checkBox150->Name = L"checkBox150";
			this->checkBox150->Size = System::Drawing::Size(60, 60);
			this->checkBox150->TabIndex = 135;
			this->checkBox150->TabStop = false;
			this->checkBox150->UseVisualStyleBackColor = true;
			this->checkBox150->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox151
			// 
			this->checkBox151->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox151->Location = System::Drawing::Point(1042, 539);
			this->checkBox151->Name = L"checkBox151";
			this->checkBox151->Size = System::Drawing::Size(60, 60);
			this->checkBox151->TabIndex = 134;
			this->checkBox151->TabStop = false;
			this->checkBox151->UseVisualStyleBackColor = true;
			this->checkBox151->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox152
			// 
			this->checkBox152->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox152->Location = System::Drawing::Point(1102, 539);
			this->checkBox152->Name = L"checkBox152";
			this->checkBox152->Size = System::Drawing::Size(60, 60);
			this->checkBox152->TabIndex = 133;
			this->checkBox152->TabStop = false;
			this->checkBox152->UseVisualStyleBackColor = true;
			this->checkBox152->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox153
			// 
			this->checkBox153->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox153->Location = System::Drawing::Point(22, 599);
			this->checkBox153->Name = L"checkBox153";
			this->checkBox153->Size = System::Drawing::Size(60, 60);
			this->checkBox153->TabIndex = 170;
			this->checkBox153->TabStop = false;
			this->checkBox153->UseVisualStyleBackColor = true;
			this->checkBox153->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox154
			// 
			this->checkBox154->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox154->Location = System::Drawing::Point(82, 599);
			this->checkBox154->Name = L"checkBox154";
			this->checkBox154->Size = System::Drawing::Size(60, 60);
			this->checkBox154->TabIndex = 169;
			this->checkBox154->TabStop = false;
			this->checkBox154->UseVisualStyleBackColor = true;
			this->checkBox154->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox155
			// 
			this->checkBox155->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox155->Location = System::Drawing::Point(142, 599);
			this->checkBox155->Name = L"checkBox155";
			this->checkBox155->Size = System::Drawing::Size(60, 60);
			this->checkBox155->TabIndex = 168;
			this->checkBox155->TabStop = false;
			this->checkBox155->UseVisualStyleBackColor = true;
			this->checkBox155->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox156
			// 
			this->checkBox156->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox156->Location = System::Drawing::Point(202, 599);
			this->checkBox156->Name = L"checkBox156";
			this->checkBox156->Size = System::Drawing::Size(60, 60);
			this->checkBox156->TabIndex = 167;
			this->checkBox156->TabStop = false;
			this->checkBox156->UseVisualStyleBackColor = true;
			this->checkBox156->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox157
			// 
			this->checkBox157->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox157->Location = System::Drawing::Point(262, 599);
			this->checkBox157->Name = L"checkBox157";
			this->checkBox157->Size = System::Drawing::Size(60, 60);
			this->checkBox157->TabIndex = 166;
			this->checkBox157->TabStop = false;
			this->checkBox157->UseVisualStyleBackColor = true;
			this->checkBox157->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox158
			// 
			this->checkBox158->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox158->Location = System::Drawing::Point(322, 599);
			this->checkBox158->Name = L"checkBox158";
			this->checkBox158->Size = System::Drawing::Size(60, 60);
			this->checkBox158->TabIndex = 165;
			this->checkBox158->TabStop = false;
			this->checkBox158->UseVisualStyleBackColor = true;
			this->checkBox158->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox159
			// 
			this->checkBox159->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox159->Location = System::Drawing::Point(382, 599);
			this->checkBox159->Name = L"checkBox159";
			this->checkBox159->Size = System::Drawing::Size(60, 60);
			this->checkBox159->TabIndex = 164;
			this->checkBox159->TabStop = false;
			this->checkBox159->UseVisualStyleBackColor = true;
			this->checkBox159->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox160
			// 
			this->checkBox160->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox160->Location = System::Drawing::Point(442, 599);
			this->checkBox160->Name = L"checkBox160";
			this->checkBox160->Size = System::Drawing::Size(60, 60);
			this->checkBox160->TabIndex = 163;
			this->checkBox160->TabStop = false;
			this->checkBox160->UseVisualStyleBackColor = true;
			this->checkBox160->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox161
			// 
			this->checkBox161->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox161->Location = System::Drawing::Point(502, 599);
			this->checkBox161->Name = L"checkBox161";
			this->checkBox161->Size = System::Drawing::Size(60, 60);
			this->checkBox161->TabIndex = 162;
			this->checkBox161->TabStop = false;
			this->checkBox161->UseVisualStyleBackColor = true;
			this->checkBox161->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox162
			// 
			this->checkBox162->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox162->Location = System::Drawing::Point(562, 599);
			this->checkBox162->Name = L"checkBox162";
			this->checkBox162->Size = System::Drawing::Size(60, 60);
			this->checkBox162->TabIndex = 161;
			this->checkBox162->TabStop = false;
			this->checkBox162->UseVisualStyleBackColor = true;
			this->checkBox162->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox163
			// 
			this->checkBox163->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox163->Location = System::Drawing::Point(622, 599);
			this->checkBox163->Name = L"checkBox163";
			this->checkBox163->Size = System::Drawing::Size(60, 60);
			this->checkBox163->TabIndex = 160;
			this->checkBox163->TabStop = false;
			this->checkBox163->UseVisualStyleBackColor = true;
			this->checkBox163->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox164
			// 
			this->checkBox164->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox164->Location = System::Drawing::Point(682, 599);
			this->checkBox164->Name = L"checkBox164";
			this->checkBox164->Size = System::Drawing::Size(60, 60);
			this->checkBox164->TabIndex = 159;
			this->checkBox164->TabStop = false;
			this->checkBox164->UseVisualStyleBackColor = true;
			this->checkBox164->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox165
			// 
			this->checkBox165->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox165->Location = System::Drawing::Point(742, 599);
			this->checkBox165->Name = L"checkBox165";
			this->checkBox165->Size = System::Drawing::Size(60, 60);
			this->checkBox165->TabIndex = 158;
			this->checkBox165->TabStop = false;
			this->checkBox165->UseVisualStyleBackColor = true;
			this->checkBox165->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox166
			// 
			this->checkBox166->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox166->Location = System::Drawing::Point(802, 599);
			this->checkBox166->Name = L"checkBox166";
			this->checkBox166->Size = System::Drawing::Size(60, 60);
			this->checkBox166->TabIndex = 157;
			this->checkBox166->TabStop = false;
			this->checkBox166->UseVisualStyleBackColor = true;
			this->checkBox166->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox167
			// 
			this->checkBox167->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox167->Location = System::Drawing::Point(862, 599);
			this->checkBox167->Name = L"checkBox167";
			this->checkBox167->Size = System::Drawing::Size(60, 60);
			this->checkBox167->TabIndex = 156;
			this->checkBox167->TabStop = false;
			this->checkBox167->UseVisualStyleBackColor = true;
			this->checkBox167->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox168
			// 
			this->checkBox168->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox168->Location = System::Drawing::Point(922, 599);
			this->checkBox168->Name = L"checkBox168";
			this->checkBox168->Size = System::Drawing::Size(60, 60);
			this->checkBox168->TabIndex = 155;
			this->checkBox168->TabStop = false;
			this->checkBox168->UseVisualStyleBackColor = true;
			this->checkBox168->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox169
			// 
			this->checkBox169->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox169->Location = System::Drawing::Point(982, 599);
			this->checkBox169->Name = L"checkBox169";
			this->checkBox169->Size = System::Drawing::Size(60, 60);
			this->checkBox169->TabIndex = 154;
			this->checkBox169->TabStop = false;
			this->checkBox169->UseVisualStyleBackColor = true;
			this->checkBox169->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox170
			// 
			this->checkBox170->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox170->Location = System::Drawing::Point(1042, 599);
			this->checkBox170->Name = L"checkBox170";
			this->checkBox170->Size = System::Drawing::Size(60, 60);
			this->checkBox170->TabIndex = 153;
			this->checkBox170->TabStop = false;
			this->checkBox170->UseVisualStyleBackColor = true;
			this->checkBox170->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox171
			// 
			this->checkBox171->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox171->Location = System::Drawing::Point(1102, 599);
			this->checkBox171->Name = L"checkBox171";
			this->checkBox171->Size = System::Drawing::Size(60, 60);
			this->checkBox171->TabIndex = 152;
			this->checkBox171->TabStop = false;
			this->checkBox171->UseVisualStyleBackColor = true;
			this->checkBox171->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox172
			// 
			this->checkBox172->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox172->Location = System::Drawing::Point(22, 659);
			this->checkBox172->Name = L"checkBox172";
			this->checkBox172->Size = System::Drawing::Size(60, 60);
			this->checkBox172->TabIndex = 189;
			this->checkBox172->TabStop = false;
			this->checkBox172->UseVisualStyleBackColor = true;
			this->checkBox172->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox173
			// 
			this->checkBox173->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox173->Location = System::Drawing::Point(82, 659);
			this->checkBox173->Name = L"checkBox173";
			this->checkBox173->Size = System::Drawing::Size(60, 60);
			this->checkBox173->TabIndex = 188;
			this->checkBox173->TabStop = false;
			this->checkBox173->UseVisualStyleBackColor = true;
			this->checkBox173->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox174
			// 
			this->checkBox174->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox174->Location = System::Drawing::Point(142, 659);
			this->checkBox174->Name = L"checkBox174";
			this->checkBox174->Size = System::Drawing::Size(60, 60);
			this->checkBox174->TabIndex = 187;
			this->checkBox174->TabStop = false;
			this->checkBox174->UseVisualStyleBackColor = true;
			this->checkBox174->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox175
			// 
			this->checkBox175->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox175->Location = System::Drawing::Point(202, 659);
			this->checkBox175->Name = L"checkBox175";
			this->checkBox175->Size = System::Drawing::Size(60, 60);
			this->checkBox175->TabIndex = 186;
			this->checkBox175->TabStop = false;
			this->checkBox175->UseVisualStyleBackColor = true;
			this->checkBox175->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox176
			// 
			this->checkBox176->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox176->Location = System::Drawing::Point(262, 659);
			this->checkBox176->Name = L"checkBox176";
			this->checkBox176->Size = System::Drawing::Size(60, 60);
			this->checkBox176->TabIndex = 185;
			this->checkBox176->TabStop = false;
			this->checkBox176->UseVisualStyleBackColor = true;
			this->checkBox176->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox177
			// 
			this->checkBox177->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox177->Location = System::Drawing::Point(322, 659);
			this->checkBox177->Name = L"checkBox177";
			this->checkBox177->Size = System::Drawing::Size(60, 60);
			this->checkBox177->TabIndex = 184;
			this->checkBox177->TabStop = false;
			this->checkBox177->UseVisualStyleBackColor = true;
			this->checkBox177->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox178
			// 
			this->checkBox178->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox178->Location = System::Drawing::Point(382, 659);
			this->checkBox178->Name = L"checkBox178";
			this->checkBox178->Size = System::Drawing::Size(60, 60);
			this->checkBox178->TabIndex = 183;
			this->checkBox178->TabStop = false;
			this->checkBox178->UseVisualStyleBackColor = true;
			this->checkBox178->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox179
			// 
			this->checkBox179->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox179->Location = System::Drawing::Point(442, 659);
			this->checkBox179->Name = L"checkBox179";
			this->checkBox179->Size = System::Drawing::Size(60, 60);
			this->checkBox179->TabIndex = 182;
			this->checkBox179->TabStop = false;
			this->checkBox179->UseVisualStyleBackColor = true;
			this->checkBox179->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox180
			// 
			this->checkBox180->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox180->Location = System::Drawing::Point(502, 659);
			this->checkBox180->Name = L"checkBox180";
			this->checkBox180->Size = System::Drawing::Size(60, 60);
			this->checkBox180->TabIndex = 181;
			this->checkBox180->TabStop = false;
			this->checkBox180->UseVisualStyleBackColor = true;
			this->checkBox180->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox181
			// 
			this->checkBox181->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox181->Location = System::Drawing::Point(562, 659);
			this->checkBox181->Name = L"checkBox181";
			this->checkBox181->Size = System::Drawing::Size(60, 60);
			this->checkBox181->TabIndex = 180;
			this->checkBox181->TabStop = false;
			this->checkBox181->UseVisualStyleBackColor = true;
			this->checkBox181->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox182
			// 
			this->checkBox182->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox182->Location = System::Drawing::Point(622, 659);
			this->checkBox182->Name = L"checkBox182";
			this->checkBox182->Size = System::Drawing::Size(60, 60);
			this->checkBox182->TabIndex = 179;
			this->checkBox182->TabStop = false;
			this->checkBox182->UseVisualStyleBackColor = true;
			this->checkBox182->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox183
			// 
			this->checkBox183->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox183->Location = System::Drawing::Point(682, 659);
			this->checkBox183->Name = L"checkBox183";
			this->checkBox183->Size = System::Drawing::Size(60, 60);
			this->checkBox183->TabIndex = 178;
			this->checkBox183->TabStop = false;
			this->checkBox183->UseVisualStyleBackColor = true;
			this->checkBox183->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox184
			// 
			this->checkBox184->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox184->Location = System::Drawing::Point(742, 659);
			this->checkBox184->Name = L"checkBox184";
			this->checkBox184->Size = System::Drawing::Size(60, 60);
			this->checkBox184->TabIndex = 177;
			this->checkBox184->TabStop = false;
			this->checkBox184->UseVisualStyleBackColor = true;
			this->checkBox184->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox185
			// 
			this->checkBox185->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox185->Location = System::Drawing::Point(802, 659);
			this->checkBox185->Name = L"checkBox185";
			this->checkBox185->Size = System::Drawing::Size(60, 60);
			this->checkBox185->TabIndex = 176;
			this->checkBox185->TabStop = false;
			this->checkBox185->UseVisualStyleBackColor = true;
			this->checkBox185->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox186
			// 
			this->checkBox186->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox186->Location = System::Drawing::Point(862, 659);
			this->checkBox186->Name = L"checkBox186";
			this->checkBox186->Size = System::Drawing::Size(60, 60);
			this->checkBox186->TabIndex = 175;
			this->checkBox186->TabStop = false;
			this->checkBox186->UseVisualStyleBackColor = true;
			this->checkBox186->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox187
			// 
			this->checkBox187->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox187->Location = System::Drawing::Point(922, 659);
			this->checkBox187->Name = L"checkBox187";
			this->checkBox187->Size = System::Drawing::Size(60, 60);
			this->checkBox187->TabIndex = 174;
			this->checkBox187->TabStop = false;
			this->checkBox187->UseVisualStyleBackColor = true;
			this->checkBox187->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox188
			// 
			this->checkBox188->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox188->Location = System::Drawing::Point(982, 659);
			this->checkBox188->Name = L"checkBox188";
			this->checkBox188->Size = System::Drawing::Size(60, 60);
			this->checkBox188->TabIndex = 173;
			this->checkBox188->TabStop = false;
			this->checkBox188->UseVisualStyleBackColor = true;
			this->checkBox188->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox189
			// 
			this->checkBox189->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox189->Location = System::Drawing::Point(1042, 659);
			this->checkBox189->Name = L"checkBox189";
			this->checkBox189->Size = System::Drawing::Size(60, 60);
			this->checkBox189->TabIndex = 172;
			this->checkBox189->TabStop = false;
			this->checkBox189->UseVisualStyleBackColor = true;
			this->checkBox189->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox190
			// 
			this->checkBox190->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox190->Location = System::Drawing::Point(1102, 659);
			this->checkBox190->Name = L"checkBox190";
			this->checkBox190->Size = System::Drawing::Size(60, 60);
			this->checkBox190->TabIndex = 171;
			this->checkBox190->TabStop = false;
			this->checkBox190->UseVisualStyleBackColor = true;
			this->checkBox190->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox191
			// 
			this->checkBox191->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox191->Location = System::Drawing::Point(22, 719);
			this->checkBox191->Name = L"checkBox191";
			this->checkBox191->Size = System::Drawing::Size(60, 60);
			this->checkBox191->TabIndex = 208;
			this->checkBox191->TabStop = false;
			this->checkBox191->UseVisualStyleBackColor = true;
			this->checkBox191->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox192
			// 
			this->checkBox192->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox192->Location = System::Drawing::Point(82, 719);
			this->checkBox192->Name = L"checkBox192";
			this->checkBox192->Size = System::Drawing::Size(60, 60);
			this->checkBox192->TabIndex = 207;
			this->checkBox192->TabStop = false;
			this->checkBox192->UseVisualStyleBackColor = true;
			this->checkBox192->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox193
			// 
			this->checkBox193->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox193->Location = System::Drawing::Point(142, 719);
			this->checkBox193->Name = L"checkBox193";
			this->checkBox193->Size = System::Drawing::Size(60, 60);
			this->checkBox193->TabIndex = 206;
			this->checkBox193->TabStop = false;
			this->checkBox193->UseVisualStyleBackColor = true;
			this->checkBox193->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox194
			// 
			this->checkBox194->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox194->Location = System::Drawing::Point(202, 719);
			this->checkBox194->Name = L"checkBox194";
			this->checkBox194->Size = System::Drawing::Size(60, 60);
			this->checkBox194->TabIndex = 205;
			this->checkBox194->TabStop = false;
			this->checkBox194->UseVisualStyleBackColor = true;
			this->checkBox194->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox195
			// 
			this->checkBox195->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox195->Location = System::Drawing::Point(262, 719);
			this->checkBox195->Name = L"checkBox195";
			this->checkBox195->Size = System::Drawing::Size(60, 60);
			this->checkBox195->TabIndex = 204;
			this->checkBox195->TabStop = false;
			this->checkBox195->UseVisualStyleBackColor = true;
			this->checkBox195->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox196
			// 
			this->checkBox196->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox196->Location = System::Drawing::Point(322, 719);
			this->checkBox196->Name = L"checkBox196";
			this->checkBox196->Size = System::Drawing::Size(60, 60);
			this->checkBox196->TabIndex = 203;
			this->checkBox196->TabStop = false;
			this->checkBox196->UseVisualStyleBackColor = true;
			this->checkBox196->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox197
			// 
			this->checkBox197->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox197->Location = System::Drawing::Point(382, 719);
			this->checkBox197->Name = L"checkBox197";
			this->checkBox197->Size = System::Drawing::Size(60, 60);
			this->checkBox197->TabIndex = 202;
			this->checkBox197->TabStop = false;
			this->checkBox197->UseVisualStyleBackColor = true;
			this->checkBox197->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox198
			// 
			this->checkBox198->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox198->Location = System::Drawing::Point(442, 719);
			this->checkBox198->Name = L"checkBox198";
			this->checkBox198->Size = System::Drawing::Size(60, 60);
			this->checkBox198->TabIndex = 201;
			this->checkBox198->TabStop = false;
			this->checkBox198->UseVisualStyleBackColor = true;
			this->checkBox198->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox199
			// 
			this->checkBox199->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox199->Location = System::Drawing::Point(502, 719);
			this->checkBox199->Name = L"checkBox199";
			this->checkBox199->Size = System::Drawing::Size(60, 60);
			this->checkBox199->TabIndex = 200;
			this->checkBox199->TabStop = false;
			this->checkBox199->UseVisualStyleBackColor = true;
			this->checkBox199->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox200
			// 
			this->checkBox200->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox200->Location = System::Drawing::Point(562, 719);
			this->checkBox200->Name = L"checkBox200";
			this->checkBox200->Size = System::Drawing::Size(60, 60);
			this->checkBox200->TabIndex = 199;
			this->checkBox200->TabStop = false;
			this->checkBox200->UseVisualStyleBackColor = true;
			this->checkBox200->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox201
			// 
			this->checkBox201->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox201->Location = System::Drawing::Point(622, 719);
			this->checkBox201->Name = L"checkBox201";
			this->checkBox201->Size = System::Drawing::Size(60, 60);
			this->checkBox201->TabIndex = 198;
			this->checkBox201->TabStop = false;
			this->checkBox201->UseVisualStyleBackColor = true;
			this->checkBox201->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox202
			// 
			this->checkBox202->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox202->Location = System::Drawing::Point(682, 719);
			this->checkBox202->Name = L"checkBox202";
			this->checkBox202->Size = System::Drawing::Size(60, 60);
			this->checkBox202->TabIndex = 197;
			this->checkBox202->TabStop = false;
			this->checkBox202->UseVisualStyleBackColor = true;
			this->checkBox202->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox203
			// 
			this->checkBox203->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox203->Location = System::Drawing::Point(742, 719);
			this->checkBox203->Name = L"checkBox203";
			this->checkBox203->Size = System::Drawing::Size(60, 60);
			this->checkBox203->TabIndex = 196;
			this->checkBox203->TabStop = false;
			this->checkBox203->UseVisualStyleBackColor = true;
			this->checkBox203->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox204
			// 
			this->checkBox204->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox204->Location = System::Drawing::Point(802, 719);
			this->checkBox204->Name = L"checkBox204";
			this->checkBox204->Size = System::Drawing::Size(60, 60);
			this->checkBox204->TabIndex = 195;
			this->checkBox204->TabStop = false;
			this->checkBox204->UseVisualStyleBackColor = true;
			this->checkBox204->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox205
			// 
			this->checkBox205->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox205->Location = System::Drawing::Point(862, 719);
			this->checkBox205->Name = L"checkBox205";
			this->checkBox205->Size = System::Drawing::Size(60, 60);
			this->checkBox205->TabIndex = 194;
			this->checkBox205->TabStop = false;
			this->checkBox205->UseVisualStyleBackColor = true;
			this->checkBox205->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox206
			// 
			this->checkBox206->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox206->Location = System::Drawing::Point(922, 719);
			this->checkBox206->Name = L"checkBox206";
			this->checkBox206->Size = System::Drawing::Size(60, 60);
			this->checkBox206->TabIndex = 193;
			this->checkBox206->TabStop = false;
			this->checkBox206->UseVisualStyleBackColor = true;
			this->checkBox206->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox207
			// 
			this->checkBox207->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox207->Location = System::Drawing::Point(982, 719);
			this->checkBox207->Name = L"checkBox207";
			this->checkBox207->Size = System::Drawing::Size(60, 60);
			this->checkBox207->TabIndex = 192;
			this->checkBox207->TabStop = false;
			this->checkBox207->UseVisualStyleBackColor = true;
			this->checkBox207->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox208
			// 
			this->checkBox208->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox208->Location = System::Drawing::Point(1042, 719);
			this->checkBox208->Name = L"checkBox208";
			this->checkBox208->Size = System::Drawing::Size(60, 60);
			this->checkBox208->TabIndex = 191;
			this->checkBox208->TabStop = false;
			this->checkBox208->UseVisualStyleBackColor = true;
			this->checkBox208->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox209
			// 
			this->checkBox209->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox209->Location = System::Drawing::Point(1102, 719);
			this->checkBox209->Name = L"checkBox209";
			this->checkBox209->Size = System::Drawing::Size(60, 60);
			this->checkBox209->TabIndex = 190;
			this->checkBox209->TabStop = false;
			this->checkBox209->UseVisualStyleBackColor = true;
			this->checkBox209->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox210
			// 
			this->checkBox210->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox210->Location = System::Drawing::Point(22, 779);
			this->checkBox210->Name = L"checkBox210";
			this->checkBox210->Size = System::Drawing::Size(60, 60);
			this->checkBox210->TabIndex = 227;
			this->checkBox210->TabStop = false;
			this->checkBox210->UseVisualStyleBackColor = true;
			this->checkBox210->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox211
			// 
			this->checkBox211->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox211->Location = System::Drawing::Point(82, 779);
			this->checkBox211->Name = L"checkBox211";
			this->checkBox211->Size = System::Drawing::Size(60, 60);
			this->checkBox211->TabIndex = 226;
			this->checkBox211->TabStop = false;
			this->checkBox211->UseVisualStyleBackColor = true;
			this->checkBox211->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox212
			// 
			this->checkBox212->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox212->Location = System::Drawing::Point(142, 779);
			this->checkBox212->Name = L"checkBox212";
			this->checkBox212->Size = System::Drawing::Size(60, 60);
			this->checkBox212->TabIndex = 225;
			this->checkBox212->TabStop = false;
			this->checkBox212->UseVisualStyleBackColor = true;
			this->checkBox212->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox213
			// 
			this->checkBox213->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox213->Location = System::Drawing::Point(202, 779);
			this->checkBox213->Name = L"checkBox213";
			this->checkBox213->Size = System::Drawing::Size(60, 60);
			this->checkBox213->TabIndex = 224;
			this->checkBox213->TabStop = false;
			this->checkBox213->UseVisualStyleBackColor = true;
			this->checkBox213->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox214
			// 
			this->checkBox214->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox214->Location = System::Drawing::Point(262, 779);
			this->checkBox214->Name = L"checkBox214";
			this->checkBox214->Size = System::Drawing::Size(60, 60);
			this->checkBox214->TabIndex = 223;
			this->checkBox214->TabStop = false;
			this->checkBox214->UseVisualStyleBackColor = true;
			this->checkBox214->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox215
			// 
			this->checkBox215->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox215->Location = System::Drawing::Point(322, 779);
			this->checkBox215->Name = L"checkBox215";
			this->checkBox215->Size = System::Drawing::Size(60, 60);
			this->checkBox215->TabIndex = 222;
			this->checkBox215->TabStop = false;
			this->checkBox215->UseVisualStyleBackColor = true;
			this->checkBox215->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox216
			// 
			this->checkBox216->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox216->Location = System::Drawing::Point(382, 779);
			this->checkBox216->Name = L"checkBox216";
			this->checkBox216->Size = System::Drawing::Size(60, 60);
			this->checkBox216->TabIndex = 221;
			this->checkBox216->TabStop = false;
			this->checkBox216->UseVisualStyleBackColor = true;
			this->checkBox216->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox217
			// 
			this->checkBox217->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox217->Location = System::Drawing::Point(442, 779);
			this->checkBox217->Name = L"checkBox217";
			this->checkBox217->Size = System::Drawing::Size(60, 60);
			this->checkBox217->TabIndex = 220;
			this->checkBox217->TabStop = false;
			this->checkBox217->UseVisualStyleBackColor = true;
			this->checkBox217->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox218
			// 
			this->checkBox218->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox218->Location = System::Drawing::Point(502, 779);
			this->checkBox218->Name = L"checkBox218";
			this->checkBox218->Size = System::Drawing::Size(60, 60);
			this->checkBox218->TabIndex = 219;
			this->checkBox218->TabStop = false;
			this->checkBox218->UseVisualStyleBackColor = true;
			this->checkBox218->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox219
			// 
			this->checkBox219->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox219->Location = System::Drawing::Point(562, 779);
			this->checkBox219->Name = L"checkBox219";
			this->checkBox219->Size = System::Drawing::Size(60, 60);
			this->checkBox219->TabIndex = 218;
			this->checkBox219->TabStop = false;
			this->checkBox219->UseVisualStyleBackColor = true;
			this->checkBox219->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox220
			// 
			this->checkBox220->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox220->Location = System::Drawing::Point(622, 779);
			this->checkBox220->Name = L"checkBox220";
			this->checkBox220->Size = System::Drawing::Size(60, 60);
			this->checkBox220->TabIndex = 217;
			this->checkBox220->TabStop = false;
			this->checkBox220->UseVisualStyleBackColor = true;
			this->checkBox220->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox221
			// 
			this->checkBox221->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox221->Location = System::Drawing::Point(682, 779);
			this->checkBox221->Name = L"checkBox221";
			this->checkBox221->Size = System::Drawing::Size(60, 60);
			this->checkBox221->TabIndex = 216;
			this->checkBox221->TabStop = false;
			this->checkBox221->UseVisualStyleBackColor = true;
			this->checkBox221->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox222
			// 
			this->checkBox222->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox222->Location = System::Drawing::Point(742, 779);
			this->checkBox222->Name = L"checkBox222";
			this->checkBox222->Size = System::Drawing::Size(60, 60);
			this->checkBox222->TabIndex = 215;
			this->checkBox222->TabStop = false;
			this->checkBox222->UseVisualStyleBackColor = true;
			this->checkBox222->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox223
			// 
			this->checkBox223->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox223->Location = System::Drawing::Point(802, 779);
			this->checkBox223->Name = L"checkBox223";
			this->checkBox223->Size = System::Drawing::Size(60, 60);
			this->checkBox223->TabIndex = 214;
			this->checkBox223->TabStop = false;
			this->checkBox223->UseVisualStyleBackColor = true;
			this->checkBox223->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox224
			// 
			this->checkBox224->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox224->Location = System::Drawing::Point(862, 779);
			this->checkBox224->Name = L"checkBox224";
			this->checkBox224->Size = System::Drawing::Size(60, 60);
			this->checkBox224->TabIndex = 213;
			this->checkBox224->TabStop = false;
			this->checkBox224->UseVisualStyleBackColor = true;
			this->checkBox224->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox225
			// 
			this->checkBox225->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox225->Location = System::Drawing::Point(922, 779);
			this->checkBox225->Name = L"checkBox225";
			this->checkBox225->Size = System::Drawing::Size(60, 60);
			this->checkBox225->TabIndex = 212;
			this->checkBox225->TabStop = false;
			this->checkBox225->UseVisualStyleBackColor = true;
			this->checkBox225->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox226
			// 
			this->checkBox226->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox226->Location = System::Drawing::Point(982, 779);
			this->checkBox226->Name = L"checkBox226";
			this->checkBox226->Size = System::Drawing::Size(60, 60);
			this->checkBox226->TabIndex = 211;
			this->checkBox226->TabStop = false;
			this->checkBox226->UseVisualStyleBackColor = true;
			this->checkBox226->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox227
			// 
			this->checkBox227->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox227->Location = System::Drawing::Point(1042, 779);
			this->checkBox227->Name = L"checkBox227";
			this->checkBox227->Size = System::Drawing::Size(60, 60);
			this->checkBox227->TabIndex = 210;
			this->checkBox227->TabStop = false;
			this->checkBox227->UseVisualStyleBackColor = true;
			this->checkBox227->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox228
			// 
			this->checkBox228->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox228->Location = System::Drawing::Point(1102, 779);
			this->checkBox228->Name = L"checkBox228";
			this->checkBox228->Size = System::Drawing::Size(60, 60);
			this->checkBox228->TabIndex = 209;
			this->checkBox228->TabStop = false;
			this->checkBox228->UseVisualStyleBackColor = true;
			this->checkBox228->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox229
			// 
			this->checkBox229->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox229->Location = System::Drawing::Point(22, 839);
			this->checkBox229->Name = L"checkBox229";
			this->checkBox229->Size = System::Drawing::Size(60, 60);
			this->checkBox229->TabIndex = 246;
			this->checkBox229->TabStop = false;
			this->checkBox229->UseVisualStyleBackColor = true;
			this->checkBox229->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox230
			// 
			this->checkBox230->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox230->Location = System::Drawing::Point(82, 839);
			this->checkBox230->Name = L"checkBox230";
			this->checkBox230->Size = System::Drawing::Size(60, 60);
			this->checkBox230->TabIndex = 245;
			this->checkBox230->TabStop = false;
			this->checkBox230->UseVisualStyleBackColor = true;
			this->checkBox230->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox231
			// 
			this->checkBox231->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox231->Location = System::Drawing::Point(142, 839);
			this->checkBox231->Name = L"checkBox231";
			this->checkBox231->Size = System::Drawing::Size(60, 60);
			this->checkBox231->TabIndex = 244;
			this->checkBox231->TabStop = false;
			this->checkBox231->UseVisualStyleBackColor = true;
			this->checkBox231->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox232
			// 
			this->checkBox232->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox232->Location = System::Drawing::Point(202, 839);
			this->checkBox232->Name = L"checkBox232";
			this->checkBox232->Size = System::Drawing::Size(60, 60);
			this->checkBox232->TabIndex = 243;
			this->checkBox232->TabStop = false;
			this->checkBox232->UseVisualStyleBackColor = true;
			this->checkBox232->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox233
			// 
			this->checkBox233->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox233->Location = System::Drawing::Point(262, 839);
			this->checkBox233->Name = L"checkBox233";
			this->checkBox233->Size = System::Drawing::Size(60, 60);
			this->checkBox233->TabIndex = 242;
			this->checkBox233->TabStop = false;
			this->checkBox233->UseVisualStyleBackColor = true;
			this->checkBox233->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox234
			// 
			this->checkBox234->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox234->Location = System::Drawing::Point(322, 839);
			this->checkBox234->Name = L"checkBox234";
			this->checkBox234->Size = System::Drawing::Size(60, 60);
			this->checkBox234->TabIndex = 241;
			this->checkBox234->TabStop = false;
			this->checkBox234->UseVisualStyleBackColor = true;
			this->checkBox234->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox235
			// 
			this->checkBox235->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox235->Location = System::Drawing::Point(382, 839);
			this->checkBox235->Name = L"checkBox235";
			this->checkBox235->Size = System::Drawing::Size(60, 60);
			this->checkBox235->TabIndex = 240;
			this->checkBox235->TabStop = false;
			this->checkBox235->UseVisualStyleBackColor = true;
			this->checkBox235->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox236
			// 
			this->checkBox236->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox236->Location = System::Drawing::Point(442, 839);
			this->checkBox236->Name = L"checkBox236";
			this->checkBox236->Size = System::Drawing::Size(60, 60);
			this->checkBox236->TabIndex = 239;
			this->checkBox236->TabStop = false;
			this->checkBox236->UseVisualStyleBackColor = true;
			this->checkBox236->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox237
			// 
			this->checkBox237->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox237->Location = System::Drawing::Point(502, 839);
			this->checkBox237->Name = L"checkBox237";
			this->checkBox237->Size = System::Drawing::Size(60, 60);
			this->checkBox237->TabIndex = 238;
			this->checkBox237->TabStop = false;
			this->checkBox237->UseVisualStyleBackColor = true;
			this->checkBox237->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox238
			// 
			this->checkBox238->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox238->Location = System::Drawing::Point(562, 839);
			this->checkBox238->Name = L"checkBox238";
			this->checkBox238->Size = System::Drawing::Size(60, 60);
			this->checkBox238->TabIndex = 237;
			this->checkBox238->TabStop = false;
			this->checkBox238->UseVisualStyleBackColor = true;
			this->checkBox238->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox239
			// 
			this->checkBox239->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox239->Location = System::Drawing::Point(622, 839);
			this->checkBox239->Name = L"checkBox239";
			this->checkBox239->Size = System::Drawing::Size(60, 60);
			this->checkBox239->TabIndex = 236;
			this->checkBox239->TabStop = false;
			this->checkBox239->UseVisualStyleBackColor = true;
			this->checkBox239->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox240
			// 
			this->checkBox240->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox240->Location = System::Drawing::Point(682, 839);
			this->checkBox240->Name = L"checkBox240";
			this->checkBox240->Size = System::Drawing::Size(60, 60);
			this->checkBox240->TabIndex = 235;
			this->checkBox240->TabStop = false;
			this->checkBox240->UseVisualStyleBackColor = true;
			this->checkBox240->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox241
			// 
			this->checkBox241->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox241->Location = System::Drawing::Point(742, 839);
			this->checkBox241->Name = L"checkBox241";
			this->checkBox241->Size = System::Drawing::Size(60, 60);
			this->checkBox241->TabIndex = 234;
			this->checkBox241->TabStop = false;
			this->checkBox241->UseVisualStyleBackColor = true;
			this->checkBox241->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox242
			// 
			this->checkBox242->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox242->Location = System::Drawing::Point(802, 839);
			this->checkBox242->Name = L"checkBox242";
			this->checkBox242->Size = System::Drawing::Size(60, 60);
			this->checkBox242->TabIndex = 233;
			this->checkBox242->TabStop = false;
			this->checkBox242->UseVisualStyleBackColor = true;
			this->checkBox242->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox243
			// 
			this->checkBox243->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox243->Location = System::Drawing::Point(862, 839);
			this->checkBox243->Name = L"checkBox243";
			this->checkBox243->Size = System::Drawing::Size(60, 60);
			this->checkBox243->TabIndex = 232;
			this->checkBox243->TabStop = false;
			this->checkBox243->UseVisualStyleBackColor = true;
			this->checkBox243->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox244
			// 
			this->checkBox244->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox244->Location = System::Drawing::Point(922, 839);
			this->checkBox244->Name = L"checkBox244";
			this->checkBox244->Size = System::Drawing::Size(60, 60);
			this->checkBox244->TabIndex = 231;
			this->checkBox244->TabStop = false;
			this->checkBox244->UseVisualStyleBackColor = true;
			this->checkBox244->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox245
			// 
			this->checkBox245->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox245->Location = System::Drawing::Point(982, 839);
			this->checkBox245->Name = L"checkBox245";
			this->checkBox245->Size = System::Drawing::Size(60, 60);
			this->checkBox245->TabIndex = 230;
			this->checkBox245->TabStop = false;
			this->checkBox245->UseVisualStyleBackColor = true;
			this->checkBox245->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox246
			// 
			this->checkBox246->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox246->Location = System::Drawing::Point(1042, 839);
			this->checkBox246->Name = L"checkBox246";
			this->checkBox246->Size = System::Drawing::Size(60, 60);
			this->checkBox246->TabIndex = 229;
			this->checkBox246->TabStop = false;
			this->checkBox246->UseVisualStyleBackColor = true;
			this->checkBox246->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox247
			// 
			this->checkBox247->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox247->Location = System::Drawing::Point(1102, 839);
			this->checkBox247->Name = L"checkBox247";
			this->checkBox247->Size = System::Drawing::Size(60, 60);
			this->checkBox247->TabIndex = 228;
			this->checkBox247->TabStop = false;
			this->checkBox247->UseVisualStyleBackColor = true;
			this->checkBox247->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox248
			// 
			this->checkBox248->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox248->Location = System::Drawing::Point(22, 899);
			this->checkBox248->Name = L"checkBox248";
			this->checkBox248->Size = System::Drawing::Size(60, 60);
			this->checkBox248->TabIndex = 265;
			this->checkBox248->TabStop = false;
			this->checkBox248->UseVisualStyleBackColor = true;
			this->checkBox248->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox249
			// 
			this->checkBox249->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox249->Location = System::Drawing::Point(82, 899);
			this->checkBox249->Name = L"checkBox249";
			this->checkBox249->Size = System::Drawing::Size(60, 60);
			this->checkBox249->TabIndex = 264;
			this->checkBox249->TabStop = false;
			this->checkBox249->UseVisualStyleBackColor = true;
			this->checkBox249->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox250
			// 
			this->checkBox250->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox250->Location = System::Drawing::Point(142, 899);
			this->checkBox250->Name = L"checkBox250";
			this->checkBox250->Size = System::Drawing::Size(60, 60);
			this->checkBox250->TabIndex = 263;
			this->checkBox250->TabStop = false;
			this->checkBox250->UseVisualStyleBackColor = true;
			this->checkBox250->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox251
			// 
			this->checkBox251->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox251->Location = System::Drawing::Point(202, 899);
			this->checkBox251->Name = L"checkBox251";
			this->checkBox251->Size = System::Drawing::Size(60, 60);
			this->checkBox251->TabIndex = 262;
			this->checkBox251->TabStop = false;
			this->checkBox251->UseVisualStyleBackColor = true;
			this->checkBox251->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox252
			// 
			this->checkBox252->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox252->Location = System::Drawing::Point(262, 899);
			this->checkBox252->Name = L"checkBox252";
			this->checkBox252->Size = System::Drawing::Size(60, 60);
			this->checkBox252->TabIndex = 261;
			this->checkBox252->TabStop = false;
			this->checkBox252->UseVisualStyleBackColor = true;
			this->checkBox252->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox253
			// 
			this->checkBox253->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox253->Location = System::Drawing::Point(322, 899);
			this->checkBox253->Name = L"checkBox253";
			this->checkBox253->Size = System::Drawing::Size(60, 60);
			this->checkBox253->TabIndex = 260;
			this->checkBox253->TabStop = false;
			this->checkBox253->UseVisualStyleBackColor = true;
			this->checkBox253->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox254
			// 
			this->checkBox254->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox254->Location = System::Drawing::Point(382, 899);
			this->checkBox254->Name = L"checkBox254";
			this->checkBox254->Size = System::Drawing::Size(60, 60);
			this->checkBox254->TabIndex = 259;
			this->checkBox254->TabStop = false;
			this->checkBox254->UseVisualStyleBackColor = true;
			this->checkBox254->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox255
			// 
			this->checkBox255->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox255->Location = System::Drawing::Point(442, 899);
			this->checkBox255->Name = L"checkBox255";
			this->checkBox255->Size = System::Drawing::Size(60, 60);
			this->checkBox255->TabIndex = 258;
			this->checkBox255->TabStop = false;
			this->checkBox255->UseVisualStyleBackColor = true;
			this->checkBox255->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox256
			// 
			this->checkBox256->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox256->Location = System::Drawing::Point(502, 899);
			this->checkBox256->Name = L"checkBox256";
			this->checkBox256->Size = System::Drawing::Size(60, 60);
			this->checkBox256->TabIndex = 257;
			this->checkBox256->TabStop = false;
			this->checkBox256->UseVisualStyleBackColor = true;
			this->checkBox256->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox257
			// 
			this->checkBox257->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox257->Location = System::Drawing::Point(562, 899);
			this->checkBox257->Name = L"checkBox257";
			this->checkBox257->Size = System::Drawing::Size(60, 60);
			this->checkBox257->TabIndex = 256;
			this->checkBox257->TabStop = false;
			this->checkBox257->UseVisualStyleBackColor = true;
			this->checkBox257->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox258
			// 
			this->checkBox258->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox258->Location = System::Drawing::Point(622, 899);
			this->checkBox258->Name = L"checkBox258";
			this->checkBox258->Size = System::Drawing::Size(60, 60);
			this->checkBox258->TabIndex = 255;
			this->checkBox258->TabStop = false;
			this->checkBox258->UseVisualStyleBackColor = true;
			this->checkBox258->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox259
			// 
			this->checkBox259->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox259->Location = System::Drawing::Point(682, 899);
			this->checkBox259->Name = L"checkBox259";
			this->checkBox259->Size = System::Drawing::Size(60, 60);
			this->checkBox259->TabIndex = 254;
			this->checkBox259->TabStop = false;
			this->checkBox259->UseVisualStyleBackColor = true;
			this->checkBox259->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox260
			// 
			this->checkBox260->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox260->Location = System::Drawing::Point(742, 899);
			this->checkBox260->Name = L"checkBox260";
			this->checkBox260->Size = System::Drawing::Size(60, 60);
			this->checkBox260->TabIndex = 253;
			this->checkBox260->TabStop = false;
			this->checkBox260->UseVisualStyleBackColor = true;
			this->checkBox260->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox261
			// 
			this->checkBox261->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox261->Location = System::Drawing::Point(802, 899);
			this->checkBox261->Name = L"checkBox261";
			this->checkBox261->Size = System::Drawing::Size(60, 60);
			this->checkBox261->TabIndex = 252;
			this->checkBox261->TabStop = false;
			this->checkBox261->UseVisualStyleBackColor = true;
			this->checkBox261->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox262
			// 
			this->checkBox262->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox262->Location = System::Drawing::Point(862, 899);
			this->checkBox262->Name = L"checkBox262";
			this->checkBox262->Size = System::Drawing::Size(60, 60);
			this->checkBox262->TabIndex = 251;
			this->checkBox262->TabStop = false;
			this->checkBox262->UseVisualStyleBackColor = true;
			this->checkBox262->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox263
			// 
			this->checkBox263->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox263->Location = System::Drawing::Point(922, 899);
			this->checkBox263->Name = L"checkBox263";
			this->checkBox263->Size = System::Drawing::Size(60, 60);
			this->checkBox263->TabIndex = 250;
			this->checkBox263->TabStop = false;
			this->checkBox263->UseVisualStyleBackColor = true;
			this->checkBox263->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox264
			// 
			this->checkBox264->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox264->Location = System::Drawing::Point(982, 899);
			this->checkBox264->Name = L"checkBox264";
			this->checkBox264->Size = System::Drawing::Size(60, 60);
			this->checkBox264->TabIndex = 249;
			this->checkBox264->TabStop = false;
			this->checkBox264->UseVisualStyleBackColor = true;
			this->checkBox264->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox265
			// 
			this->checkBox265->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox265->Location = System::Drawing::Point(1042, 899);
			this->checkBox265->Name = L"checkBox265";
			this->checkBox265->Size = System::Drawing::Size(60, 60);
			this->checkBox265->TabIndex = 248;
			this->checkBox265->TabStop = false;
			this->checkBox265->UseVisualStyleBackColor = true;
			this->checkBox265->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox266
			// 
			this->checkBox266->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox266->Location = System::Drawing::Point(1102, 899);
			this->checkBox266->Name = L"checkBox266";
			this->checkBox266->Size = System::Drawing::Size(60, 60);
			this->checkBox266->TabIndex = 247;
			this->checkBox266->TabStop = false;
			this->checkBox266->UseVisualStyleBackColor = true;
			this->checkBox266->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox267
			// 
			this->checkBox267->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox267->Location = System::Drawing::Point(22, 959);
			this->checkBox267->Name = L"checkBox267";
			this->checkBox267->Size = System::Drawing::Size(60, 60);
			this->checkBox267->TabIndex = 284;
			this->checkBox267->TabStop = false;
			this->checkBox267->UseVisualStyleBackColor = true;
			this->checkBox267->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox268
			// 
			this->checkBox268->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox268->Location = System::Drawing::Point(82, 959);
			this->checkBox268->Name = L"checkBox268";
			this->checkBox268->Size = System::Drawing::Size(60, 60);
			this->checkBox268->TabIndex = 283;
			this->checkBox268->TabStop = false;
			this->checkBox268->UseVisualStyleBackColor = true;
			this->checkBox268->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox269
			// 
			this->checkBox269->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox269->Location = System::Drawing::Point(142, 959);
			this->checkBox269->Name = L"checkBox269";
			this->checkBox269->Size = System::Drawing::Size(60, 60);
			this->checkBox269->TabIndex = 282;
			this->checkBox269->TabStop = false;
			this->checkBox269->UseVisualStyleBackColor = true;
			this->checkBox269->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox270
			// 
			this->checkBox270->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox270->Location = System::Drawing::Point(202, 959);
			this->checkBox270->Name = L"checkBox270";
			this->checkBox270->Size = System::Drawing::Size(60, 60);
			this->checkBox270->TabIndex = 281;
			this->checkBox270->TabStop = false;
			this->checkBox270->UseVisualStyleBackColor = true;
			this->checkBox270->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox271
			// 
			this->checkBox271->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox271->Location = System::Drawing::Point(262, 959);
			this->checkBox271->Name = L"checkBox271";
			this->checkBox271->Size = System::Drawing::Size(60, 60);
			this->checkBox271->TabIndex = 280;
			this->checkBox271->TabStop = false;
			this->checkBox271->UseVisualStyleBackColor = true;
			this->checkBox271->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox272
			// 
			this->checkBox272->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox272->Location = System::Drawing::Point(322, 959);
			this->checkBox272->Name = L"checkBox272";
			this->checkBox272->Size = System::Drawing::Size(60, 60);
			this->checkBox272->TabIndex = 279;
			this->checkBox272->TabStop = false;
			this->checkBox272->UseVisualStyleBackColor = true;
			this->checkBox272->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox273
			// 
			this->checkBox273->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox273->Location = System::Drawing::Point(382, 959);
			this->checkBox273->Name = L"checkBox273";
			this->checkBox273->Size = System::Drawing::Size(60, 60);
			this->checkBox273->TabIndex = 278;
			this->checkBox273->TabStop = false;
			this->checkBox273->UseVisualStyleBackColor = true;
			this->checkBox273->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox274
			// 
			this->checkBox274->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox274->Location = System::Drawing::Point(442, 959);
			this->checkBox274->Name = L"checkBox274";
			this->checkBox274->Size = System::Drawing::Size(60, 60);
			this->checkBox274->TabIndex = 277;
			this->checkBox274->TabStop = false;
			this->checkBox274->UseVisualStyleBackColor = true;
			this->checkBox274->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox275
			// 
			this->checkBox275->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox275->Location = System::Drawing::Point(502, 959);
			this->checkBox275->Name = L"checkBox275";
			this->checkBox275->Size = System::Drawing::Size(60, 60);
			this->checkBox275->TabIndex = 276;
			this->checkBox275->TabStop = false;
			this->checkBox275->UseVisualStyleBackColor = true;
			this->checkBox275->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox276
			// 
			this->checkBox276->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox276->Location = System::Drawing::Point(562, 959);
			this->checkBox276->Name = L"checkBox276";
			this->checkBox276->Size = System::Drawing::Size(60, 60);
			this->checkBox276->TabIndex = 275;
			this->checkBox276->TabStop = false;
			this->checkBox276->UseVisualStyleBackColor = true;
			this->checkBox276->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox277
			// 
			this->checkBox277->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox277->Location = System::Drawing::Point(622, 959);
			this->checkBox277->Name = L"checkBox277";
			this->checkBox277->Size = System::Drawing::Size(60, 60);
			this->checkBox277->TabIndex = 274;
			this->checkBox277->TabStop = false;
			this->checkBox277->UseVisualStyleBackColor = true;
			this->checkBox277->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox278
			// 
			this->checkBox278->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox278->Location = System::Drawing::Point(682, 959);
			this->checkBox278->Name = L"checkBox278";
			this->checkBox278->Size = System::Drawing::Size(60, 60);
			this->checkBox278->TabIndex = 273;
			this->checkBox278->TabStop = false;
			this->checkBox278->UseVisualStyleBackColor = true;
			this->checkBox278->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox279
			// 
			this->checkBox279->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox279->Location = System::Drawing::Point(742, 959);
			this->checkBox279->Name = L"checkBox279";
			this->checkBox279->Size = System::Drawing::Size(60, 60);
			this->checkBox279->TabIndex = 272;
			this->checkBox279->TabStop = false;
			this->checkBox279->UseVisualStyleBackColor = true;
			this->checkBox279->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox280
			// 
			this->checkBox280->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox280->Location = System::Drawing::Point(802, 959);
			this->checkBox280->Name = L"checkBox280";
			this->checkBox280->Size = System::Drawing::Size(60, 60);
			this->checkBox280->TabIndex = 271;
			this->checkBox280->TabStop = false;
			this->checkBox280->UseVisualStyleBackColor = true;
			this->checkBox280->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox281
			// 
			this->checkBox281->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox281->Location = System::Drawing::Point(862, 959);
			this->checkBox281->Name = L"checkBox281";
			this->checkBox281->Size = System::Drawing::Size(60, 60);
			this->checkBox281->TabIndex = 270;
			this->checkBox281->TabStop = false;
			this->checkBox281->UseVisualStyleBackColor = true;
			this->checkBox281->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox282
			// 
			this->checkBox282->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox282->Location = System::Drawing::Point(922, 959);
			this->checkBox282->Name = L"checkBox282";
			this->checkBox282->Size = System::Drawing::Size(60, 60);
			this->checkBox282->TabIndex = 269;
			this->checkBox282->TabStop = false;
			this->checkBox282->UseVisualStyleBackColor = true;
			this->checkBox282->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox283
			// 
			this->checkBox283->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox283->Location = System::Drawing::Point(982, 959);
			this->checkBox283->Name = L"checkBox283";
			this->checkBox283->Size = System::Drawing::Size(60, 60);
			this->checkBox283->TabIndex = 268;
			this->checkBox283->TabStop = false;
			this->checkBox283->UseVisualStyleBackColor = true;
			this->checkBox283->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox284
			// 
			this->checkBox284->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox284->Location = System::Drawing::Point(1042, 959);
			this->checkBox284->Name = L"checkBox284";
			this->checkBox284->Size = System::Drawing::Size(60, 60);
			this->checkBox284->TabIndex = 267;
			this->checkBox284->TabStop = false;
			this->checkBox284->UseVisualStyleBackColor = true;
			this->checkBox284->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox285
			// 
			this->checkBox285->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox285->Location = System::Drawing::Point(1102, 959);
			this->checkBox285->Name = L"checkBox285";
			this->checkBox285->Size = System::Drawing::Size(60, 60);
			this->checkBox285->TabIndex = 266;
			this->checkBox285->TabStop = false;
			this->checkBox285->UseVisualStyleBackColor = true;
			this->checkBox285->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox286
			// 
			this->checkBox286->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox286->Location = System::Drawing::Point(22, 1019);
			this->checkBox286->Name = L"checkBox286";
			this->checkBox286->Size = System::Drawing::Size(60, 60);
			this->checkBox286->TabIndex = 303;
			this->checkBox286->TabStop = false;
			this->checkBox286->UseVisualStyleBackColor = true;
			this->checkBox286->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox287
			// 
			this->checkBox287->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox287->Location = System::Drawing::Point(82, 1019);
			this->checkBox287->Name = L"checkBox287";
			this->checkBox287->Size = System::Drawing::Size(60, 60);
			this->checkBox287->TabIndex = 302;
			this->checkBox287->TabStop = false;
			this->checkBox287->UseVisualStyleBackColor = true;
			this->checkBox287->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox288
			// 
			this->checkBox288->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox288->Location = System::Drawing::Point(142, 1019);
			this->checkBox288->Name = L"checkBox288";
			this->checkBox288->Size = System::Drawing::Size(60, 60);
			this->checkBox288->TabIndex = 301;
			this->checkBox288->TabStop = false;
			this->checkBox288->UseVisualStyleBackColor = true;
			this->checkBox288->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox289
			// 
			this->checkBox289->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox289->Location = System::Drawing::Point(202, 1019);
			this->checkBox289->Name = L"checkBox289";
			this->checkBox289->Size = System::Drawing::Size(60, 60);
			this->checkBox289->TabIndex = 300;
			this->checkBox289->TabStop = false;
			this->checkBox289->UseVisualStyleBackColor = true;
			this->checkBox289->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox290
			// 
			this->checkBox290->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox290->Location = System::Drawing::Point(262, 1019);
			this->checkBox290->Name = L"checkBox290";
			this->checkBox290->Size = System::Drawing::Size(60, 60);
			this->checkBox290->TabIndex = 299;
			this->checkBox290->TabStop = false;
			this->checkBox290->UseVisualStyleBackColor = true;
			this->checkBox290->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox291
			// 
			this->checkBox291->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox291->Location = System::Drawing::Point(322, 1019);
			this->checkBox291->Name = L"checkBox291";
			this->checkBox291->Size = System::Drawing::Size(60, 60);
			this->checkBox291->TabIndex = 298;
			this->checkBox291->TabStop = false;
			this->checkBox291->UseVisualStyleBackColor = true;
			this->checkBox291->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox292
			// 
			this->checkBox292->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox292->Location = System::Drawing::Point(382, 1019);
			this->checkBox292->Name = L"checkBox292";
			this->checkBox292->Size = System::Drawing::Size(60, 60);
			this->checkBox292->TabIndex = 297;
			this->checkBox292->TabStop = false;
			this->checkBox292->UseVisualStyleBackColor = true;
			this->checkBox292->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox293
			// 
			this->checkBox293->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox293->Location = System::Drawing::Point(442, 1019);
			this->checkBox293->Name = L"checkBox293";
			this->checkBox293->Size = System::Drawing::Size(60, 60);
			this->checkBox293->TabIndex = 296;
			this->checkBox293->TabStop = false;
			this->checkBox293->UseVisualStyleBackColor = true;
			this->checkBox293->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox294
			// 
			this->checkBox294->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox294->Location = System::Drawing::Point(502, 1019);
			this->checkBox294->Name = L"checkBox294";
			this->checkBox294->Size = System::Drawing::Size(60, 60);
			this->checkBox294->TabIndex = 295;
			this->checkBox294->TabStop = false;
			this->checkBox294->UseVisualStyleBackColor = true;
			this->checkBox294->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox295
			// 
			this->checkBox295->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox295->Location = System::Drawing::Point(562, 1019);
			this->checkBox295->Name = L"checkBox295";
			this->checkBox295->Size = System::Drawing::Size(60, 60);
			this->checkBox295->TabIndex = 294;
			this->checkBox295->TabStop = false;
			this->checkBox295->UseVisualStyleBackColor = true;
			this->checkBox295->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox296
			// 
			this->checkBox296->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox296->Location = System::Drawing::Point(622, 1019);
			this->checkBox296->Name = L"checkBox296";
			this->checkBox296->Size = System::Drawing::Size(60, 60);
			this->checkBox296->TabIndex = 293;
			this->checkBox296->TabStop = false;
			this->checkBox296->UseVisualStyleBackColor = true;
			this->checkBox296->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox297
			// 
			this->checkBox297->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox297->Location = System::Drawing::Point(682, 1019);
			this->checkBox297->Name = L"checkBox297";
			this->checkBox297->Size = System::Drawing::Size(60, 60);
			this->checkBox297->TabIndex = 292;
			this->checkBox297->TabStop = false;
			this->checkBox297->UseVisualStyleBackColor = true;
			this->checkBox297->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox298
			// 
			this->checkBox298->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox298->Location = System::Drawing::Point(742, 1019);
			this->checkBox298->Name = L"checkBox298";
			this->checkBox298->Size = System::Drawing::Size(60, 60);
			this->checkBox298->TabIndex = 291;
			this->checkBox298->TabStop = false;
			this->checkBox298->UseVisualStyleBackColor = true;
			this->checkBox298->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox299
			// 
			this->checkBox299->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox299->Location = System::Drawing::Point(802, 1019);
			this->checkBox299->Name = L"checkBox299";
			this->checkBox299->Size = System::Drawing::Size(60, 60);
			this->checkBox299->TabIndex = 290;
			this->checkBox299->TabStop = false;
			this->checkBox299->UseVisualStyleBackColor = true;
			this->checkBox299->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox300
			// 
			this->checkBox300->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox300->Location = System::Drawing::Point(862, 1019);
			this->checkBox300->Name = L"checkBox300";
			this->checkBox300->Size = System::Drawing::Size(60, 60);
			this->checkBox300->TabIndex = 289;
			this->checkBox300->TabStop = false;
			this->checkBox300->UseVisualStyleBackColor = true;
			this->checkBox300->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox301
			// 
			this->checkBox301->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox301->Location = System::Drawing::Point(922, 1019);
			this->checkBox301->Name = L"checkBox301";
			this->checkBox301->Size = System::Drawing::Size(60, 60);
			this->checkBox301->TabIndex = 288;
			this->checkBox301->TabStop = false;
			this->checkBox301->UseVisualStyleBackColor = true;
			this->checkBox301->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox302
			// 
			this->checkBox302->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox302->Location = System::Drawing::Point(982, 1019);
			this->checkBox302->Name = L"checkBox302";
			this->checkBox302->Size = System::Drawing::Size(60, 60);
			this->checkBox302->TabIndex = 287;
			this->checkBox302->TabStop = false;
			this->checkBox302->UseVisualStyleBackColor = true;
			this->checkBox302->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox303
			// 
			this->checkBox303->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox303->Location = System::Drawing::Point(1042, 1019);
			this->checkBox303->Name = L"checkBox303";
			this->checkBox303->Size = System::Drawing::Size(60, 60);
			this->checkBox303->TabIndex = 286;
			this->checkBox303->TabStop = false;
			this->checkBox303->UseVisualStyleBackColor = true;
			this->checkBox303->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox304
			// 
			this->checkBox304->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox304->Location = System::Drawing::Point(1102, 1019);
			this->checkBox304->Name = L"checkBox304";
			this->checkBox304->Size = System::Drawing::Size(60, 60);
			this->checkBox304->TabIndex = 285;
			this->checkBox304->TabStop = false;
			this->checkBox304->UseVisualStyleBackColor = true;
			this->checkBox304->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox305
			// 
			this->checkBox305->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox305->Location = System::Drawing::Point(22, 1079);
			this->checkBox305->Name = L"checkBox305";
			this->checkBox305->Size = System::Drawing::Size(60, 60);
			this->checkBox305->TabIndex = 322;
			this->checkBox305->TabStop = false;
			this->checkBox305->UseVisualStyleBackColor = true;
			this->checkBox305->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox306
			// 
			this->checkBox306->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox306->Location = System::Drawing::Point(82, 1079);
			this->checkBox306->Name = L"checkBox306";
			this->checkBox306->Size = System::Drawing::Size(60, 60);
			this->checkBox306->TabIndex = 321;
			this->checkBox306->TabStop = false;
			this->checkBox306->UseVisualStyleBackColor = true;
			this->checkBox306->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox307
			// 
			this->checkBox307->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox307->Location = System::Drawing::Point(142, 1079);
			this->checkBox307->Name = L"checkBox307";
			this->checkBox307->Size = System::Drawing::Size(60, 60);
			this->checkBox307->TabIndex = 320;
			this->checkBox307->TabStop = false;
			this->checkBox307->UseVisualStyleBackColor = true;
			this->checkBox307->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox308
			// 
			this->checkBox308->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox308->Location = System::Drawing::Point(202, 1079);
			this->checkBox308->Name = L"checkBox308";
			this->checkBox308->Size = System::Drawing::Size(60, 60);
			this->checkBox308->TabIndex = 319;
			this->checkBox308->TabStop = false;
			this->checkBox308->UseVisualStyleBackColor = true;
			this->checkBox308->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox309
			// 
			this->checkBox309->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox309->Location = System::Drawing::Point(262, 1079);
			this->checkBox309->Name = L"checkBox309";
			this->checkBox309->Size = System::Drawing::Size(60, 60);
			this->checkBox309->TabIndex = 318;
			this->checkBox309->TabStop = false;
			this->checkBox309->UseVisualStyleBackColor = true;
			this->checkBox309->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox310
			// 
			this->checkBox310->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox310->Location = System::Drawing::Point(322, 1079);
			this->checkBox310->Name = L"checkBox310";
			this->checkBox310->Size = System::Drawing::Size(60, 60);
			this->checkBox310->TabIndex = 317;
			this->checkBox310->TabStop = false;
			this->checkBox310->UseVisualStyleBackColor = true;
			this->checkBox310->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox311
			// 
			this->checkBox311->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox311->Location = System::Drawing::Point(382, 1079);
			this->checkBox311->Name = L"checkBox311";
			this->checkBox311->Size = System::Drawing::Size(60, 60);
			this->checkBox311->TabIndex = 316;
			this->checkBox311->TabStop = false;
			this->checkBox311->UseVisualStyleBackColor = true;
			this->checkBox311->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox312
			// 
			this->checkBox312->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox312->Location = System::Drawing::Point(442, 1079);
			this->checkBox312->Name = L"checkBox312";
			this->checkBox312->Size = System::Drawing::Size(60, 60);
			this->checkBox312->TabIndex = 315;
			this->checkBox312->TabStop = false;
			this->checkBox312->UseVisualStyleBackColor = true;
			this->checkBox312->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox313
			// 
			this->checkBox313->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox313->Location = System::Drawing::Point(502, 1079);
			this->checkBox313->Name = L"checkBox313";
			this->checkBox313->Size = System::Drawing::Size(60, 60);
			this->checkBox313->TabIndex = 314;
			this->checkBox313->TabStop = false;
			this->checkBox313->UseVisualStyleBackColor = true;
			this->checkBox313->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox314
			// 
			this->checkBox314->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox314->Location = System::Drawing::Point(562, 1079);
			this->checkBox314->Name = L"checkBox314";
			this->checkBox314->Size = System::Drawing::Size(60, 60);
			this->checkBox314->TabIndex = 313;
			this->checkBox314->TabStop = false;
			this->checkBox314->UseVisualStyleBackColor = true;
			this->checkBox314->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox315
			// 
			this->checkBox315->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox315->Location = System::Drawing::Point(622, 1079);
			this->checkBox315->Name = L"checkBox315";
			this->checkBox315->Size = System::Drawing::Size(60, 60);
			this->checkBox315->TabIndex = 312;
			this->checkBox315->TabStop = false;
			this->checkBox315->UseVisualStyleBackColor = true;
			this->checkBox315->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox316
			// 
			this->checkBox316->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox316->Location = System::Drawing::Point(682, 1079);
			this->checkBox316->Name = L"checkBox316";
			this->checkBox316->Size = System::Drawing::Size(60, 60);
			this->checkBox316->TabIndex = 311;
			this->checkBox316->TabStop = false;
			this->checkBox316->UseVisualStyleBackColor = true;
			this->checkBox316->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox317
			// 
			this->checkBox317->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox317->Location = System::Drawing::Point(742, 1079);
			this->checkBox317->Name = L"checkBox317";
			this->checkBox317->Size = System::Drawing::Size(60, 60);
			this->checkBox317->TabIndex = 310;
			this->checkBox317->TabStop = false;
			this->checkBox317->UseVisualStyleBackColor = true;
			this->checkBox317->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox318
			// 
			this->checkBox318->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox318->Location = System::Drawing::Point(802, 1079);
			this->checkBox318->Name = L"checkBox318";
			this->checkBox318->Size = System::Drawing::Size(60, 60);
			this->checkBox318->TabIndex = 309;
			this->checkBox318->TabStop = false;
			this->checkBox318->UseVisualStyleBackColor = true;
			this->checkBox318->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox319
			// 
			this->checkBox319->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox319->Location = System::Drawing::Point(862, 1079);
			this->checkBox319->Name = L"checkBox319";
			this->checkBox319->Size = System::Drawing::Size(60, 60);
			this->checkBox319->TabIndex = 308;
			this->checkBox319->TabStop = false;
			this->checkBox319->UseVisualStyleBackColor = true;
			this->checkBox319->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox320
			// 
			this->checkBox320->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox320->Location = System::Drawing::Point(922, 1079);
			this->checkBox320->Name = L"checkBox320";
			this->checkBox320->Size = System::Drawing::Size(60, 60);
			this->checkBox320->TabIndex = 307;
			this->checkBox320->TabStop = false;
			this->checkBox320->UseVisualStyleBackColor = true;
			this->checkBox320->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox321
			// 
			this->checkBox321->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox321->Location = System::Drawing::Point(982, 1079);
			this->checkBox321->Name = L"checkBox321";
			this->checkBox321->Size = System::Drawing::Size(60, 60);
			this->checkBox321->TabIndex = 306;
			this->checkBox321->TabStop = false;
			this->checkBox321->UseVisualStyleBackColor = true;
			this->checkBox321->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox322
			// 
			this->checkBox322->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox322->Location = System::Drawing::Point(1042, 1079);
			this->checkBox322->Name = L"checkBox322";
			this->checkBox322->Size = System::Drawing::Size(60, 60);
			this->checkBox322->TabIndex = 305;
			this->checkBox322->TabStop = false;
			this->checkBox322->UseVisualStyleBackColor = true;
			this->checkBox322->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox323
			// 
			this->checkBox323->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox323->Location = System::Drawing::Point(1102, 1079);
			this->checkBox323->Name = L"checkBox323";
			this->checkBox323->Size = System::Drawing::Size(60, 60);
			this->checkBox323->TabIndex = 304;
			this->checkBox323->TabStop = false;
			this->checkBox323->UseVisualStyleBackColor = true;
			this->checkBox323->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox324
			// 
			this->checkBox324->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox324->Location = System::Drawing::Point(22, 1139);
			this->checkBox324->Name = L"checkBox324";
			this->checkBox324->Size = System::Drawing::Size(60, 60);
			this->checkBox324->TabIndex = 341;
			this->checkBox324->TabStop = false;
			this->checkBox324->UseVisualStyleBackColor = true;
			this->checkBox324->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox325
			// 
			this->checkBox325->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox325->Location = System::Drawing::Point(82, 1139);
			this->checkBox325->Name = L"checkBox325";
			this->checkBox325->Size = System::Drawing::Size(60, 60);
			this->checkBox325->TabIndex = 340;
			this->checkBox325->TabStop = false;
			this->checkBox325->UseVisualStyleBackColor = true;
			this->checkBox325->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox326
			// 
			this->checkBox326->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox326->Location = System::Drawing::Point(142, 1139);
			this->checkBox326->Name = L"checkBox326";
			this->checkBox326->Size = System::Drawing::Size(60, 60);
			this->checkBox326->TabIndex = 339;
			this->checkBox326->TabStop = false;
			this->checkBox326->UseVisualStyleBackColor = true;
			this->checkBox326->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox327
			// 
			this->checkBox327->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox327->Location = System::Drawing::Point(202, 1139);
			this->checkBox327->Name = L"checkBox327";
			this->checkBox327->Size = System::Drawing::Size(60, 60);
			this->checkBox327->TabIndex = 338;
			this->checkBox327->TabStop = false;
			this->checkBox327->UseVisualStyleBackColor = true;
			this->checkBox327->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox328
			// 
			this->checkBox328->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox328->Location = System::Drawing::Point(262, 1139);
			this->checkBox328->Name = L"checkBox328";
			this->checkBox328->Size = System::Drawing::Size(60, 60);
			this->checkBox328->TabIndex = 337;
			this->checkBox328->TabStop = false;
			this->checkBox328->UseVisualStyleBackColor = true;
			this->checkBox328->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox329
			// 
			this->checkBox329->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox329->Location = System::Drawing::Point(322, 1139);
			this->checkBox329->Name = L"checkBox329";
			this->checkBox329->Size = System::Drawing::Size(60, 60);
			this->checkBox329->TabIndex = 336;
			this->checkBox329->TabStop = false;
			this->checkBox329->UseVisualStyleBackColor = true;
			this->checkBox329->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox330
			// 
			this->checkBox330->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox330->Location = System::Drawing::Point(382, 1139);
			this->checkBox330->Name = L"checkBox330";
			this->checkBox330->Size = System::Drawing::Size(60, 60);
			this->checkBox330->TabIndex = 335;
			this->checkBox330->TabStop = false;
			this->checkBox330->UseVisualStyleBackColor = true;
			this->checkBox330->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox331
			// 
			this->checkBox331->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox331->Location = System::Drawing::Point(442, 1139);
			this->checkBox331->Name = L"checkBox331";
			this->checkBox331->Size = System::Drawing::Size(60, 60);
			this->checkBox331->TabIndex = 334;
			this->checkBox331->TabStop = false;
			this->checkBox331->UseVisualStyleBackColor = true;
			this->checkBox331->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox332
			// 
			this->checkBox332->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox332->Location = System::Drawing::Point(502, 1139);
			this->checkBox332->Name = L"checkBox332";
			this->checkBox332->Size = System::Drawing::Size(60, 60);
			this->checkBox332->TabIndex = 333;
			this->checkBox332->TabStop = false;
			this->checkBox332->UseVisualStyleBackColor = true;
			this->checkBox332->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox333
			// 
			this->checkBox333->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox333->Location = System::Drawing::Point(562, 1139);
			this->checkBox333->Name = L"checkBox333";
			this->checkBox333->Size = System::Drawing::Size(60, 60);
			this->checkBox333->TabIndex = 332;
			this->checkBox333->TabStop = false;
			this->checkBox333->UseVisualStyleBackColor = true;
			this->checkBox333->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox334
			// 
			this->checkBox334->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox334->Location = System::Drawing::Point(622, 1139);
			this->checkBox334->Name = L"checkBox334";
			this->checkBox334->Size = System::Drawing::Size(60, 60);
			this->checkBox334->TabIndex = 331;
			this->checkBox334->TabStop = false;
			this->checkBox334->UseVisualStyleBackColor = true;
			this->checkBox334->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox335
			// 
			this->checkBox335->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox335->Location = System::Drawing::Point(682, 1139);
			this->checkBox335->Name = L"checkBox335";
			this->checkBox335->Size = System::Drawing::Size(60, 60);
			this->checkBox335->TabIndex = 330;
			this->checkBox335->TabStop = false;
			this->checkBox335->UseVisualStyleBackColor = true;
			this->checkBox335->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox336
			// 
			this->checkBox336->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox336->Location = System::Drawing::Point(742, 1139);
			this->checkBox336->Name = L"checkBox336";
			this->checkBox336->Size = System::Drawing::Size(60, 60);
			this->checkBox336->TabIndex = 329;
			this->checkBox336->TabStop = false;
			this->checkBox336->UseVisualStyleBackColor = true;
			this->checkBox336->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox337
			// 
			this->checkBox337->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox337->Location = System::Drawing::Point(802, 1139);
			this->checkBox337->Name = L"checkBox337";
			this->checkBox337->Size = System::Drawing::Size(60, 60);
			this->checkBox337->TabIndex = 328;
			this->checkBox337->TabStop = false;
			this->checkBox337->UseVisualStyleBackColor = true;
			this->checkBox337->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox338
			// 
			this->checkBox338->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox338->Location = System::Drawing::Point(862, 1139);
			this->checkBox338->Name = L"checkBox338";
			this->checkBox338->Size = System::Drawing::Size(60, 60);
			this->checkBox338->TabIndex = 327;
			this->checkBox338->TabStop = false;
			this->checkBox338->UseVisualStyleBackColor = true;
			this->checkBox338->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox339
			// 
			this->checkBox339->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox339->Location = System::Drawing::Point(922, 1139);
			this->checkBox339->Name = L"checkBox339";
			this->checkBox339->Size = System::Drawing::Size(60, 60);
			this->checkBox339->TabIndex = 326;
			this->checkBox339->TabStop = false;
			this->checkBox339->UseVisualStyleBackColor = true;
			this->checkBox339->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox340
			// 
			this->checkBox340->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox340->Location = System::Drawing::Point(982, 1139);
			this->checkBox340->Name = L"checkBox340";
			this->checkBox340->Size = System::Drawing::Size(60, 60);
			this->checkBox340->TabIndex = 325;
			this->checkBox340->TabStop = false;
			this->checkBox340->UseVisualStyleBackColor = true;
			this->checkBox340->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox341
			// 
			this->checkBox341->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox341->Location = System::Drawing::Point(1042, 1139);
			this->checkBox341->Name = L"checkBox341";
			this->checkBox341->Size = System::Drawing::Size(60, 60);
			this->checkBox341->TabIndex = 324;
			this->checkBox341->TabStop = false;
			this->checkBox341->UseVisualStyleBackColor = true;
			this->checkBox341->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox342
			// 
			this->checkBox342->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox342->Location = System::Drawing::Point(1102, 1139);
			this->checkBox342->Name = L"checkBox342";
			this->checkBox342->Size = System::Drawing::Size(60, 60);
			this->checkBox342->TabIndex = 323;
			this->checkBox342->TabStop = false;
			this->checkBox342->UseVisualStyleBackColor = true;
			this->checkBox342->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox343
			// 
			this->checkBox343->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox343->Location = System::Drawing::Point(22, 1199);
			this->checkBox343->Name = L"checkBox343";
			this->checkBox343->Size = System::Drawing::Size(60, 60);
			this->checkBox343->TabIndex = 360;
			this->checkBox343->TabStop = false;
			this->checkBox343->UseVisualStyleBackColor = true;
			this->checkBox343->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox344
			// 
			this->checkBox344->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox344->Location = System::Drawing::Point(82, 1199);
			this->checkBox344->Name = L"checkBox344";
			this->checkBox344->Size = System::Drawing::Size(60, 60);
			this->checkBox344->TabIndex = 359;
			this->checkBox344->TabStop = false;
			this->checkBox344->UseVisualStyleBackColor = true;
			this->checkBox344->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox345
			// 
			this->checkBox345->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox345->Location = System::Drawing::Point(142, 1199);
			this->checkBox345->Name = L"checkBox345";
			this->checkBox345->Size = System::Drawing::Size(60, 60);
			this->checkBox345->TabIndex = 358;
			this->checkBox345->TabStop = false;
			this->checkBox345->UseVisualStyleBackColor = true;
			this->checkBox345->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox346
			// 
			this->checkBox346->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox346->Location = System::Drawing::Point(202, 1199);
			this->checkBox346->Name = L"checkBox346";
			this->checkBox346->Size = System::Drawing::Size(60, 60);
			this->checkBox346->TabIndex = 357;
			this->checkBox346->TabStop = false;
			this->checkBox346->UseVisualStyleBackColor = true;
			this->checkBox346->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox347
			// 
			this->checkBox347->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox347->Location = System::Drawing::Point(262, 1199);
			this->checkBox347->Name = L"checkBox347";
			this->checkBox347->Size = System::Drawing::Size(60, 60);
			this->checkBox347->TabIndex = 356;
			this->checkBox347->TabStop = false;
			this->checkBox347->UseVisualStyleBackColor = true;
			this->checkBox347->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox348
			// 
			this->checkBox348->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox348->Location = System::Drawing::Point(322, 1199);
			this->checkBox348->Name = L"checkBox348";
			this->checkBox348->Size = System::Drawing::Size(60, 60);
			this->checkBox348->TabIndex = 355;
			this->checkBox348->TabStop = false;
			this->checkBox348->UseVisualStyleBackColor = true;
			this->checkBox348->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox349
			// 
			this->checkBox349->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox349->Location = System::Drawing::Point(382, 1199);
			this->checkBox349->Name = L"checkBox349";
			this->checkBox349->Size = System::Drawing::Size(60, 60);
			this->checkBox349->TabIndex = 354;
			this->checkBox349->TabStop = false;
			this->checkBox349->UseVisualStyleBackColor = true;
			this->checkBox349->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox350
			// 
			this->checkBox350->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox350->Location = System::Drawing::Point(442, 1199);
			this->checkBox350->Name = L"checkBox350";
			this->checkBox350->Size = System::Drawing::Size(60, 60);
			this->checkBox350->TabIndex = 353;
			this->checkBox350->TabStop = false;
			this->checkBox350->UseVisualStyleBackColor = true;
			this->checkBox350->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox351
			// 
			this->checkBox351->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox351->Location = System::Drawing::Point(502, 1199);
			this->checkBox351->Name = L"checkBox351";
			this->checkBox351->Size = System::Drawing::Size(60, 60);
			this->checkBox351->TabIndex = 352;
			this->checkBox351->TabStop = false;
			this->checkBox351->UseVisualStyleBackColor = true;
			this->checkBox351->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox352
			// 
			this->checkBox352->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox352->Location = System::Drawing::Point(562, 1199);
			this->checkBox352->Name = L"checkBox352";
			this->checkBox352->Size = System::Drawing::Size(60, 60);
			this->checkBox352->TabIndex = 351;
			this->checkBox352->TabStop = false;
			this->checkBox352->UseVisualStyleBackColor = true;
			this->checkBox352->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox353
			// 
			this->checkBox353->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox353->Location = System::Drawing::Point(622, 1199);
			this->checkBox353->Name = L"checkBox353";
			this->checkBox353->Size = System::Drawing::Size(60, 60);
			this->checkBox353->TabIndex = 350;
			this->checkBox353->TabStop = false;
			this->checkBox353->UseVisualStyleBackColor = true;
			this->checkBox353->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox354
			// 
			this->checkBox354->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox354->Location = System::Drawing::Point(682, 1199);
			this->checkBox354->Name = L"checkBox354";
			this->checkBox354->Size = System::Drawing::Size(60, 60);
			this->checkBox354->TabIndex = 349;
			this->checkBox354->TabStop = false;
			this->checkBox354->UseVisualStyleBackColor = true;
			this->checkBox354->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox355
			// 
			this->checkBox355->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox355->Location = System::Drawing::Point(742, 1199);
			this->checkBox355->Name = L"checkBox355";
			this->checkBox355->Size = System::Drawing::Size(60, 60);
			this->checkBox355->TabIndex = 348;
			this->checkBox355->TabStop = false;
			this->checkBox355->UseVisualStyleBackColor = true;
			this->checkBox355->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox356
			// 
			this->checkBox356->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox356->Location = System::Drawing::Point(802, 1199);
			this->checkBox356->Name = L"checkBox356";
			this->checkBox356->Size = System::Drawing::Size(60, 60);
			this->checkBox356->TabIndex = 347;
			this->checkBox356->TabStop = false;
			this->checkBox356->UseVisualStyleBackColor = true;
			this->checkBox356->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox357
			// 
			this->checkBox357->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox357->Location = System::Drawing::Point(862, 1199);
			this->checkBox357->Name = L"checkBox357";
			this->checkBox357->Size = System::Drawing::Size(60, 60);
			this->checkBox357->TabIndex = 346;
			this->checkBox357->TabStop = false;
			this->checkBox357->UseVisualStyleBackColor = true;
			this->checkBox357->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox358
			// 
			this->checkBox358->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox358->Location = System::Drawing::Point(922, 1199);
			this->checkBox358->Name = L"checkBox358";
			this->checkBox358->Size = System::Drawing::Size(60, 60);
			this->checkBox358->TabIndex = 345;
			this->checkBox358->TabStop = false;
			this->checkBox358->UseVisualStyleBackColor = true;
			this->checkBox358->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox359
			// 
			this->checkBox359->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox359->Location = System::Drawing::Point(982, 1199);
			this->checkBox359->Name = L"checkBox359";
			this->checkBox359->Size = System::Drawing::Size(60, 60);
			this->checkBox359->TabIndex = 344;
			this->checkBox359->TabStop = false;
			this->checkBox359->UseVisualStyleBackColor = true;
			this->checkBox359->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox360
			// 
			this->checkBox360->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox360->Location = System::Drawing::Point(1042, 1199);
			this->checkBox360->Name = L"checkBox360";
			this->checkBox360->Size = System::Drawing::Size(60, 60);
			this->checkBox360->TabIndex = 343;
			this->checkBox360->TabStop = false;
			this->checkBox360->UseVisualStyleBackColor = true;
			this->checkBox360->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// checkBox361
			// 
			this->checkBox361->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox361->Location = System::Drawing::Point(1102, 1199);
			this->checkBox361->Name = L"checkBox361";
			this->checkBox361->Size = System::Drawing::Size(60, 60);
			this->checkBox361->TabIndex = 342;
			this->checkBox361->TabStop = false;
			this->checkBox361->UseVisualStyleBackColor = true;
			this->checkBox361->CheckedChanged += gcnew System::EventHandler(this, &GoGame::checkBox_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(433, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 56);
			this->label1->TabIndex = 361;
			this->label1->Text = L"It is black\'s turn";
			// 
			// GoGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1254, 1352);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox343);
			this->Controls->Add(this->checkBox344);
			this->Controls->Add(this->checkBox345);
			this->Controls->Add(this->checkBox346);
			this->Controls->Add(this->checkBox347);
			this->Controls->Add(this->checkBox348);
			this->Controls->Add(this->checkBox349);
			this->Controls->Add(this->checkBox350);
			this->Controls->Add(this->checkBox351);
			this->Controls->Add(this->checkBox352);
			this->Controls->Add(this->checkBox353);
			this->Controls->Add(this->checkBox354);
			this->Controls->Add(this->checkBox355);
			this->Controls->Add(this->checkBox356);
			this->Controls->Add(this->checkBox357);
			this->Controls->Add(this->checkBox358);
			this->Controls->Add(this->checkBox359);
			this->Controls->Add(this->checkBox360);
			this->Controls->Add(this->checkBox361);
			this->Controls->Add(this->checkBox324);
			this->Controls->Add(this->checkBox325);
			this->Controls->Add(this->checkBox326);
			this->Controls->Add(this->checkBox327);
			this->Controls->Add(this->checkBox328);
			this->Controls->Add(this->checkBox329);
			this->Controls->Add(this->checkBox330);
			this->Controls->Add(this->checkBox331);
			this->Controls->Add(this->checkBox332);
			this->Controls->Add(this->checkBox333);
			this->Controls->Add(this->checkBox334);
			this->Controls->Add(this->checkBox335);
			this->Controls->Add(this->checkBox336);
			this->Controls->Add(this->checkBox337);
			this->Controls->Add(this->checkBox338);
			this->Controls->Add(this->checkBox339);
			this->Controls->Add(this->checkBox340);
			this->Controls->Add(this->checkBox341);
			this->Controls->Add(this->checkBox342);
			this->Controls->Add(this->checkBox305);
			this->Controls->Add(this->checkBox306);
			this->Controls->Add(this->checkBox307);
			this->Controls->Add(this->checkBox308);
			this->Controls->Add(this->checkBox309);
			this->Controls->Add(this->checkBox310);
			this->Controls->Add(this->checkBox311);
			this->Controls->Add(this->checkBox312);
			this->Controls->Add(this->checkBox313);
			this->Controls->Add(this->checkBox314);
			this->Controls->Add(this->checkBox315);
			this->Controls->Add(this->checkBox316);
			this->Controls->Add(this->checkBox317);
			this->Controls->Add(this->checkBox318);
			this->Controls->Add(this->checkBox319);
			this->Controls->Add(this->checkBox320);
			this->Controls->Add(this->checkBox321);
			this->Controls->Add(this->checkBox322);
			this->Controls->Add(this->checkBox323);
			this->Controls->Add(this->checkBox286);
			this->Controls->Add(this->checkBox287);
			this->Controls->Add(this->checkBox288);
			this->Controls->Add(this->checkBox289);
			this->Controls->Add(this->checkBox290);
			this->Controls->Add(this->checkBox291);
			this->Controls->Add(this->checkBox292);
			this->Controls->Add(this->checkBox293);
			this->Controls->Add(this->checkBox294);
			this->Controls->Add(this->checkBox295);
			this->Controls->Add(this->checkBox296);
			this->Controls->Add(this->checkBox297);
			this->Controls->Add(this->checkBox298);
			this->Controls->Add(this->checkBox299);
			this->Controls->Add(this->checkBox300);
			this->Controls->Add(this->checkBox301);
			this->Controls->Add(this->checkBox302);
			this->Controls->Add(this->checkBox303);
			this->Controls->Add(this->checkBox304);
			this->Controls->Add(this->checkBox267);
			this->Controls->Add(this->checkBox268);
			this->Controls->Add(this->checkBox269);
			this->Controls->Add(this->checkBox270);
			this->Controls->Add(this->checkBox271);
			this->Controls->Add(this->checkBox272);
			this->Controls->Add(this->checkBox273);
			this->Controls->Add(this->checkBox274);
			this->Controls->Add(this->checkBox275);
			this->Controls->Add(this->checkBox276);
			this->Controls->Add(this->checkBox277);
			this->Controls->Add(this->checkBox278);
			this->Controls->Add(this->checkBox279);
			this->Controls->Add(this->checkBox280);
			this->Controls->Add(this->checkBox281);
			this->Controls->Add(this->checkBox282);
			this->Controls->Add(this->checkBox283);
			this->Controls->Add(this->checkBox284);
			this->Controls->Add(this->checkBox285);
			this->Controls->Add(this->checkBox248);
			this->Controls->Add(this->checkBox249);
			this->Controls->Add(this->checkBox250);
			this->Controls->Add(this->checkBox251);
			this->Controls->Add(this->checkBox252);
			this->Controls->Add(this->checkBox253);
			this->Controls->Add(this->checkBox254);
			this->Controls->Add(this->checkBox255);
			this->Controls->Add(this->checkBox256);
			this->Controls->Add(this->checkBox257);
			this->Controls->Add(this->checkBox258);
			this->Controls->Add(this->checkBox259);
			this->Controls->Add(this->checkBox260);
			this->Controls->Add(this->checkBox261);
			this->Controls->Add(this->checkBox262);
			this->Controls->Add(this->checkBox263);
			this->Controls->Add(this->checkBox264);
			this->Controls->Add(this->checkBox265);
			this->Controls->Add(this->checkBox266);
			this->Controls->Add(this->checkBox229);
			this->Controls->Add(this->checkBox230);
			this->Controls->Add(this->checkBox231);
			this->Controls->Add(this->checkBox232);
			this->Controls->Add(this->checkBox233);
			this->Controls->Add(this->checkBox234);
			this->Controls->Add(this->checkBox235);
			this->Controls->Add(this->checkBox236);
			this->Controls->Add(this->checkBox237);
			this->Controls->Add(this->checkBox238);
			this->Controls->Add(this->checkBox239);
			this->Controls->Add(this->checkBox240);
			this->Controls->Add(this->checkBox241);
			this->Controls->Add(this->checkBox242);
			this->Controls->Add(this->checkBox243);
			this->Controls->Add(this->checkBox244);
			this->Controls->Add(this->checkBox245);
			this->Controls->Add(this->checkBox246);
			this->Controls->Add(this->checkBox247);
			this->Controls->Add(this->checkBox210);
			this->Controls->Add(this->checkBox211);
			this->Controls->Add(this->checkBox212);
			this->Controls->Add(this->checkBox213);
			this->Controls->Add(this->checkBox214);
			this->Controls->Add(this->checkBox215);
			this->Controls->Add(this->checkBox216);
			this->Controls->Add(this->checkBox217);
			this->Controls->Add(this->checkBox218);
			this->Controls->Add(this->checkBox219);
			this->Controls->Add(this->checkBox220);
			this->Controls->Add(this->checkBox221);
			this->Controls->Add(this->checkBox222);
			this->Controls->Add(this->checkBox223);
			this->Controls->Add(this->checkBox224);
			this->Controls->Add(this->checkBox225);
			this->Controls->Add(this->checkBox226);
			this->Controls->Add(this->checkBox227);
			this->Controls->Add(this->checkBox228);
			this->Controls->Add(this->checkBox191);
			this->Controls->Add(this->checkBox192);
			this->Controls->Add(this->checkBox193);
			this->Controls->Add(this->checkBox194);
			this->Controls->Add(this->checkBox195);
			this->Controls->Add(this->checkBox196);
			this->Controls->Add(this->checkBox197);
			this->Controls->Add(this->checkBox198);
			this->Controls->Add(this->checkBox199);
			this->Controls->Add(this->checkBox200);
			this->Controls->Add(this->checkBox201);
			this->Controls->Add(this->checkBox202);
			this->Controls->Add(this->checkBox203);
			this->Controls->Add(this->checkBox204);
			this->Controls->Add(this->checkBox205);
			this->Controls->Add(this->checkBox206);
			this->Controls->Add(this->checkBox207);
			this->Controls->Add(this->checkBox208);
			this->Controls->Add(this->checkBox209);
			this->Controls->Add(this->checkBox172);
			this->Controls->Add(this->checkBox173);
			this->Controls->Add(this->checkBox174);
			this->Controls->Add(this->checkBox175);
			this->Controls->Add(this->checkBox176);
			this->Controls->Add(this->checkBox177);
			this->Controls->Add(this->checkBox178);
			this->Controls->Add(this->checkBox179);
			this->Controls->Add(this->checkBox180);
			this->Controls->Add(this->checkBox181);
			this->Controls->Add(this->checkBox182);
			this->Controls->Add(this->checkBox183);
			this->Controls->Add(this->checkBox184);
			this->Controls->Add(this->checkBox185);
			this->Controls->Add(this->checkBox186);
			this->Controls->Add(this->checkBox187);
			this->Controls->Add(this->checkBox188);
			this->Controls->Add(this->checkBox189);
			this->Controls->Add(this->checkBox190);
			this->Controls->Add(this->checkBox153);
			this->Controls->Add(this->checkBox154);
			this->Controls->Add(this->checkBox155);
			this->Controls->Add(this->checkBox156);
			this->Controls->Add(this->checkBox157);
			this->Controls->Add(this->checkBox158);
			this->Controls->Add(this->checkBox159);
			this->Controls->Add(this->checkBox160);
			this->Controls->Add(this->checkBox161);
			this->Controls->Add(this->checkBox162);
			this->Controls->Add(this->checkBox163);
			this->Controls->Add(this->checkBox164);
			this->Controls->Add(this->checkBox165);
			this->Controls->Add(this->checkBox166);
			this->Controls->Add(this->checkBox167);
			this->Controls->Add(this->checkBox168);
			this->Controls->Add(this->checkBox169);
			this->Controls->Add(this->checkBox170);
			this->Controls->Add(this->checkBox171);
			this->Controls->Add(this->checkBox134);
			this->Controls->Add(this->checkBox135);
			this->Controls->Add(this->checkBox136);
			this->Controls->Add(this->checkBox137);
			this->Controls->Add(this->checkBox138);
			this->Controls->Add(this->checkBox139);
			this->Controls->Add(this->checkBox140);
			this->Controls->Add(this->checkBox141);
			this->Controls->Add(this->checkBox142);
			this->Controls->Add(this->checkBox143);
			this->Controls->Add(this->checkBox144);
			this->Controls->Add(this->checkBox145);
			this->Controls->Add(this->checkBox146);
			this->Controls->Add(this->checkBox147);
			this->Controls->Add(this->checkBox148);
			this->Controls->Add(this->checkBox149);
			this->Controls->Add(this->checkBox150);
			this->Controls->Add(this->checkBox151);
			this->Controls->Add(this->checkBox152);
			this->Controls->Add(this->checkBox115);
			this->Controls->Add(this->checkBox116);
			this->Controls->Add(this->checkBox117);
			this->Controls->Add(this->checkBox118);
			this->Controls->Add(this->checkBox119);
			this->Controls->Add(this->checkBox120);
			this->Controls->Add(this->checkBox121);
			this->Controls->Add(this->checkBox122);
			this->Controls->Add(this->checkBox123);
			this->Controls->Add(this->checkBox124);
			this->Controls->Add(this->checkBox125);
			this->Controls->Add(this->checkBox126);
			this->Controls->Add(this->checkBox127);
			this->Controls->Add(this->checkBox128);
			this->Controls->Add(this->checkBox129);
			this->Controls->Add(this->checkBox130);
			this->Controls->Add(this->checkBox131);
			this->Controls->Add(this->checkBox132);
			this->Controls->Add(this->checkBox133);
			this->Controls->Add(this->checkBox96);
			this->Controls->Add(this->checkBox97);
			this->Controls->Add(this->checkBox98);
			this->Controls->Add(this->checkBox99);
			this->Controls->Add(this->checkBox100);
			this->Controls->Add(this->checkBox101);
			this->Controls->Add(this->checkBox102);
			this->Controls->Add(this->checkBox103);
			this->Controls->Add(this->checkBox104);
			this->Controls->Add(this->checkBox105);
			this->Controls->Add(this->checkBox106);
			this->Controls->Add(this->checkBox107);
			this->Controls->Add(this->checkBox108);
			this->Controls->Add(this->checkBox109);
			this->Controls->Add(this->checkBox110);
			this->Controls->Add(this->checkBox111);
			this->Controls->Add(this->checkBox112);
			this->Controls->Add(this->checkBox113);
			this->Controls->Add(this->checkBox114);
			this->Controls->Add(this->checkBox77);
			this->Controls->Add(this->checkBox78);
			this->Controls->Add(this->checkBox79);
			this->Controls->Add(this->checkBox80);
			this->Controls->Add(this->checkBox81);
			this->Controls->Add(this->checkBox82);
			this->Controls->Add(this->checkBox83);
			this->Controls->Add(this->checkBox84);
			this->Controls->Add(this->checkBox85);
			this->Controls->Add(this->checkBox86);
			this->Controls->Add(this->checkBox87);
			this->Controls->Add(this->checkBox88);
			this->Controls->Add(this->checkBox89);
			this->Controls->Add(this->checkBox90);
			this->Controls->Add(this->checkBox91);
			this->Controls->Add(this->checkBox92);
			this->Controls->Add(this->checkBox93);
			this->Controls->Add(this->checkBox94);
			this->Controls->Add(this->checkBox95);
			this->Controls->Add(this->checkBox58);
			this->Controls->Add(this->checkBox59);
			this->Controls->Add(this->checkBox60);
			this->Controls->Add(this->checkBox61);
			this->Controls->Add(this->checkBox62);
			this->Controls->Add(this->checkBox63);
			this->Controls->Add(this->checkBox64);
			this->Controls->Add(this->checkBox65);
			this->Controls->Add(this->checkBox66);
			this->Controls->Add(this->checkBox67);
			this->Controls->Add(this->checkBox68);
			this->Controls->Add(this->checkBox69);
			this->Controls->Add(this->checkBox70);
			this->Controls->Add(this->checkBox71);
			this->Controls->Add(this->checkBox72);
			this->Controls->Add(this->checkBox73);
			this->Controls->Add(this->checkBox74);
			this->Controls->Add(this->checkBox75);
			this->Controls->Add(this->checkBox76);
			this->Controls->Add(this->checkBox39);
			this->Controls->Add(this->checkBox40);
			this->Controls->Add(this->checkBox41);
			this->Controls->Add(this->checkBox42);
			this->Controls->Add(this->checkBox43);
			this->Controls->Add(this->checkBox44);
			this->Controls->Add(this->checkBox45);
			this->Controls->Add(this->checkBox46);
			this->Controls->Add(this->checkBox47);
			this->Controls->Add(this->checkBox48);
			this->Controls->Add(this->checkBox49);
			this->Controls->Add(this->checkBox50);
			this->Controls->Add(this->checkBox51);
			this->Controls->Add(this->checkBox52);
			this->Controls->Add(this->checkBox53);
			this->Controls->Add(this->checkBox54);
			this->Controls->Add(this->checkBox55);
			this->Controls->Add(this->checkBox56);
			this->Controls->Add(this->checkBox57);
			this->Controls->Add(this->checkBox20);
			this->Controls->Add(this->checkBox21);
			this->Controls->Add(this->checkBox22);
			this->Controls->Add(this->checkBox23);
			this->Controls->Add(this->checkBox24);
			this->Controls->Add(this->checkBox25);
			this->Controls->Add(this->checkBox26);
			this->Controls->Add(this->checkBox27);
			this->Controls->Add(this->checkBox28);
			this->Controls->Add(this->checkBox29);
			this->Controls->Add(this->checkBox30);
			this->Controls->Add(this->checkBox31);
			this->Controls->Add(this->checkBox32);
			this->Controls->Add(this->checkBox33);
			this->Controls->Add(this->checkBox34);
			this->Controls->Add(this->checkBox35);
			this->Controls->Add(this->checkBox36);
			this->Controls->Add(this->checkBox37);
			this->Controls->Add(this->checkBox38);
			this->Controls->Add(this->checkBox19);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GoGame";
			this->Text = L"GoGame";
			this->Load += gcnew System::EventHandler(this, &GoGame::GoGame_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Coordinates checkBoxCoordinates(System::Windows::Forms::CheckBox^ checkBox) {
			Coordinates point; 
			for (int i = 0; i < 361; i++) {
				if (board[i]->Equals(checkBox)) {
					point = virtualBoard->at(i);
					break; 
				}
			}
			return point;
		}

		CheckBox^ checkBoxPointer(Coordinates *coords) {
			int index = coords->x + coords->y * 19;
			return board[index];
		}

	private: System::Void checkBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		//only run the functions if the box is now checked
		if (safe_cast<CheckBox^>(sender)->Checked){
			//lock the box so it cannot be clicked again before cleared
			safe_cast<CheckBox^>(sender)->Enabled = false;
			//update the virtual board so the computer can figure out what shapes belong together
			updateVirtualBoard(safe_cast<CheckBox^>(sender));
			//update the appearance of the tile and change the turn counter
			colorTile(safe_cast<CheckBox^>(sender));
			//compile shapes - make lists of all the shapes and count the liberties of each
			compileShapes();
			//delete shapes with no liberties (possible moves)
			deleteShapesWithNoLiberties();
			//Change turn
			changeTurn();
		}
	}
	
	void changeTurn() {
		if (turn == 'w') {
			turn = 'b'; 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Text = L"It is black's turn";
		}
		else {
			turn = 'w';
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Text = L"It is white's turn";
		}
	}

	void  colorTile(System::Windows::Forms::CheckBox^ checkBox) {
		if (turn == 'b') {
			checkBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
		}
		else {
			checkBox->BackColor = System::Drawing::SystemColors::Info;
		}
	}
	void  updateVirtualBoard(System::Windows::Forms::CheckBox^ checkBox, char side) {
		for (int i = 0; i < 361; i++) {
			if (board[i]->Equals(checkBox)) {
				virtualBoard->at(i).owner=side;
				break;
			}
		}
	}
	void  updateVirtualBoard(System::Windows::Forms::CheckBox^ checkBox) {
		for (int i = 0; i < 361; i++) {
			if (board[i]->Equals(checkBox)) {
				virtualBoard->at(i).owner = turn;
				break;
			}
		}
	}
	void  lockCheckbox(System::Windows::Forms::CheckBox^ checkbox) {

		if (checkbox->Checked) {
			//run this if checked
			checkbox->Enabled = false; 
		} else {
			//run this if no longer checked to re-enable user access
			checkbox->Enabled = true;
			checkbox->BackColor = System::Drawing::SystemColors::Control;
		}
	}
	void  compileShapes() {
		Coordinates *currentBoardPosition; 
		Coordinates *upperTile;
		Coordinates *lowerTile;
		Coordinates *leftTile;
		Coordinates *rightTile;
		int currentLiberties; 
		std::vector<int> shapesPresent; 

		int DEFAULT_SHAPE_NUMBER_WHICH_IS_TOO_BIG = 999; //reprinted from the initialization above because every coordinate has this by default
		
		//clear the shapes list because they may have changed too substatially to be reused
		shapesList->clear(); 
	

		//reset the virtual board shape variables as they may no longer be valid
		for (int i = 0; i < 361; i++){
			virtualBoard->at(i).shapeNumber = DEFAULT_SHAPE_NUMBER_WHICH_IS_TOO_BIG;
		}

	//iterate through the virtual board
		for (int i = 0; i < 361; i++) {
			currentBoardPosition = &virtualBoard->at(i);
			if (currentBoardPosition->owner != 'n') {
				//reset the liberties and current shapes
				shapesPresent.clear();
				currentLiberties = 0;
				//get the current position
				
				//check surronding tiles are valid
				bool hasUpperTile = currentBoardPosition->y - 1 >= 0;
				bool hasLowerTile = currentBoardPosition->y + 1 <= 18;
				bool hasLeftTile = currentBoardPosition->x - 1 >= 0;
				bool hasRightTile = currentBoardPosition->x + 1 <= 18;

				//check to see if any of the surround tiles are claimed and record the shape this one joins 
				//or record a liberty. Track multiple changes 
				if (hasUpperTile) {
					upperTile = &virtualBoard->at(i - 19);
					if (upperTile->owner == 'n') {
						currentLiberties++;
					}
					else if (upperTile->owner == currentBoardPosition->owner) {
						if (upperTile->shapeNumber != DEFAULT_SHAPE_NUMBER_WHICH_IS_TOO_BIG) {
							shapesPresent.push_back(upperTile->shapeNumber);
						}
					}
				}
				if (hasLowerTile) {
					lowerTile = &virtualBoard->at(i + 19);
					if (lowerTile->owner == 'n') {
						currentLiberties++;
					}
					else if (lowerTile->owner == currentBoardPosition->owner) {
						if (lowerTile->shapeNumber != DEFAULT_SHAPE_NUMBER_WHICH_IS_TOO_BIG) {
							shapesPresent.push_back(lowerTile->shapeNumber);
						}
					}
				}
				if (hasLeftTile) {
					leftTile = &virtualBoard->at(i - 1);
					if (leftTile->owner == 'n') {
						currentLiberties++;
					}
					else if (leftTile->owner == currentBoardPosition->owner) {
						if (leftTile->shapeNumber != DEFAULT_SHAPE_NUMBER_WHICH_IS_TOO_BIG) {
							shapesPresent.push_back(leftTile->shapeNumber);
						}
					}
				}
				if (hasRightTile) {
					rightTile = &virtualBoard->at(i + 1);
					if (rightTile->owner == 'n') {
						currentLiberties++;
					}
					else if (rightTile->owner == currentBoardPosition->owner) {
						if (rightTile->shapeNumber != DEFAULT_SHAPE_NUMBER_WHICH_IS_TOO_BIG) {
							shapesPresent.push_back(rightTile->shapeNumber);
						}
					}
				}


				if (shapesPresent.size() == 0) {
					//if there are no shapes present make a new one
					Shape newShape;
					currentBoardPosition->shapeNumber = shapesList->size();
					//virtualBoard->at(i).shapeNumber = currentBoardPosition.shapeNumber;
					newShape.gamePieces.push_back(currentBoardPosition);
					newShape.liberties = currentLiberties;
					newShape.owner = currentBoardPosition->owner;
					shapesList->push_back(newShape);
				}
				else if (shapesPresent.size() == 1) {
					//if there is only one shape add the new coordinates to the existing shape
					currentBoardPosition->shapeNumber = shapesPresent[0];
					//virtualBoard->at(i).shapeNumber = currentBoardPosition.shapeNumber;
					shapesList->at(shapesPresent[0]).gamePieces.push_back(currentBoardPosition);
					shapesList->at(shapesPresent[0]).liberties += currentLiberties;
				}
				else if (shapesPresent.size() > 1) {
					//there are two or more shapes that are now merged
					//first find the lowest numbered shape
					int lowestShapeNumber = DEFAULT_SHAPE_NUMBER_WHICH_IS_TOO_BIG;
					for (unsigned int i = 0; i < shapesPresent.size(); i++) {
						if (shapesPresent[i] < lowestShapeNumber) {
							lowestShapeNumber = shapesPresent[i];
						}
					}

					//then add the new point to the lowest shape number
					currentBoardPosition->shapeNumber = lowestShapeNumber;
					//virtualBoard->at(i).shapeNumber = currentBoardPosition.shapeNumber;
					shapesList->at(lowestShapeNumber).gamePieces.push_back(currentBoardPosition);
					shapesList->at(lowestShapeNumber).liberties += currentLiberties;

										
					//loop once for each shape
					for (unsigned int i = 0; i < shapesPresent.size(); i++) {
						//if the current shape is not the lowest number then merge with the lowest
						//while deleting all the points in the source shapes to leave empty shapes behind
						//which then will not have members but whose deletion would shift the shapeList indices
						if (shapesPresent[i] != lowestShapeNumber) {
							shapesList->at(lowestShapeNumber).liberties += shapesList->at(shapesPresent[i]).liberties;
													
							for (unsigned int k = 0; k < shapesList->at(shapesPresent[i]).gamePieces.size(); k++) {
								//transfer the pieces
								shapesList->at(shapesPresent[i]).gamePieces[k]->shapeNumber = lowestShapeNumber;
								shapesList->at(lowestShapeNumber).gamePieces.push_back(shapesList->at(shapesPresent[i]).gamePieces[k]);
							}
							//delete the piece from the redundant shape
							shapesList->at(shapesPresent[i]).gamePieces.clear();
						}
					}
				}
			}
		}
			
			
	}
	void  deleteShapesWithNoLiberties() {
		System::Windows::Forms::CheckBox^ checkBox; 
		//iterate through the shapes list
		for (unsigned int i = 0; i < shapesList->size(); i++) {
			//if liberties ==0 then delete all of the pieces in the shape
			if (shapesList->at(i).liberties == 0) {
				for (unsigned int k = 0; k < shapesList->at(i).gamePieces.size(); k++) {
					//update the virtual board to have no owner and reset the checkbox
					shapesList->at(i).gamePieces[k]->owner = 'n' ; 
										
					//finding the checkbox by the coordinates 
					checkBox = checkBoxPointer(shapesList->at(i).gamePieces[k]);
					//reset and unlock the checkbox
					checkBox->Checked = false; 
					checkBox->Enabled = true;
					checkBox->BackColor = System::Drawing::SystemColors::Control;
				}
			}
		}
	}

private: System::Void GoGame_Load(System::Object^  sender, System::EventArgs^  e) {
}
};

}