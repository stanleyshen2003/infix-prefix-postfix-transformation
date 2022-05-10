#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(722, 358);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(714, 329);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"infix";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->label3->Location = System::Drawing::Point(89, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"prefix=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->label2->Location = System::Drawing::Point(79, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"postfix=";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->label1->Location = System::Drawing::Point(101, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"infix=";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(559, 202);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 48);
			this->button2->TabIndex = 4;
			this->button2->Text = L"to prefix";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(559, 147);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"to postfix";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->textBox3->Location = System::Drawing::Point(180, 208);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(349, 37);
			this->textBox3->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->textBox1->Location = System::Drawing::Point(180, 52);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(349, 37);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->textBox2->Location = System::Drawing::Point(180, 152);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(349, 37);
			this->textBox2->TabIndex = 2;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(714, 329);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"prefix";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->label4->Location = System::Drawing::Point(101, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 25);
			this->label4->TabIndex = 13;
			this->label4->Text = L"infix=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->label5->Location = System::Drawing::Point(79, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"postfix=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->label6->Location = System::Drawing::Point(89, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"prefix=";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(559, 202);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 48);
			this->button4->TabIndex = 6;
			this->button4->Text = L"to infix";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(559, 147);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 48);
			this->button3->TabIndex = 3;
			this->button3->Text = L"to postfix";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->textBox6->Location = System::Drawing::Point(180, 208);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(349, 37);
			this->textBox6->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->textBox4->Location = System::Drawing::Point(180, 52);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(349, 37);
			this->textBox4->TabIndex = 2;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->textBox5->Location = System::Drawing::Point(180, 152);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(349, 37);
			this->textBox5->TabIndex = 4;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Size = System::Drawing::Size(714, 329);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"postfix";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->label7->Location = System::Drawing::Point(101, 208);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"infix=";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->label8->Location = System::Drawing::Point(89, 154);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"prefix=";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->label9->Location = System::Drawing::Point(79, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 25);
			this->label9->TabIndex = 14;
			this->label9->Text = L"postfix=";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(559, 202);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 48);
			this->button6->TabIndex = 7;
			this->button6->Text = L"to infix";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(559, 147);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 48);
			this->button5->TabIndex = 4;
			this->button5->Text = L"to prefix";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->textBox9->Location = System::Drawing::Point(180, 208);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(349, 37);
			this->textBox9->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->textBox7->Location = System::Drawing::Point(180, 52);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(349, 37);
			this->textBox7->TabIndex = 3;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->textBox8->Location = System::Drawing::Point(180, 152);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(349, 37);
			this->textBox8->TabIndex = 5;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 358);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Infix/Postfix/Prefix Transformations";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		static array<String^>^ Stack = gcnew array<String^>(100);
		static array<String^>^ Stackopn = gcnew array<String^>(100);
		static array<String^>^ Stackopr = gcnew array<String^>(100);
		static int top = -1;
		static int opn_top = -1;
		static int opr_top = -1;
		void push(int stack, String^ input) {
			if (stack == 0)
				Stack[++top] = input;
			if (stack == 1)
				Stackopn[++opn_top] = input;
			if (stack == 2)
				Stackopr[++opr_top] = input;
		}
		String^ pop(int stack) {
			if (stack == 0)
				return Stack[top--];
			if (stack == 1)
				return Stackopn[opn_top--];
			if (stack == 2)
				return Stackopr[opr_top--];
		}
		bool IsOperand(String^ s) {
			if ((s != "+") && (s != "-") && (s != "*") && (s != "/") && (s != "(") && (s != ")") && (s != "^") && (s != "#"))
				return true;
			return false;
		}

		int order(String^ op, bool after) {
			if ((op == "+") || (op == "-"))
				return 4;
			if ((op == "*") || (op == "/") || (op == "%"))
				return 5;
			if (op == "^")
				return 6;
			if (op == "(") {
				if (after)
					return 1;
				else
					return 8;
			}
			if (op == ")") {
				if (after)
					return 1;
				else
					return 8;
			}
			if (op == "#")
				return 0;
			if (op == "@")
				return 7;
		}
		String^ Infix2Postfix(String^ infix) {
			String^ postfix = "";
			String^ s, ^ x, ^ y;
			push(0, "#");
			for (int i = 0; i < infix->Length; i++) {
				s = "";
				s += infix[i];
				if (IsOperand(s))
					postfix += s;
				else if (s == ")") {
					while ((x = pop(0)) != "(")
						postfix += x;
				}
				else {
					while (order(s, false) <= order(y = pop(0), true))
						postfix += y;
					push(0, y);
					push(0, s);
				}
			}
			while ((s = pop(0)) != "#")
				postfix += s;
			return postfix;
		}
		String^ Infix2Prefix(String^ infix) {
			String^ prefix = "";
			String^ ans = "";
			String^ s, ^ x, ^ y;
			push(0, "#");
			for (int i = infix->Length - 1; i >= 0; i--) {
				s = "";
				s += infix[i];
				if (IsOperand(s))
					prefix += s;
				else if (s == "(") {
					while ((x = pop(0)) != ")")
						prefix += x;
				}
				else {
					while (order(s, false) < order(y = pop(0), true))
						prefix += y;
					push(0, y);
					push(0, s);
				}
			}
			while ((s = pop(0)) != "#")
				prefix += s;
			for (int i = prefix->Length - 1; i >= 0; i--)
				ans += prefix[i];
			return ans;
		}
		String^ Prefix2Postfix(String^ prefix) {
			String^ s, ^ x, ^ y;
			push(0, "#");
			for (int i = 0; i < prefix->Length; i++) {
				s = "";
				s += prefix[i];
				if (IsOperand(s)) {
					while (IsOperand(Stack[top])) {
						y = pop(0);
						x = pop(0);
						s = y + s + x;
					}
					push(0, s);
				}
				else
					push(0, s);
			}
			return pop(0);
		}
		String^ Prefix2Infix(String^ prefix) {
			String^ s, ^ s1, ^ s2, ^ x, ^ y, ^ ans = "";
			for (int i = prefix->Length - 1; i >= 0; i--) {
				s = "";
				s += prefix[i];
				if (IsOperand(s)) {
					push(1, s);
					push(2, "@");
				}
				else {
					s1 = pop(2);
					s2 = pop(2);
					x = pop(1);
					y = pop(1);
					if (order(s, false) > order(s1, false) || (s == "-" && order(s, false) >= order(s1, false)) || (s == "/" && order(s, false) >= order(s1, false))) {
						if (x->Length != 1)
							x = ")" + x + "(";
					}

					if (order(s, false) > order(s2, false)) {
						if (y->Length != 1)
							y = ")" + y + "(";
					}

					push(1, y + s + x);
					push(2, s);
				}
			}
			while (opr_top != -1)
				x = pop(2);
			s = pop(1);
			for (int i = s->Length - 1;i >= 0;i--)
				ans += s[i];
			return ans;
		}
		String^ Postfix2Prefix(String^ postfix) {
			String^ s, ^ x, ^ y;
			push(0, "#");
			for (int i = 0; i < postfix->Length; i++) {
				s = "";
				s += postfix[i];
				if (IsOperand(s))
					push(0, s);
				else {
					y = pop(0);
					x = pop(0);
					s = s + x + y;
					push(0, s);
				}
			}
			return pop(0);
		}
		String^ Postfix2Infix(String^ postfix) {
			String^ s, ^ s1, ^ s2, ^ x, ^ y;
			for (int i = 0; i < postfix->Length; i++) {
				s = "";
				s += postfix[i];
				if (IsOperand(s)) {
					push(1, s);
					push(2, "@");
				}
				else {
					s1 = pop(2);
					s2 = pop(2);
					x = pop(1);
					y = pop(1);
					if (order(s, false) > order(s1, false) || (s == "-" && order(s, false) >= order(s1, false)) || (s == "/" && order(s, false) >= order(s1, false))) {
						if (x->Length != 1)
							x = "(" + x + ")";
					}

					if (order(s, false) > order(s2, false)) {
						if (y->Length != 1)
							y = "(" + y + ")";
					}
					push(1, y + s + x);
					push(2, s);
				}
			}
			while (opr_top != -1)
				x = pop(2);
			return pop(1);
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ infix = textBox1->Text;
		String^ postfix;
		postfix = Infix2Postfix(infix);
		textBox2->Text = postfix;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ infix = textBox1->Text;
		String^ prefix;
		prefix = Infix2Prefix(infix);
		textBox3->Text = prefix;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ prefix = textBox4->Text;
		String^ postfix;
		postfix = Prefix2Postfix(prefix);
		textBox5->Text = postfix;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ prefix = textBox4->Text;
		String^ infix;
		infix = Prefix2Infix(prefix);
		textBox6->Text = infix;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ postfix = textBox7->Text;
		String^ prefix;
		prefix = Postfix2Prefix(postfix);
		textBox8->Text = prefix;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ postfix = textBox7->Text;
		String^ infix;
		infix = Postfix2Infix(postfix);
		textBox9->Text = infix;
	}
	};
}
