#pragma once

// User added: At the start of the program, right after "#pragma once" directive, specify the library classes to include
#include <cstdlib> // Include for the srand() function and overall random support
#include <ctime> // Include for the time() function and overall time support


namespace Lotto {

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  getBtn;
	private: System::Windows::Forms::Button^  resetBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->getBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(102, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(138, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(174, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(210, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(246, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(282, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"label6";
			// 
			// getBtn
			// 
			this->getBtn->AutoSize = true;
			this->getBtn->Location = System::Drawing::Point(105, 61);
			this->getBtn->Name = L"getBtn";
			this->getBtn->Size = System::Drawing::Size(121, 23);
			this->getBtn->TabIndex = 6;
			this->getBtn->Text = L"Get my lucky numbers";
			this->getBtn->UseVisualStyleBackColor = true;
			this->getBtn->Click += gcnew System::EventHandler(this, &Form1::getBtn_Click);
			// 
			// resetBtn
			// 
			this->resetBtn->Location = System::Drawing::Point(242, 61);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(75, 23);
			this->resetBtn->TabIndex = 7;
			this->resetBtn->Text = L"Reset";
			this->resetBtn->UseVisualStyleBackColor = true;
			this->resetBtn->Click += gcnew System::EventHandler(this, &Form1::resetBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(92, 95);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(325, 96);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->resetBtn);
			this->Controls->Add(this->getBtn);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(333, 123);
			this->MinimumSize = System::Drawing::Size(333, 123);
			this->Name = L"Form1";
			this->Text = L"Lotto Number Generator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Inser a call to the new function - to run wheneve the Form loads
				 Clear(); 
				
				// Seed the random number generator with the current time
				srand( (int) time(0)); // start the random number generator
				
			 }
	// Immediately after the closing brace of the Form1_Load function block add a new private "Clear" function - to return a 
	// a graphical "System::Void" data type
	private: System::Void Clear(){
				 // In this new function block, insert statements to set each Label's Text value to an ellipsis when called upon
				 this -> label1 -> Text = "..."; 
				 this -> label2 -> Text = "...";
				 this -> label3 -> Text = "...";
				 this -> label4 -> Text = "...";
				 this -> label5 -> Text = "...";
				 this -> label6 -> Text = "...";

				 // Insert further statements in the Clear function block to control button states
				 this -> getBtn -> Enabled = true; 
				 this -> resetBtn -> Enabled = false; // Reset button is now grayed out disabled when the Form gets loaded
			 }
private: System::Void resetBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Add (execute) the Clear() function when the Reset button is clicked 
			 Clear();
		 }
private: System::Void getBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			// At the start, declare three trivial integer variables and an array for fifty inteegers
			int i, j, k, nums[50];

			// Add a loop to fill the "nums" array elements 1-49 with the integer values 1-49
			for( i = 1; i < 50 ; i++) nums[i] = i;

			// Randomize the values in array elements 1-49 (swap between them to mix )
			for (i = 1; i < 50 ; i++){
			 j = (rand() % 49) + 1; // Select a position
			 k = nums[i]; nums[i] = nums[j];  nums[j]  = k; 
			}

			// After all the calculations, output the values in elements 1-6 to the Form's Label components
			this -> label1 -> Text = Convert::ToString( nums[1] );
			this -> label2 -> Text = Convert::ToString( nums[2] );
			this -> label3 -> Text = Convert::ToString( nums[3] );
			this -> label4 -> Text = Convert::ToString( nums[4] );
			this -> label5 -> Text = Convert::ToString( nums[5] );
			this -> label6 -> Text = Convert::ToString( nums[6] );
		 
		 
			// Finally, add the se two lines to set the Button states readu to reset the appplication
			this -> getBtn -> Enabled = false;
			this -> resetBtn -> Enabled = true;
		 }


};
}

