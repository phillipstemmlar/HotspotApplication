#pragma once
#include <string>
#include <sstream>
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace Hotspot {

	using namespace std;
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
	private: System::Windows::Forms::TextBox^  edtSSID;
	private: System::Windows::Forms::TextBox^  edtKey;
	protected:

	protected:

	private: System::Windows::Forms::Label^  lblSSID_Title;
	private: System::Windows::Forms::Label^  lblKEY_Title;
	private: System::Windows::Forms::Button^  btnToggleActivation;
	private: System::Windows::Forms::Label^  lblStatus_Title;


	private: System::Windows::Forms::CheckBox^  chkShowPassword;

	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::PictureBox^  picActive;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  restartHotspotToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  activateHotspotToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deactivateHotspotToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::PictureBox^  picLoading;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->edtSSID = (gcnew System::Windows::Forms::TextBox());
			this->edtKey = (gcnew System::Windows::Forms::TextBox());
			this->lblSSID_Title = (gcnew System::Windows::Forms::Label());
			this->lblKEY_Title = (gcnew System::Windows::Forms::Label());
			this->btnToggleActivation = (gcnew System::Windows::Forms::Button());
			this->lblStatus_Title = (gcnew System::Windows::Forms::Label());
			this->chkShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->picActive = (gcnew System::Windows::Forms::PictureBox());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->restartHotspotToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->activateHotspotToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deactivateHotspotToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->picLoading = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picActive))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picLoading))->BeginInit();
			this->SuspendLayout();
			// 
			// edtSSID
			// 
			this->edtSSID->Location = System::Drawing::Point(30, 96);
			this->edtSSID->Name = L"edtSSID";
			this->edtSSID->Size = System::Drawing::Size(298, 20);
			this->edtSSID->TabIndex = 0;
			// 
			// edtKey
			// 
			this->edtKey->Location = System::Drawing::Point(30, 140);
			this->edtKey->Name = L"edtKey";
			this->edtKey->PasswordChar = '*';
			this->edtKey->Size = System::Drawing::Size(277, 20);
			this->edtKey->TabIndex = 1;
			//Load Data
			loadConfigData();
			// 
			// lblSSID_Title
			// 
			this->lblSSID_Title->AutoSize = true;
			this->lblSSID_Title->Location = System::Drawing::Point(27, 75);
			this->lblSSID_Title->Name = L"lblSSID_Title";
			this->lblSSID_Title->Size = System::Drawing::Size(109, 13);
			this->lblSSID_Title->TabIndex = 2;
			this->lblSSID_Title->Text = L"Hotspot Name (SSID)";
			// 
			// lblKEY_Title
			// 
			this->lblKEY_Title->AutoSize = true;
			this->lblKEY_Title->Location = System::Drawing::Point(27, 124);
			this->lblKEY_Title->Name = L"lblKEY_Title";
			this->lblKEY_Title->Size = System::Drawing::Size(80, 13);
			this->lblKEY_Title->TabIndex = 3;
			this->lblKEY_Title->Text = L"Password (Key)";
			// 
			// btnToggleActivation
			// 
			this->btnToggleActivation->Location = System::Drawing::Point(30, 175);
			this->btnToggleActivation->Name = L"btnToggleActivation";
			this->btnToggleActivation->Size = System::Drawing::Size(298, 59);
			this->btnToggleActivation->TabIndex = 4;
			this->btnToggleActivation->Text = L"Activate";
			this->btnToggleActivation->UseVisualStyleBackColor = true;
			this->btnToggleActivation->Click += gcnew System::EventHandler(this, &MyForm::btnToggleActivation_Click);
			// 
			// lblStatus_Title
			// 
			this->lblStatus_Title->AutoSize = true;
			this->lblStatus_Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStatus_Title->Location = System::Drawing::Point(87, 24);
			this->lblStatus_Title->Name = L"lblStatus_Title";
			this->lblStatus_Title->Size = System::Drawing::Size(122, 25);
			this->lblStatus_Title->TabIndex = 5;
			this->lblStatus_Title->Text = L"Hotspot - Off";
			// 
			// chkShowPassword
			// 
			this->chkShowPassword->AutoSize = true;
			this->chkShowPassword->Location = System::Drawing::Point(313, 143);
			this->chkShowPassword->Name = L"chkShowPassword";
			this->chkShowPassword->Size = System::Drawing::Size(15, 14);
			this->chkShowPassword->TabIndex = 8;
			this->chkShowPassword->UseVisualStyleBackColor = true;
			this->chkShowPassword->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chkShowPassword_CheckedChanged);
			// 
			// picActive
			// 
			this->picActive->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picActive.Image")));
			this->picActive->Location = System::Drawing::Point(30, 12);
			this->picActive->Name = L"picActive";
			this->picActive->Size = System::Drawing::Size(51, 50);
			this->picActive->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picActive->TabIndex = 9;
			this->picActive->TabStop = false;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"Hotspot";
			this->notifyIcon1->Visible = true;
			this->notifyIcon1->DoubleClick += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->restartHotspotToolStripMenuItem,
					this->activateHotspotToolStripMenuItem, this->deactivateHotspotToolStripMenuItem, this->toolStripSeparator1, this->openToolStripMenuItem,
					this->toolStripSeparator2, this->exitToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(176, 126);
			// 
			// restartHotspotToolStripMenuItem
			// 
			this->restartHotspotToolStripMenuItem->Enabled = false;
			this->restartHotspotToolStripMenuItem->Name = L"restartHotspotToolStripMenuItem";
			this->restartHotspotToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->restartHotspotToolStripMenuItem->Text = L"Restart Hotspot";
			this->restartHotspotToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::restartHotspotToolStripMenuItem_Click);
			// 
			// activateHotspotToolStripMenuItem
			// 
			this->activateHotspotToolStripMenuItem->Name = L"activateHotspotToolStripMenuItem";
			this->activateHotspotToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->activateHotspotToolStripMenuItem->Text = L"Activate Hotspot";
			this->activateHotspotToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::activateHotspotToolStripMenuItem_Click);
			// 
			// deactivateHotspotToolStripMenuItem
			// 
			this->deactivateHotspotToolStripMenuItem->Enabled = false;
			this->deactivateHotspotToolStripMenuItem->Name = L"deactivateHotspotToolStripMenuItem";
			this->deactivateHotspotToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->deactivateHotspotToolStripMenuItem->Text = L"Deactivate Hotspot";
			this->deactivateHotspotToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deactivateHotspotToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(172, 6);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(172, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// picLoading
			// 
			this->picLoading->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picLoading.Image")));
			this->picLoading->Location = System::Drawing::Point(278, 12);
			this->picLoading->Name = L"picLoading";
			this->picLoading->Size = System::Drawing::Size(50, 50);
			this->picLoading->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->picLoading->TabIndex = 10;
			this->picLoading->TabStop = false;
			// 
			// MyForm
			// 
			this->AccessibleName = L"frmMain";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 276);
			this->Controls->Add(this->picLoading);
			this->Controls->Add(this->picActive);
			this->Controls->Add(this->chkShowPassword);
			this->Controls->Add(this->lblStatus_Title);
			this->Controls->Add(this->btnToggleActivation);
			this->Controls->Add(this->lblKEY_Title);
			this->Controls->Add(this->lblSSID_Title);
			this->Controls->Add(this->edtKey);
			this->Controls->Add(this->edtSSID);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotspot - Broadcast Connection";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picActive))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picLoading))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: bool Active = false;
	private: const char * CONFIG_FILE_NAME = "config.txt";

	private: System::Void btnToggleActivation_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Active) { 
			deActivate();
		}else { 
			Activate();
		}
		Active = !Active;
	}
	private: System::Void chkShowPassword_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		toggleShowPassword();
	}

	private: void toggleShowPassword() {
		if (chkShowPassword->Checked) {
			edtKey->PasswordChar = 0;
		}
		else {
			edtKey->PasswordChar = '*';
		}
	}

	private: System::Void MyForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		string cmdStop = "netsh wlan stop hostednetwork";
		WinExec(cmdStop.c_str(), SW_HIDE);
	}

	private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		
		if (e->CloseReason == CloseReason::UserClosing)
		{
			minimize();
			e->Cancel = true;
		}else if(e->CloseReason == CloseReason::ApplicationExitCall){
			e->Cancel = MessageBox::Show("Are you sure you want to exit?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
				!= System::Windows::Forms::DialogResult::Yes;
		}
		else {
			e->Cancel = false;
		}
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		maximize();
		Application::Exit();
	}


	private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		if (WindowState == FormWindowState::Minimized) { this->ShowInTaskbar = false; }
		else { this->ShowInTaskbar = true; }
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		maximize();
	}

	private: void minimize() {
		WindowState = FormWindowState::Minimized;
	}

	private: void maximize() {
		WindowState = FormWindowState::Normal;
	}

	private: void deActivate() {
		if (Active) {
			loadingStart();

			string cmdStop = "netsh wlan stop hostednetwork";

			WinExec(cmdStop.c_str(), SW_HIDE);

			edtSSID->Enabled = true;
			edtKey->Enabled = true;
			chkShowPassword->Enabled = true;

			deactivateHotspotToolStripMenuItem->Enabled = false;
			restartHotspotToolStripMenuItem->Enabled = false;
			activateHotspotToolStripMenuItem->Enabled = true;

			btnToggleActivation->Text = "Activate";
			lblStatus_Title->Text = "Hotspot - Off";

			loadingStop();
		}
	}

	private: void Activate() {
		if (!Active) {
			if (edtSSID->Text->Length < 3) {
				MessageBox::Show("Hotspot Name needs to be 3 characters or more!");
				return;
			}
			if (edtKey->Text->Length < 4) {
				MessageBox::Show("Hotspot Password needs to be 4 characters or more!");
				return;
			}
			loadingStart();

			storeConfigData();

			String^ SSID = edtSSID->Text;
			String^ KEY = edtKey->Text;

			msclr::interop::marshal_context context;
			stringstream ss;

			ss << "netsh wlan set hostednetwork mode=allow ssid=";
			ss << context.marshal_as<string>(SSID);
			ss << " key=";
			ss << context.marshal_as<string>(KEY);

			string cmdSetup = ss.str();
			string cmdStart = "netsh wlan start hostednetwork";

			WinExec(cmdSetup.c_str(), SW_HIDE);
			WinExec(cmdStart.c_str(), SW_HIDE);

			if (chkShowPassword->Checked) {
				edtKey->PasswordChar = '*';
				chkShowPassword->Checked = false;
			}

			edtSSID->Enabled = false;
			edtKey->Enabled = false;
			chkShowPassword->Enabled = false;

			deactivateHotspotToolStripMenuItem->Enabled = true;
			restartHotspotToolStripMenuItem->Enabled = true;
			activateHotspotToolStripMenuItem->Enabled = false;

			btnToggleActivation->Text = "Deactivate";
			lblStatus_Title->Text = "Hotspot - Active";

			loadingStop();
		}
	}

	private: void loadingStart() {
		picLoading->Show();
	}

	private: void loadingStop() {
		picLoading->Hide();
	}
	
	private: void loadConfigData() {
		msclr::interop::marshal_context context;
		ifstream File;
		string FileName = CONFIG_FILE_NAME;
		File.open(FileName.c_str());

		string SSID, Key;
		if (File.good()) {
			File >> SSID;
			File >> Key;
			File.close();
		}
		else {
			SSID = "";
			Key = "";
		}
		
		edtSSID->Text = context.marshal_as<String^>(SSID);
		edtKey->Text = context.marshal_as<String^>(Key);
	}

	private: void storeConfigData() {
		msclr::interop::marshal_context context;
		ofstream File;
		string FileName = CONFIG_FILE_NAME;
		File.open(FileName.c_str());

		File << context.marshal_as<string>(edtSSID->Text) << endl;
		File << context.marshal_as<string>(edtKey->Text);

		File.close();
	}

	private: System::Void activateHotspotToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Activate();
	}

	private: System::Void deactivateHotspotToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		deActivate();
	}
	
	private: System::Void restartHotspotToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		deActivate();
		Activate();
	}
};
}
