#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ Pic;

	private: System::Windows::Forms::Label^ label2;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Pic = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pic))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"axel osmani espinoza hernandez\r\nice\r\nesime zacatenco\r\n220303327\r\n";
			// 
			// Pic
			// 
			this->Pic->Location = System::Drawing::Point(40, 114);
			this->Pic->Name = L"Pic";
			this->Pic->Size = System::Drawing::Size(100, 50);
			this->Pic->TabIndex = 1;
			this->Pic->TabStop = false;
			this->Pic->Click += gcnew System::EventHandler(this, &Form1::Pic_Click);
			this->Pic->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Pic_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(228, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Pic);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		Pic->Invalidate();
	}
	
	
	private: System::Void Pic_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		OpenFileDialog^ archi = gcnew OpenFileDialog();
		archi->FileName = "IMAGEN.jpg";
		Image^ imagen1 = Image::FromFile(archi->FileName);
		g->DrawImage(imagen1, 1, 1, Pic->Width, Pic->Height);
	}
	private: System::Void Pic_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
