#pragma once

namespace GameSnake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void);
	

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ новаяИграToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ паузаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ информацияОбИгреToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBoxGameData;
	private: System::Windows::Forms::Label^ labelScore;
	private: System::Windows::Forms::GroupBox^ groupBoxSettings;


	private: System::Windows::Forms::Button^ buttonApplySpeed;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSpeedSnake;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ UpperBorder;
	private: System::Windows::Forms::PictureBox^ LowerBorder;
	private: System::Windows::Forms::PictureBox^ LeftBorder;

	private: System::Windows::Forms::PictureBox^ RigtBorder;




	private: System::Windows::Forms::Timer^ timer;


	private: System::Windows::Forms::Label^ labelGameOver;
	private: System::Windows::Forms::Label^ labelCoordinatesSnake;

	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->новаяИграToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->паузаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->информацияОбИгреToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxGameData = (gcnew System::Windows::Forms::GroupBox());
			this->labelCoordinatesSnake = (gcnew System::Windows::Forms::Label());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->buttonApplySpeed = (gcnew System::Windows::Forms::Button());
			this->numericUpDownSpeedSnake = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->UpperBorder = (gcnew System::Windows::Forms::PictureBox());
			this->LowerBorder = (gcnew System::Windows::Forms::PictureBox());
			this->LeftBorder = (gcnew System::Windows::Forms::PictureBox());
			this->RigtBorder = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelGameOver = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBoxGameData->SuspendLayout();
			this->groupBoxSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedSnake))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RigtBorder))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->менюToolStripMenuItem,
					this->информацияОбИгреToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(549, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->новаяИграToolStripMenuItem,
					this->паузаToolStripMenuItem, this->настройкиToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->менюToolStripMenuItem->Text = L"Меню ";
			// 
			// новаяИграToolStripMenuItem
			// 
			this->новаяИграToolStripMenuItem->Name = L"новаяИграToolStripMenuItem";
			this->новаяИграToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->новаяИграToolStripMenuItem->Text = L"Новая игра";
			this->новаяИграToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::новаяИграToolStripMenuItem_Click);
			// 
			// паузаToolStripMenuItem
			// 
			this->паузаToolStripMenuItem->Name = L"паузаToolStripMenuItem";
			this->паузаToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->паузаToolStripMenuItem->Text = L"Пауза/продолжить";
			this->паузаToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::паузаToolStripMenuItem_Click);
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			this->настройкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::настройкиToolStripMenuItem_Click);
			// 
			// информацияОбИгреToolStripMenuItem
			// 
			this->информацияОбИгреToolStripMenuItem->Name = L"информацияОбИгреToolStripMenuItem";
			this->информацияОбИгреToolStripMenuItem->Size = System::Drawing::Size(138, 20);
			this->информацияОбИгреToolStripMenuItem->Text = L"Информация об игре";
			this->информацияОбИгреToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::информацияОбИгреToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::выходToolStripMenuItem_Click);
			// 
			// groupBoxGameData
			// 
			this->groupBoxGameData->Controls->Add(this->labelCoordinatesSnake);
			this->groupBoxGameData->Controls->Add(this->labelScore);
			this->groupBoxGameData->Location = System::Drawing::Point(12, 27);
			this->groupBoxGameData->Name = L"groupBoxGameData";
			this->groupBoxGameData->Size = System::Drawing::Size(312, 57);
			this->groupBoxGameData->TabIndex = 1;
			this->groupBoxGameData->TabStop = false;
			this->groupBoxGameData->Text = L" Данные игры";
			// 
			// labelCoordinatesSnake
			// 
			this->labelCoordinatesSnake->AutoSize = true;
			this->labelCoordinatesSnake->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCoordinatesSnake->Location = System::Drawing::Point(103, 21);
			this->labelCoordinatesSnake->Name = L"labelCoordinatesSnake";
			this->labelCoordinatesSnake->Size = System::Drawing::Size(183, 16);
			this->labelCoordinatesSnake->TabIndex = 8;
			this->labelCoordinatesSnake->Text = L"Координаты змейки(x,y)";
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore->Location = System::Drawing::Point(6, 16);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(70, 24);
			this->labelScore->TabIndex = 2;
			this->labelScore->Text = L"Счет: 0";
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Controls->Add(this->buttonApplySpeed);
			this->groupBoxSettings->Controls->Add(this->numericUpDownSpeedSnake);
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Location = System::Drawing::Point(195, 315);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Size = System::Drawing::Size(179, 95);
			this->groupBoxSettings->TabIndex = 2;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"Настройки";
			this->groupBoxSettings->Visible = false;
			// 
			// buttonApplySpeed
			// 
			this->buttonApplySpeed->Location = System::Drawing::Point(25, 58);
			this->buttonApplySpeed->Name = L"buttonApplySpeed";
			this->buttonApplySpeed->Size = System::Drawing::Size(75, 23);
			this->buttonApplySpeed->TabIndex = 2;
			this->buttonApplySpeed->Text = L"применить";
			this->buttonApplySpeed->UseVisualStyleBackColor = true;
			this->buttonApplySpeed->Click += gcnew System::EventHandler(this, &GameForm::buttonApplySpeed_Click);
			// 
			// numericUpDownSpeedSnake
			// 
			this->numericUpDownSpeedSnake->Location = System::Drawing::Point(9, 32);
			this->numericUpDownSpeedSnake->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSpeedSnake->Name = L"numericUpDownSpeedSnake";
			this->numericUpDownSpeedSnake->Size = System::Drawing::Size(120, 20);
			this->numericUpDownSpeedSnake->TabIndex = 1;
			this->numericUpDownSpeedSnake->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Введите скорость змейки:";
			// 
			// UpperBorder
			// 
			this->UpperBorder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->UpperBorder->Location = System::Drawing::Point(0, 90);
			this->UpperBorder->Name = L"UpperBorder";
			this->UpperBorder->Size = System::Drawing::Size(550, 10);
			this->UpperBorder->TabIndex = 3;
			this->UpperBorder->TabStop = false;
			// 
			// LowerBorder
			// 
			this->LowerBorder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LowerBorder->Location = System::Drawing::Point(0, 630);
			this->LowerBorder->Name = L"LowerBorder";
			this->LowerBorder->Size = System::Drawing::Size(550, 10);
			this->LowerBorder->TabIndex = 4;
			this->LowerBorder->TabStop = false;
			// 
			// LeftBorder
			// 
			this->LeftBorder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LeftBorder->Location = System::Drawing::Point(0, 90);
			this->LeftBorder->Name = L"LeftBorder";
			this->LeftBorder->Size = System::Drawing::Size(10, 550);
			this->LeftBorder->TabIndex = 5;
			this->LeftBorder->TabStop = false;
			// 
			// RigtBorder
			// 
			this->RigtBorder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->RigtBorder->Location = System::Drawing::Point(540, 90);
			this->RigtBorder->Name = L"RigtBorder";
			this->RigtBorder->Size = System::Drawing::Size(10, 550);
			this->RigtBorder->TabIndex = 6;
			this->RigtBorder->TabStop = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &GameForm::GameForm_Update);
			// 
			// labelGameOver
			// 
			this->labelGameOver->AutoSize = true;
			this->labelGameOver->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelGameOver->Location = System::Drawing::Point(190, 211);
			this->labelGameOver->Name = L"labelGameOver";
			this->labelGameOver->Size = System::Drawing::Size(184, 50);
			this->labelGameOver->TabIndex = 7;
			this->labelGameOver->Text = L"Game Over!\r\nПерезапустите игру!\r\n";
			this->labelGameOver->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelGameOver->Visible = false;
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 641);
			this->Controls->Add(this->labelGameOver);
			this->Controls->Add(this->RigtBorder);
			this->Controls->Add(this->LeftBorder);
			this->Controls->Add(this->LowerBorder);
			this->Controls->Add(this->UpperBorder);
			this->Controls->Add(this->groupBoxSettings);
			this->Controls->Add(this->groupBoxGameData);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"GameForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Игра \"Змейка\"";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GameForm::GameForm_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxGameData->ResumeLayout(false);
			this->groupBoxGameData->PerformLayout();
			this->groupBoxSettings->ResumeLayout(false);
			this->groupBoxSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedSnake))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RigtBorder))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//-----------
	//Данные игры
	private: PictureBox^ fruit;//фрукт
	private: array<PictureBox^>^ Serpens;//змея
	private: bool play;//играть
	private: bool die;//смерть
	private: bool firstLaunch;//первый запуск
	private: int step = 10;//шаг
	private: float updateInterval = 100;//интервал обновления
	private: int score = 0;//счет

	//-------------
	//Действия игры
	private: void GeneratePositionFruit();
	private: void Eating();
	private: void Movement();
	private: void EatYourself();
	private: void GameOver();
	private: void NewGame();
	private: void ChackBorders();


	//обработчики нажатия на кнопки

	private: System::Void новаяИграToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void паузаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void информацияОбИгреToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e);

	//Отслеживание нажатия клавиши
	private: System::Void GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	//Событие по обновлению игры - указывается 
	private: void GameForm_Update(Object^ obgect, EventArgs^ e);


};
}
