#pragma once
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <afx.h>
#include <afxwin.h>
#include <afxinet.h>
#include <afxpriv.h>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

namespace OEHPCGUIDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace rapidjson;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  emvSaleButton;
	protected:
	private: System::Windows::Forms::Button^  clearTextSaleButton;
	private: System::Windows::Forms::Button^  keyedEntrySale;
	private: System::Windows::Forms::Button^  recurringPaymentSaleButton;
	private: System::Windows::Forms::WebBrowser^  oehpBrowser;
	private: System::Windows::Forms::TextBox^  orderIDText;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  amountBox;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  spanBox;
	private: System::Windows::Forms::TextBox^  payerIDBox;
	private: System::Windows::Forms::Label^  SpanLabel;
	private: System::Windows::Forms::Label^  PayerIDLabel;


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
			this->emvSaleButton = (gcnew System::Windows::Forms::Button());
			this->clearTextSaleButton = (gcnew System::Windows::Forms::Button());
			this->keyedEntrySale = (gcnew System::Windows::Forms::Button());
			this->recurringPaymentSaleButton = (gcnew System::Windows::Forms::Button());
			this->oehpBrowser = (gcnew System::Windows::Forms::WebBrowser());
			this->orderIDText = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->amountBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->spanBox = (gcnew System::Windows::Forms::TextBox());
			this->payerIDBox = (gcnew System::Windows::Forms::TextBox());
			this->SpanLabel = (gcnew System::Windows::Forms::Label());
			this->PayerIDLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// emvSaleButton
			// 
			this->emvSaleButton->Location = System::Drawing::Point(12, 12);
			this->emvSaleButton->Name = L"emvSaleButton";
			this->emvSaleButton->Size = System::Drawing::Size(131, 23);
			this->emvSaleButton->TabIndex = 0;
			this->emvSaleButton->Text = L"EMV Sale";
			this->emvSaleButton->UseVisualStyleBackColor = true;
			this->emvSaleButton->Click += gcnew System::EventHandler(this, &MainForm::emvSaleButton_Click);
			// 
			// clearTextSaleButton
			// 
			this->clearTextSaleButton->Location = System::Drawing::Point(12, 41);
			this->clearTextSaleButton->Name = L"clearTextSaleButton";
			this->clearTextSaleButton->Size = System::Drawing::Size(131, 23);
			this->clearTextSaleButton->TabIndex = 1;
			this->clearTextSaleButton->Text = L"Clear Text Sale";
			this->clearTextSaleButton->UseVisualStyleBackColor = true;
			this->clearTextSaleButton->Click += gcnew System::EventHandler(this, &MainForm::clearTextSaleButton_Click);
			// 
			// keyedEntrySale
			// 
			this->keyedEntrySale->Location = System::Drawing::Point(12, 70);
			this->keyedEntrySale->Name = L"keyedEntrySale";
			this->keyedEntrySale->Size = System::Drawing::Size(131, 23);
			this->keyedEntrySale->TabIndex = 2;
			this->keyedEntrySale->Text = L"Manually Entered Sale";
			this->keyedEntrySale->UseVisualStyleBackColor = true;
			this->keyedEntrySale->Click += gcnew System::EventHandler(this, &MainForm::keyedEntrySale_Click);
			// 
			// recurringPaymentSaleButton
			// 
			this->recurringPaymentSaleButton->Location = System::Drawing::Point(156, 66);
			this->recurringPaymentSaleButton->Name = L"recurringPaymentSaleButton";
			this->recurringPaymentSaleButton->Size = System::Drawing::Size(131, 23);
			this->recurringPaymentSaleButton->TabIndex = 3;
			this->recurringPaymentSaleButton->Text = L"Recurring Payment Sale";
			this->recurringPaymentSaleButton->UseVisualStyleBackColor = true;
			this->recurringPaymentSaleButton->Click += gcnew System::EventHandler(this, &MainForm::recurringPaymentSaleButton_Click);
			// 
			// oehpBrowser
			// 
			this->oehpBrowser->Location = System::Drawing::Point(311, 12);
			this->oehpBrowser->MinimumSize = System::Drawing::Size(20, 20);
			this->oehpBrowser->Name = L"oehpBrowser";
			this->oehpBrowser->Size = System::Drawing::Size(474, 250);
			this->oehpBrowser->TabIndex = 4;
			// 
			// orderIDText
			// 
			this->orderIDText->Location = System::Drawing::Point(205, 15);
			this->orderIDText->Name = L"orderIDText";
			this->orderIDText->Size = System::Drawing::Size(100, 20);
			this->orderIDText->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(149, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Order ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(149, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Amount:";
			// 
			// amountBox
			// 
			this->amountBox->Location = System::Drawing::Point(205, 44);
			this->amountBox->Name = L"amountBox";
			this->amountBox->Size = System::Drawing::Size(100, 20);
			this->amountBox->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->spanBox);
			this->groupBox1->Controls->Add(this->payerIDBox);
			this->groupBox1->Controls->Add(this->SpanLabel);
			this->groupBox1->Controls->Add(this->PayerIDLabel);
			this->groupBox1->Controls->Add(this->recurringPaymentSaleButton);
			this->groupBox1->Location = System::Drawing::Point(12, 99);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(293, 151);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Recurring/Tokenized Payments";
			// 
			// spanBox
			// 
			this->spanBox->Location = System::Drawing::Point(187, 40);
			this->spanBox->Name = L"spanBox";
			this->spanBox->Size = System::Drawing::Size(100, 20);
			this->spanBox->TabIndex = 7;
			// 
			// payerIDBox
			// 
			this->payerIDBox->Location = System::Drawing::Point(187, 13);
			this->payerIDBox->Name = L"payerIDBox";
			this->payerIDBox->Size = System::Drawing::Size(100, 20);
			this->payerIDBox->TabIndex = 6;
			// 
			// SpanLabel
			// 
			this->SpanLabel->AutoSize = true;
			this->SpanLabel->Location = System::Drawing::Point(6, 43);
			this->SpanLabel->Name = L"SpanLabel";
			this->SpanLabel->Size = System::Drawing::Size(107, 13);
			this->SpanLabel->TabIndex = 5;
			this->SpanLabel->Text = L"Span(Last 4 of Card):";
			// 
			// PayerIDLabel
			// 
			this->PayerIDLabel->AutoSize = true;
			this->PayerIDLabel->Location = System::Drawing::Point(6, 16);
			this->PayerIDLabel->Name = L"PayerIDLabel";
			this->PayerIDLabel->Size = System::Drawing::Size(80, 13);
			this->PayerIDLabel->TabIndex = 4;
			this->PayerIDLabel->Text = L"Payer Identifier:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 262);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->amountBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->orderIDText);
			this->Controls->Add(this->oehpBrowser);
			this->Controls->Add(this->keyedEntrySale);
			this->Controls->Add(this->clearTextSaleButton);
			this->Controls->Add(this->emvSaleButton);
			this->Name = L"MainForm";
			this->Text = L"OEHP C++ Demo";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Interaction Logic for EMVSaleButton
	private: System::Void emvSaleButton_Click(System::Object^  sender, System::EventArgs^  e) {
		CInternetSession session;
		CString strHeaders = _T("Content-Type: application/x-www-form-urlencoded");

	 
		//Sets variables based on what transaction Type is being sent
		std::string transactionType = "CREDIT_DEBIT_CARD";
		std::string entryMode = "EMV";
		std::string chargeType = "SALE";
		std::string amount = marshal_as<std::string>(amountBox->Text);
		std::string orderID = marshal_as<std::string>(orderIDText->Text);
		//Builds the String that has the Transaction pramaters
		std::string preformedString = "account_token=C9CBE35FCE67540F328FE4FC8758AF6DCECC24954FB2C4FFE4A24F2B81D95FEA9953BC5CF45601D078&transaction_type=" + transactionType + "&charge_type=" + chargeType + "&charge_total=" + amount + "&duplicate_check=NO_CHECK&manage_payer_data=true&order_id=" + orderID + "&entry_mode=" + entryMode;

		CString strFormData(preformedString.c_str());
		CHttpConnection* pConnection = session.GetHttpConnection(_T("ws.test.paygateway.com"), 443, _T(""), _T(""));
		CHttpFile* pFile = pConnection->OpenRequest(CHttpConnection::HTTP_VERB_POST,
			_T("/HostPayService/v1/hostpay/transactions"), NULL, 1, NULL, NULL, INTERNET_FLAG_SECURE);

		USES_CONVERSION;

		try
		{
			BOOL result = pFile->SendRequest(strHeaders, (LPVOID)(W2A(strFormData)), strFormData.GetLength());
		}
		catch (CInternetException *e)
		{
			e->ReportError();;
		}

		DWORD dwRet;
		pFile->QueryInfoStatusCode(dwRet);

		if (dwRet != HTTP_STATUS_OK)
		{
			//Error Happens, Normally woudl do somethign here
		}
		int len = pFile->GetLength();
		char buf[20000];
		int numread;
		CString filepath;
		CString strFile = L"response.txt";
		CString strResponse = _T("");
		filepath.Format(L".\\%s", strFile);
		CFile myfile(filepath, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary);
		while ((numread = pFile->Read(buf, sizeof(buf) - 1)) > 0)
		{
			buf[numread] = '\0';
			strFile += buf;
			strResponse = buf;
			myfile.Write(buf, numread);
		}

		CT2CA pszConvertedAnsiString(strResponse);
		std::string rawResponseString(pszConvertedAnsiString); //RawResponseString should be the exact response, to be fed into a JSON parser.
		//Begin Json Parsing, probably not cleanest, but get sthe work done, Uses RapidJson external Library to do the gruntwork
		Document d;
		d.Parse(rawResponseString.c_str());

		Value& au = d["actionUrl"];
		Value& ssp = d["sealedSetupParameters"];
		std::string actionUrl = au.GetString();
		std::string sealedSetupParameters = ssp.GetString();
		std::string urlToRender = actionUrl + sealedSetupParameters;

		String^ browserURL = gcnew String(urlToRender.c_str());
		oehpBrowser->Navigate(browserURL);
		/*Launches in External Browser.
		std::string launchIE("start iexplore.exe " + urlToRender);
		std::system(launchIE.c_str());*/


		myfile.Close();
		session.Close();
		pFile->Close();
		delete pFile;
	}
	//Interaction logic for ClearTextSaleButton
private: System::Void clearTextSaleButton_Click(System::Object^  sender, System::EventArgs^  e) {
	CInternetSession session;
	CString strHeaders = _T("Content-Type: application/x-www-form-urlencoded");


	//Sets variables based on what transaction Type is being sent
	std::string transactionType = "CREDIT_CARD";
	std::string entryMode = "AUTO";
	std::string chargeType = "SALE";
	std::string amount = marshal_as<std::string>(amountBox->Text);
	std::string orderID = marshal_as<std::string>(orderIDText->Text);
	//Builds the String that has the Transaction pramaters
	std::string preformedString = "account_token=C9CBE35FCE67540F328FE4FC8758AF6DCECC24954FB2C4FFE4A24F2B81D95FEA9953BC5CF45601D078&transaction_type=" + transactionType + "&charge_type=" + chargeType + "&charge_total=" + amount + "&duplicate_check=NO_CHECK&manage_payer_data=true&order_id=" + orderID + "&entry_mode=" + entryMode;

	CString strFormData(preformedString.c_str());
	CHttpConnection* pConnection = session.GetHttpConnection(_T("ws.test.paygateway.com"), 443, _T(""), _T(""));
	CHttpFile* pFile = pConnection->OpenRequest(CHttpConnection::HTTP_VERB_POST,
		_T("/HostPayService/v1/hostpay/transactions"), NULL, 1, NULL, NULL, INTERNET_FLAG_SECURE);

	USES_CONVERSION;

	try
	{
		BOOL result = pFile->SendRequest(strHeaders, (LPVOID)(W2A(strFormData)), strFormData.GetLength());
	}
	catch (CInternetException *e)
	{
		e->ReportError();;
	}

	DWORD dwRet;
	pFile->QueryInfoStatusCode(dwRet);

	if (dwRet != HTTP_STATUS_OK)
	{
		//Error Happens, Normally woudl do somethign here
	}
	int len = pFile->GetLength();
	char buf[20000];
	int numread;
	CString filepath;
	CString strFile = L"response.txt";
	CString strResponse = _T("");
	filepath.Format(L".\\%s", strFile);
	CFile myfile(filepath, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary);
	while ((numread = pFile->Read(buf, sizeof(buf) - 1)) > 0)
	{
		buf[numread] = '\0';
		strFile += buf;
		strResponse = buf;
		myfile.Write(buf, numread);
	}

	CT2CA pszConvertedAnsiString(strResponse);
	std::string rawResponseString(pszConvertedAnsiString); //RawResponseString should be the exact response, to be fed into a JSON parser.
														   //Begin Json Parsing, probably not cleanest, but get sthe work done, Uses RapidJson external Library to do the gruntwork
	Document d;
	d.Parse(rawResponseString.c_str());

	Value& au = d["actionUrl"];
	Value& ssp = d["sealedSetupParameters"];
	std::string actionUrl = au.GetString();
	std::string sealedSetupParameters = ssp.GetString();
	std::string urlToRender = actionUrl + sealedSetupParameters;

	String^ browserURL = gcnew String(urlToRender.c_str());
	oehpBrowser->Navigate(browserURL);
	/*Launches in External Browser.
	std::string launchIE("start iexplore.exe " + urlToRender);
	std::system(launchIE.c_str());*/


	myfile.Close();
	session.Close();
	pFile->Close();
	delete pFile;
	}

	//Interaction Logic for Keyed Entry sale button
private: System::Void keyedEntrySale_Click(System::Object^  sender, System::EventArgs^  e) {
	CInternetSession session;
	CString strHeaders = _T("Content-Type: application/x-www-form-urlencoded");


	//Sets variables based on what transaction Type is being sent
	std::string transactionType = "CREDIT_CARD";
	std::string entryMode = "KEYED";
	std::string chargeType = "SALE";
	std::string amount = marshal_as<std::string>(amountBox->Text);
	std::string orderID = marshal_as<std::string>(orderIDText->Text);
	//Builds the String that has the Transaction pramaters
	std::string preformedString = "account_token=C9CBE35FCE67540F328FE4FC8758AF6DCECC24954FB2C4FFE4A24F2B81D95FEA9953BC5CF45601D078&transaction_type=" + transactionType + "&charge_type=" + chargeType + "&charge_total=" + amount + "&duplicate_check=NO_CHECK&manage_payer_data=true&order_id=" + orderID + "&entry_mode=" + entryMode;

	CString strFormData(preformedString.c_str());
	CHttpConnection* pConnection = session.GetHttpConnection(_T("ws.test.paygateway.com"), 443, _T(""), _T(""));
	CHttpFile* pFile = pConnection->OpenRequest(CHttpConnection::HTTP_VERB_POST,
		_T("/HostPayService/v1/hostpay/transactions"), NULL, 1, NULL, NULL, INTERNET_FLAG_SECURE);

	USES_CONVERSION;

	try
	{
		BOOL result = pFile->SendRequest(strHeaders, (LPVOID)(W2A(strFormData)), strFormData.GetLength());
	}
	catch (CInternetException *e)
	{
		e->ReportError();;
	}

	DWORD dwRet;
	pFile->QueryInfoStatusCode(dwRet);

	if (dwRet != HTTP_STATUS_OK)
	{
		//Error Happens, Normally woudl do somethign here
	}
	int len = pFile->GetLength();
	char buf[20000];
	int numread;
	CString filepath;
	CString strFile = L"response.txt";
	CString strResponse = _T("");
	filepath.Format(L".\\%s", strFile);
	CFile myfile(filepath, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary);
	while ((numread = pFile->Read(buf, sizeof(buf) - 1)) > 0)
	{
		buf[numread] = '\0';
		strFile += buf;
		strResponse = buf;
		myfile.Write(buf, numread);
	}

	CT2CA pszConvertedAnsiString(strResponse);
	std::string rawResponseString(pszConvertedAnsiString); //RawResponseString should be the exact response, to be fed into a JSON parser.
														   //Begin Json Parsing, probably not cleanest, but get sthe work done, Uses RapidJson external Library to do the gruntwork
	Document d;
	d.Parse(rawResponseString.c_str());

	Value& au = d["actionUrl"];
	Value& ssp = d["sealedSetupParameters"];
	std::string actionUrl = au.GetString();
	std::string sealedSetupParameters = ssp.GetString();
	std::string urlToRender = actionUrl + sealedSetupParameters;

	String^ browserURL = gcnew String(urlToRender.c_str());
	oehpBrowser->Navigate(browserURL);
	/*Launches in External Browser.
	std::string launchIE("start iexplore.exe " + urlToRender);
	std::system(launchIE.c_str());*/


	myfile.Close();
	session.Close();
	pFile->Close();
	delete pFile;
}
		 //Logic for Interaction with Recurring Paymetn Button
private: System::Void recurringPaymentSaleButton_Click(System::Object^  sender, System::EventArgs^  e) {
	CInternetSession session;
	CString strHeaders = _T("Content-Type: application/x-www-form-urlencoded");


	//Sets variables based on what transaction Type is being sent
	std::string transactionType = "CREDIT_CARD";
	std::string entryMode = "KEYED";
	std::string chargeType = "SALE";
	std::string amount = marshal_as<std::string>(amountBox->Text);
	std::string orderID = marshal_as<std::string>(orderIDText->Text);
	//Managed Payer Data Fields
	std::string payerID = marshal_as<std::string>(payerIDBox->Text);
	std::string span = marshal_as<std::string>(spanBox->Text);
	//Builds the String that has the Transaction pramaters
	std::string preformedString = "account_token=C9CBE35FCE67540F328FE4FC8758AF6DCECC24954FB2C4FFE4A24F2B81D95FEA9953BC5CF45601D078&transaction_type=" + transactionType + "&charge_type=" + chargeType + "&charge_total=" + amount + "&duplicate_check=NO_CHECK&manage_payer_data=true&order_id=" + orderID + "&entry_mode=" + entryMode + "&payer_identifier=" + payerID + "&span=" + span + "&transaction_condition_code=6";

	CString strFormData(preformedString.c_str());
	CHttpConnection* pConnection = session.GetHttpConnection(_T("ws.test.paygateway.com"), 443, _T(""), _T(""));
	CHttpFile* pFile = pConnection->OpenRequest(CHttpConnection::HTTP_VERB_POST,
		_T("/api/v1/transactions"), NULL, 1, NULL, NULL, INTERNET_FLAG_SECURE);

	USES_CONVERSION;

	try
	{
		BOOL result = pFile->SendRequest(strHeaders, (LPVOID)(W2A(strFormData)), strFormData.GetLength());
	}
	catch (CInternetException *e)
	{
		e->ReportError();;
	}

	DWORD dwRet;
	pFile->QueryInfoStatusCode(dwRet);

	if (dwRet != HTTP_STATUS_OK)
	{
		//Error Happens, Normally woudl do somethign here
	}
	int len = pFile->GetLength();
	char buf[20000];
	int numread;
	CString filepath;
	CString strFile = L"response.txt"; //Puts response in a Text File, I use this for debugging purposes in case something goes horribly wrong.
	CString strResponse = _T("");
	filepath.Format(L".\\%s", strFile);
	CFile myfile(filepath, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary);
	while ((numread = pFile->Read(buf, sizeof(buf) - 1)) > 0)
	{
		buf[numread] = '\0';
		strFile += buf;
		strResponse = buf;
		myfile.Write(buf, numread);
	}

	CT2CA pszConvertedAnsiString(strResponse);
	std::string rawResponseString(pszConvertedAnsiString); 
	String^ browserURL = gcnew String(rawResponseString.c_str());

	oehpBrowser->DocumentText = browserURL;
	/*Launches in External Browser.
	std::string launchIE("start iexplore.exe " + urlToRender);
	std::system(launchIE.c_str());*/


	myfile.Close();
	session.Close();
	pFile->Close();
	delete pFile;
}
};
}
