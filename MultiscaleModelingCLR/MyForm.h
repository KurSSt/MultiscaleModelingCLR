#pragma once

namespace MultiscaleModelingCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	#include <stdlib.h>;


	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->pictureBox1->Size = System::Drawing::Size(100, 50); //overide picture box

			//Setting New Image
			//Bitmap^ bitmap1;
			//bitmap1 = gcnew Bitmap(100, 50);
			//for (int i = 0; i < 99; i++)
			//{
			//	Color newColor = Color::Red;
			//	bitmap1->SetPixel(i, 10, newColor);
			//}
			//this->pictureBox1->Image = bitmap1;
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Drawing::Bitmap^ currentBitmap;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	array<int, 2>^ finalMatrix;
	array<int, 2>^ firstIterateMatrix;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	protected:

	protected:

	private:

		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(515, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 76);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(168, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw cross";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(168, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(168, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Set X size";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(168, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Set Y Size";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(256, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"calculate arrays";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(168, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(163, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(168, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Starting pixels";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Von Neuman", L"Moore", L"Pentagonal random",
					L"Hexagonal random"
			});
			this->comboBox1->Location = System::Drawing::Point(21, 41);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(393, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Grain Growth";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(396, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(399, 104);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"label6";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(949, 261);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		int numberToCheckForParsing; // need to check if input is a number not a string
		if (!int::TryParse(textBox1->Text, numberToCheckForParsing))
		{
			MessageBox::Show("First box wasn't an integer. You need to type int");
			return;
		}
		else
		{
			int xValue;
			xValue = Convert::ToInt32(textBox1->Text);

			this->pictureBox1->Size = System::Drawing::Size(xValue, this->pictureBox1->Size.Height); //overide picture box

			drawSquare();

		}
	}

	private: System::Void drawSquare()
	{
		//Draw borders of image
		Bitmap^ bitmap1;
		bitmap1 = gcnew Bitmap(pictureBox1->Size.Width, pictureBox1->Size.Height);
		currentBitmap = gcnew Bitmap(pictureBox1->Size.Width, pictureBox1->Size.Height);
		for (int i = 0; i < pictureBox1->Size.Width; i++)
		{
			Color newColor = Color::Red;
			bitmap1->SetPixel(i, 0, newColor);
			bitmap1->SetPixel(i, pictureBox1->Size.Height - 1, newColor); //Nie wiem dlaczego musi byc -1 ale inaczej wychodzi poza zasieg
		}

		for (int i = 0; i < pictureBox1->Size.Height; i++)
		{
			Color newColor = Color::Red;
			bitmap1->SetPixel(0, i, newColor);
			bitmap1->SetPixel(pictureBox1->Size.Width - 1, i, newColor); //Nie wiem dlaczego musi byc -1 ale inaczej wychodzi poza zasieg
		}
		this->pictureBox1->Image = bitmap1;
	}

	private: System::Int32 generateRandomNumbers(int range_max, int range_min)
	{

			int u = (double)rand() / (RAND_MAX + 1) * (range_max - range_min)
				+ range_min;

		return u;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		int numberToCheckForParsing; // need to check if input is a number not a string
		if (!int::TryParse(textBox2->Text, numberToCheckForParsing))
		{
			MessageBox::Show("Second box wasn't an integer. You need to type int");
			return;
		}
		else
		{
			int yValue;
			yValue = Convert::ToInt32(textBox2->Text);

			this->pictureBox1->Size = System::Drawing::Size(this->pictureBox1->Size.Width, yValue); //overide picture box

			drawSquare();
		}

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{

	Bitmap^ bitmap1;
	bitmap1 = gcnew Bitmap(pictureBox1->Size.Width, pictureBox1->Size.Height);
	currentBitmap = gcnew Bitmap(pictureBox1->Size.Width, pictureBox1->Size.Height);
	for (int i = 0; i < pictureBox1->Size.Width; i++)
	{

		Color newColor = Color::Red;
		bitmap1->SetPixel(i, pictureBox1->Size.Height/2, newColor);
	}

	for (int i = 0; i < pictureBox1->Size.Height; i++)
	{
		Color newColor = Color::Red;
		bitmap1->SetPixel(pictureBox1->Size.Width / 2, i, newColor);
	}
	this->pictureBox1->Image = bitmap1;



}

private: System::Void drawSmth()
{
	//Draw borders of image
	Bitmap^ bitmap1;
	bitmap1 = gcnew Bitmap(pictureBox1->Size.Width, pictureBox1->Size.Height);
	for (int i = 0; i < pictureBox1->Size.Width; i++)
	{
		Color newColor = Color::Red;
		bitmap1->SetPixel(i, 0, newColor);
		bitmap1->SetPixel(i, pictureBox1->Size.Height - 1, newColor); //Nie wiem dlaczego musi byc -1 ale inaczej wychodzi poza zasieg
	}

	for (int i = 0; i < pictureBox1->Size.Height; i++)
	{
		Color newColor = Color::Red;
		bitmap1->SetPixel(0, i, newColor);
		bitmap1->SetPixel(pictureBox1->Size.Width - 1, i, newColor); //Nie wiem dlaczego musi byc -1 ale inaczej wychodzi poza zasieg
	}
	currentBitmap = bitmap1;
	this->pictureBox1->Image = bitmap1;
}


private: System::Void CheckVonNeuman()
{

	//Segregate Pixels Von Neuman
	int counter = 0;
	int iterationCounter = 150;
	for (int k = 0; k < iterationCounter; k++)
	{
		for (int i = 0; i < pictureBox1->Size.Width; i++)
		{
			for (int j = 0; j < pictureBox1->Size.Height; j++)
			{
				int PositionToFill = finalMatrix[i, j];
				if (PositionToFill != 0)
				{
					counter++;
					//Check Neighbours

					if (i - 1 > 0 && finalMatrix[i - 1, j] == 0)
					{
						firstIterateMatrix[i - 1, j] = PositionToFill;
					}
					if (i + 1 < pictureBox1->Size.Width && finalMatrix[i + 1, j] == 0 && currentBitmap->GetPixel(i + 1, j) != Color::Black)
					{
						firstIterateMatrix[i + 1, j] = PositionToFill;
					}
					if (j - 1 > 0 && finalMatrix[i, j - 1] == 0 && currentBitmap->GetPixel(i, j - 1) != Color::Black)
					{
						firstIterateMatrix[i, j - 1] = PositionToFill;
					}
					if (j + 1 < pictureBox1->Size.Height && finalMatrix[i, j + 1] == 0 && currentBitmap->GetPixel(i, j + 1) != Color::Black)
					{
						firstIterateMatrix[i, j + 1] = PositionToFill;
					}
				}
			}
		}

		if (counter == 0)
		{
			k = iterationCounter;
		}
		counter = 0;
		DiffFirstIterationWithMatrix(false);
	}
}

private: System::Void CheckMoore()
{

	//Segregate Pixels Moore
	int counter = 0;
	int iterationCounter = 1;
	for (int k = 0; k < iterationCounter; k++)
	{
		for (int i = 0; i < pictureBox1->Size.Width; i++)
		{
			for (int j = 0; j < pictureBox1->Size.Height; j++)
			{
				int PositionToFill = finalMatrix[i, j];
				if (PositionToFill != 0)
				{
					counter++;
					//Check Neighbours

					if (i - 1 > 0 && finalMatrix[i - 1, j] == 0) //left
					{
						firstIterateMatrix[i - 1, j] = PositionToFill;
						if (j - 1 > 0 && finalMatrix[i - 1, j - 1] == 0) // left down
						{
							firstIterateMatrix[i - 1, j - 1] = PositionToFill;
						}
						if (j + 1 < pictureBox1->Size.Height) // left up
						{
							firstIterateMatrix[i - 1, j + 1] = PositionToFill;
						}
					}
					if (i + 1 < pictureBox1->Size.Width && finalMatrix[i + 1, j] == 0) // right
					{
						firstIterateMatrix[i + 1, j] = PositionToFill;
						if (j - 1 > 0 && finalMatrix[i - 1, j - 1] == 0) // right down
						{
							firstIterateMatrix[i + 1, j - 1] = PositionToFill;
						}
						if (j + 1 < pictureBox1->Size.Height) // right up
						{
							firstIterateMatrix[i + 1, j + 1] = PositionToFill;
						}
					}
					if (j - 1 > 0 && finalMatrix[i, j - 1] == 0) // down
					{
						firstIterateMatrix[i, j - 1] = PositionToFill;
					}
					if (j + 1 < pictureBox1->Size.Height && finalMatrix[i, j + 1] == 0) // up
					{
						firstIterateMatrix[i, j + 1] = PositionToFill;
					}
				}
			}
		}

		if (counter == 0)
		{
			k = iterationCounter;
		}
		counter = 0;
		DiffFirstIterationWithMatrix(false);
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//Check the value is it int
	int numberToCheckForParsing; // need to check if input is a number not a string
	if (!int::TryParse(textBox3->Text, numberToCheckForParsing))
	{
		MessageBox::Show("Third box wasn't an integer. You need to type int");
		return;
	}
	else
	{
		//Calculate arrays
		int amountOfStartingPixels;
		amountOfStartingPixels = Convert::ToInt32(textBox3->Text);

		// Instantiate random number generator using system-supplied value as seed.

		//Colors for every new pixel
		array<System::Drawing::Color>^ col = gcnew array<System::Drawing::Color>(11)
		{
			Color::Brown,
				Color::Red,
				Color::Orange,
				Color::Green,
				Color::Blue,
				Color::Purple,
				Color::Yellow,
				Color::Pink,
				Color::Gray,
				Color::LightGreen,
				Color::BlueViolet
		};
		Bitmap^ bitmapToIterate;
		bitmapToIterate = currentBitmap;//gcnew Bitmap(pictureBox1->Size.Width, pictureBox1->Size.Height);

		firstIterateMatrix = gcnew array<int, 2>(Size.Width, Size.Height);
		finalMatrix = gcnew array<int, 2>(Size.Width, Size.Height);
		for (int i = 1; i < amountOfStartingPixels; i++)
		{
			int randomX = generateRandomNumbers(1, pictureBox1->Size.Width);
			int randomY = generateRandomNumbers(1, pictureBox1->Size.Height);

			if (finalMatrix[randomX, randomY] == 0)
				finalMatrix[randomX, randomY] = i;
			//Todo if there would be other pixel in this place, he wont be putted
		}


		DiffFirstIterationWithMatrix(true);
		CheckVonNeuman();
		//Diff matrix with Bitmap
		for (int i = 0; i < pictureBox1->Size.Width; i++)
		{
			for (int j = 0; j < pictureBox1->Size.Height; j++)
			{
				int colorToFill = finalMatrix[i, j];
				Color color = bitmapToIterate->GetPixel(i, j);
				float checkColor = (0.2126 * color.R + 0.7152 * color.G + 0.0722 * color.B) / 255;
				bool black = (checkColor < .05) ? true : false;
				if(colorToFill != 0 && !black)
					bitmapToIterate->SetPixel(i, j, col[colorToFill]);
			}
		}
		
		this->pictureBox1->Image = bitmapToIterate;

	}
}

private: System::Void Debug()
{
	Bitmap^ bitmapToIterate;
	bitmapToIterate = gcnew Bitmap(pictureBox1->Size.Width, pictureBox1->Size.Height);

	//Colors for every new pixel
	array<System::Drawing::Color>^ col = gcnew array<System::Drawing::Color>(11)
	{
		Color::Brown,
			Color::Red,
			Color::Orange,
			Color::Green,
			Color::Blue,
			Color::Purple,
			Color::Yellow,
			Color::Pink,
			Color::Gray,
			Color::LightGreen,
			Color::BlueViolet
	};

	for (int i = 0; i < pictureBox1->Size.Width; i++)
	{
		for (int j = 0; j < pictureBox1->Size.Height; j++)
		{
			int colorToFill = finalMatrix[i, j];
			if (colorToFill != 0)
				bitmapToIterate->SetPixel(i, j, col[colorToFill]);
		}
	}

	this->pictureBox1->Image = bitmapToIterate;
}



private: System::Void DiffFirstIterationWithMatrix(bool firstIterationEqFinalMatrix)
{
	if (firstIterationEqFinalMatrix)
	{
		for (int i = 0; i < pictureBox1->Size.Width; i++)
		{
			for (int j = 0; j < pictureBox1->Size.Height; j++)
			{
				firstIterateMatrix[i, j] = finalMatrix[i, j];
			}
		}
	}
	else
	{
		for (int i = 0; i < pictureBox1->Size.Width; i++)
		{
			for (int j = 0; j < pictureBox1->Size.Height; j++)
			{
				finalMatrix[i, j] = firstIterateMatrix[i, j];
			}
		}
	}

}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Bitmap^ bitmap1;
	bitmap1 = currentBitmap;
	int XPositon = pictureBox1->PointToClient(MousePosition).X;
	int YPositon = pictureBox1->PointToClient(MousePosition).Y;
	Color newColor = Color::Black;
	bitmap1->SetPixel(XPositon, YPositon, newColor);

	pictureBox1->Image = bitmap1;
}
};
}
