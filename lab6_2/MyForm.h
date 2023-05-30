#pragma once

namespace lab6_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 434);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Чабан Ольга";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 289);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(282, 121);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"13. Знайти суму квадратів елементів двовимірного масиву. Виконати сортування парн"
				L"их стовпців за \r\nспаданням.";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(297, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(449, 372);
			this->dataGridView1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"n = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"m = ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(45, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(70, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(46, 94);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(69, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(470, 402);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(82, 22);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(336, 405);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Сума квадратів";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(179, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 43);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Сума квадратів";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(179, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 61);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Посортувати парні стовпці";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 144);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 72);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Заповнити масив випадковими числами";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 489);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// встановлення значення кількості рядків
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->RowCount = Convert::ToInt32(textBox2->Text);
	}
	// встановлення значення кількості стовбців
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ColumnCount = Convert::ToInt32(textBox3->Text);
	}
	// заповнення матриці вирадковими числами від -100 до 100
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = Convert::ToInt32(textBox2->Text);
		int m = Convert::ToInt32(textBox3->Text);
	
		Random^ rnd = gcnew Random();
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				dataGridView1[j, i]->Value = Convert::ToString(rnd->Next(-100, 101));
	}
	// сортування парних за індесом стовпців двовимірного масиву
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int n = Convert::ToInt32(textBox2->Text);
		int m = Convert::ToInt32(textBox3->Text);
		for (int k = 0; k < m; k += 2) 
		{
			for (int i = 0; i < n - 1; ++i) 
			{
				for (int j = 0; j < n - i - 1; ++j)
				{
					int a = Convert::ToInt32(dataGridView1[k, j]->Value);
					int b = Convert::ToInt32(dataGridView1[k, j + 1]->Value);
					if (a > b) 
					{
						int tmp = Convert::ToInt32(dataGridView1[k, j]->Value);
						dataGridView1[k, j]->Value = Convert::ToInt32(dataGridView1[k, j + 1]->Value);
						dataGridView1[k, j + 1]->Value = tmp;
					}
				}
			}
		}

		
	}
	// обчислення суми квадратів елементів двовимірного масиву
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = Convert::ToInt32(textBox2->Text);
	int m = Convert::ToInt32(textBox3->Text);

	int square_sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int a = Convert::ToInt32(dataGridView1[j, i]->Value);
			square_sum += a * a;
		}
	}

	textBox4->Text = square_sum.ToString();	
}
};
}
