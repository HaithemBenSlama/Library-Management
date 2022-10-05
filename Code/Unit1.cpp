//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <System.IOUtils.hpp>
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Timer1->Interval=100;
	if(Acces=="")
	{
		Label13->Cursor=crNo;
		Label14->Cursor=crNo;
		Label15->Cursor=crNo;
		Label117->Cursor=crNo;
		Label115->Cursor=crNo;
		Image7->Cursor=crNo;
		Image8->Cursor=crNo;
		Image9->Cursor=crNo;
		Image37->Cursor=crNo;
		Image39->Cursor=crNo;
		Panel22->Cursor=crNo;
		Panel23->Cursor=crNo;
		Panel24->Cursor=crNo;
		Panel25->Cursor=crNo;
		Panel27->Cursor=crNo;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
    if(Acces==""||Acces=="Guest");
	else{
	if(Application->MessageBox(L"Veuillez-vous enregistrer les modification avant de quitter ?!",L"Alert",MB_YESNO)==6)
	{
			b.SauvgarderEtudiant();
			b.SauvgarderEnseignant();
			b.SauvgarderLivre();
			Application->MessageBox(L"Enregistrement avec Succés",L"Terminer",MB_OK);
	}
	}
    if(Application->MessageBox(L"Veuillez-vous Quitter ? ?!",L"Confirmation",MB_YESNO)==6)
				exit(0);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Panel8Click(TObject *Sender)
{
	if(Acces=="Guest");
	else
	{
		PanelAddStudent->BringToFront();
		nom->Text="";
		prenom->Text="";
		specialite->Text="";
		niveau->Value=0;
		Femme->Checked=false;
		Homme->Checked=false;
		Edit27->Text="";
		Edit28->Text="";
		Label108->Visible=false;
		Label109->Visible=false;
		Label110->Visible=false;
		Label111->Visible=false;
		Label112->Visible=false;
		Label113->Visible=false;
		Label114->Visible=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image10Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'annuler l'ajout du livre ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelLivre->BringToFront();
	}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    SYSTEMTIME SystemTime;
	::GetSystemTime(&SystemTime);
	EncodeTime(SystemTime.wHour, SystemTime.wMinute, SystemTime.wSecond, SystemTime.wMilliseconds);
	Label6->Caption= EncodeTime(SystemTime.wHour, SystemTime.wMinute, SystemTime.wSecond, SystemTime.wMilliseconds);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Panel24Click(TObject *Sender)
{
	if(Acces=="");
	else
	{
        int tl=0;
		int le=0;
		int ld=0;
		int ie=0;
		int is=0;
		for(int i=0;i<=b.getCmpLivre();i++)
		{
			tl=tl+b.getLivre(i).getStock_Init();
			ld=ld+b.getLivre(i).getStock();
		}
		le=tl-ld;
		ie=b.getCmpEnseignant()+1;
		is=b.getCmpEtudiant()+1;
		Label8->Caption=tl;
		Label46->Caption=le;
		Label49->Caption=ld;
		Label11->Caption=is;
		Label18->Caption=ie;
		Panel22->ParentBackground=true;
		Panel23->ParentBackground=true;
		Panel24->ParentBackground=false;
		Panel25->ParentBackground=true;
		Panel27->ParentBackground=true;
		Panel42->ParentBackground=true;
		Panel24->Color=clBtnFace;
		PanelDashbord->BringToFront();
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel22Click(TObject *Sender)
{
    if(Acces=="");
	else{
	Panel22->ParentBackground=false;
	Panel23->ParentBackground=true;
	Panel24->ParentBackground=true;
	Panel25->ParentBackground=true;
	Panel27->ParentBackground=true;
	Panel42->ParentBackground=true;
	Panel22->Color=clBtnFace;
	PanelEtudiant->BringToFront();    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel23Click(TObject *Sender)
{
    if(Acces=="");
	else{
	Panel22->ParentBackground=true;
	Panel23->ParentBackground=false;
	Panel24->ParentBackground=true;
	Panel25->ParentBackground=true;
	Panel27->ParentBackground=true;
    Panel42->ParentBackground=true;
	Panel23->Color=clBtnFace;
	PanelEnseignant->BringToFront(); }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image2Click(TObject *Sender)
{
    Application->Minimize ();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Label36Click(TObject *Sender)
{
    PanelDeleteStud->BringToFront();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image20Click(TObject *Sender)
{
    PanelDeleteStud->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel9Click(TObject *Sender)
{
	if(Acces=="Guest");
	else
	{
	PanelDeleteStud->BringToFront();
			Edit81->Text="";
            Label234->Visible=false;
			Edit5->Text="";
			Edit6->Text="";
			Edit7->Text="";
			Edit8->Text="";
			NumberBox1->Value=0;
			Edit80->Text="";
			NumberBox2->Value=0;
			Edit78->Text="";
			Edit79->Text="";
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image15Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'annuler l'ajout de l'étudiant ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEtudiant->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel10Click(TObject *Sender)
{
		PanelSearchStud->BringToFront();
		Label107->Visible=false;
		Label211->Visible=false;
		Edit29->Text="";
		Edit1->Text="";
		Edit2->Text="";
		Edit3->Text="";
		Edit4->Text="";
		Edit25->Text="";
		Edit26->Text="";
		Edit30->Text="";
		NumberBox4->Value=0;
		NumberBox18->Value=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image30Click(TObject *Sender)
{
		PanelEtudiant->BringToFront();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image32Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'annuler l'emprunt d'un livre ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEtudiant->BringToFront();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image34Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'annuler le remettre d'un livre ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEtudiant->BringToFront();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel12Click(TObject *Sender)
{
	if(Acces=="Guest");
	else
	{
		ComboBoxEx1->Clear();
		Edit77->Text=0;
		Edit21->Text="";
		Edit22->Text="";
		Edit23->Text="";
		Edit24->Text="";
		Label96->Visible=false;
		Label97->Visible=false;
        Label228->Visible=false;
		NumberBox17->Value=0;
		Edit16->Text="";
		Edit18->Text="";
		Edit19->Text="";
		Edit20->Text="";
		Edit76->Text="";
		NumberBox14->Value=0;
		NumberBox16->Value=0;
        PanelRendreStud->BringToFront();
    }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel11Click(TObject *Sender)
{
	if(Acces=="Guest");
	else
	{
		PanelEmprunterStud->BringToFront();
		Label86->Visible=false;
		Edit13->Text="";
		Edit14->Text="";
		Edit15->Text="";
		Edit17->Text="";
		NumberBox12->Value=0;
		NumberBox11->Value=0;
		Label85->Visible=false;
		Edit9->Text="";
		Edit10->Text="";
		Edit11->Text="";
		Edit12->Text="";
		Edit31->Text="";
		Edit75->Text="";
		NumberBox8->Value=0;
		NumberBox10->Value=0;
		Label84->Visible=false;
		Label83->Visible=false;
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image16Click(TObject *Sender)
{
	Etudiant e;
	String n, p, sex,s,age,CIN;
	int ni;
	bool Status=true;
	try{
		if(nom->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsLetter(nom->Text))
			throw "Nom doit etre alphabetique [a-z][A-Z]";

		Label108->Visible=false;
		n=nom->Text;
	}catch(const char* msg){
			Label108->Visible=true;
			Label108->Caption=msg;
			Status=false;}
	try{
		if(prenom->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsLetter(prenom->Text))
			throw "Prenom doit etre alphabetique [a-z][A-Z]";
		Label109->Visible=false;
		p=prenom->Text;

	}catch(const char* msg){
		Label109->Visible=true;
		Label109->Caption=msg;
		Status=false;}

	try{
		if(!(Homme->Checked||Femme->Checked))
			throw "* Champs Obligatoire";
		Label110->Visible=false;
		if(Homme->Checked)
			sex="HOMME";
		if(Femme->Checked)
			sex="FEMME";
	}catch(const char *msg){
		Label110->Visible=true;
		Label110->Caption=msg;
		Status=false;}

	try{
		if(specialite->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsLetter(specialite->Text))
			throw "Spécialité doit etre alphabetique [a-z] [A-Z]";
		Label111->Visible=false;
		s=specialite->Text;

	}catch(const char* msg){
		Label111->Visible=true;
		Label111->Caption=msg;
		Status=false;}
	try{
		if(niveau->Value==0)
			throw "* Champs Obligatoire";
		Label112->Visible=false;
		ni=(int)niveau->Value;
	} catch(const char* msg){
		Label112->Visible=true;
		Label112->Caption=msg;
		Status=false;}
	try{
		if(Edit27->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsInteger(Edit27->Text))
			throw "Age doit etre Numerique [18-99]";
		Label113->Visible=false;
		age=Edit27->Text;
	}catch(const char* msg){
		Label113->Visible=true;
		Label113->Caption=msg;
		Status=false;}
	try{
		if(Edit28->Text=="")
			throw "* Champs Obligatoire";
		if(Edit28->Text.Length()<8)
			throw "CIN doit contenir 8 chiffres";
		if(!e.IsInteger(Edit28->Text))
			throw "CIN doit etre Numerique [0-9]";
		if(b.RechercherEtudiant(Edit28->Text)!=NULL || b.RechercherEnseignant(Edit28->Text)!=NULL)
			throw "CIN existe deja";
		Label114->Visible=false;
		CIN=Edit28->Text;
    } catch(const char* msg){
		Label114->Visible=true;
		Label114->Caption=msg;
		Status=false;}
	try{
		if(Status==false)
			throw"";
		e=Etudiant(n,p,s,age,CIN,sex,ni);
		b.AjouterEtudiant(e);
		Application->MessageBox(L"Ajout avec succées ",L"Terminer",MB_OK);
		String Filename = L"Etudiant.csv";
		
		PanelEtudiant->BringToFront();
		nom->Text="";
		prenom->Text="";
		specialite->Text="";
		niveau->Value=0;
		Edit27->Text="";
		Edit28->Text="";
		Homme->Checked=false;
		Femme->Checked=false;
		Label108->Visible=false;
		Label109->Visible=false;
		Label110->Visible=false;
		Label111->Visible=false;
		Label112->Visible=false;
		Label113->Visible=false;
		Label114->Visible=false;
	}catch(const char *msg){}
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Edit29Change(TObject *Sender)
{
	 String cin;
	 cin=Edit29->Text;
	 Etudiant *e=b.RechercherEtudiant(cin);
	 try
	 {
		 if(e==NULL)
		 {
			Edit1->Text="";
			Edit2->Text="";
			Edit3->Text="";
			Edit4->Text="";
			NumberBox4->Value=0;
			Edit30->Text="";
			NumberBox18->Value=0;
			Edit25->Text="";
			Edit26->Text="";
		 }
		 if(e==NULL)
			throw "Invalide CIN";
		 Label107->Visible=false;
		 Edit1->Text=e->getNom();
		 Edit2->Text=e->getPrenom();
		 Edit3->Text=e->getSexe();
		 Edit4->Text=e->getSpecialite();
		 NumberBox4->Value=e->getNiveau();
		 Edit30->Text=e->getAge();
		 NumberBox18->Value=e->getNbLivre();
		 if(e->getLivre1()==NULL)
		 Edit25->Text="-NaN-";
		 else
		 Edit25->Text=e->getLivre1()->getCode();
		 if(e->getLivre2()==NULL)
		 Edit26->Text="-NaN-";
		 else
		 Edit26->Text=e->getLivre2()->getCode();
	 }catch(const char* msg){ Label107->Visible=true;
		Label107->Caption=msg;  }
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Panel27Click(TObject *Sender)
{
	if(Acces=="");
	else{
	Panel22->ParentBackground=true;
	Panel23->ParentBackground=true;
	Panel24->ParentBackground=true;
	Panel25->ParentBackground=true;
	Panel27->ParentBackground=false;
	Panel42->ParentBackground=true;
	Panel27->Color=clBtnFace;
	PanelAbout->BringToFront();
	}

}
//---------------------------------------------------------------------------





void __fastcall TForm1::Image38Click(TObject *Sender)
{
	Livre l;
	String titre,auteur,date;
	int code, stock;
	bool Status=true;
	date=DateTimePicker1->Date;
	try{
		if(Edit33->Text=="")
			throw "*Champs Obligatoire";
		titre=Edit33->Text;
		Label16->Visible=false;
	}catch(const char* msg){
	Label16->Visible=true;
	Label16->Caption=msg;
	Status=false;
	}
	try{
		if(Edit34->Text=="")
			throw "*Champs Obligatoire";
		if(!l.IsLetter(Edit34->Text))
			throw "Auteur doit etre alphabetique [a-z] [A-Z]";
		auteur=Edit34->Text;
		Label116->Visible=false;
	}catch(const char* msg){
	Label116->Visible=true;
	Label116->Caption=msg;
	Status=false;
	}
	try{
		if(b.RechercherLivre(NumberBox5->Value)!=NULL)
			throw "Code livre existe deja";
		if(NumberBox5->Value==0)
			throw "*Champs Obligatoire";
		Label118->Visible=false;
		code=NumberBox5->Value;
	}catch(const char*msg){Label118->Visible=true;
	Label118->Caption=msg;
	Status=false;
	}
	try{
		if(NumberBox6->Value==0)
			throw "*Champs Obligatoire";
		if(NumberBox6->Value<0)
			throw "Nombre Livre doit etre positif";
		Label119->Visible=false;
		stock=NumberBox6->Value;
	}catch(const char*msg){Label119->Visible=true;
	Label119->Caption=msg;
	Status=false;
	}
	try{
		if(DateTimePicker1->Date=="01/01/1900")
			throw  "*Champs Obligatoire";
			Label120->Visible=false;
			date=DateTimePicker1->Date.FormatString("dd/mm/yyyy");
	}catch(const char*msg){Label120->Visible=true;
	Label120->Caption=msg;
	Status=false;
	}
	try{
		if(Status==false)
			throw"";
		l=Livre(titre,auteur,code,stock,stock,date);
		b.AjouterLivre(l);
        PanelLivre->BringToFront();
		Label16->Visible=false;
		Label116->Visible=false;
		Label118->Visible=false;
		Label119->Visible=false;
		Label120->Visible=false;
		DateTimePicker1->Date=StrToDate("01/01/1900");
		Edit33->Text="";
		Edit34->Text="";
		NumberBox5->Value=0;
		NumberBox6->Value=0;

	}catch(const char* msg){}


}
//---------------------------------------------------------------------------



void __fastcall TForm1::Panel18Click(TObject *Sender)
{
		if(Acces=="Admin")
		{
		Label16->Visible=false;
		Label116->Visible=false;
		Label118->Visible=false;
		Label119->Visible=false;
		Label120->Visible=false;
		DateTimePicker1->Date=StrToDate("01/01/1900");
		Edit33->Text="";
		Edit34->Text="";
		NumberBox5->Value=0;
		NumberBox6->Value=0;
		PanelAddBook->BringToFront();
        }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::NumberBox9ChangeValue(TObject *Sender)
{
	try{
		if(b.RechercherLivre(NumberBox9->Value)==NULL)
		{
			Edit35->Text="";
			Edit36->Text="";
			NumberBox22->Value=0;
			NumberBox19->Value=0;
			NumberBox20->Value=0;
			NumberBox21->Value=0;
			Edit39->Text="";
		}
		if(b.RechercherLivre(NumberBox9->Value)==NULL)
			throw "Invalid code";
		Label135->Visible=false;
		Livre *l=b.RechercherLivre(NumberBox9->Value);
		Edit35->Text=l->getTitre();
		Edit36->Text=l->getAuteur();
		NumberBox22->Value=l->getCode();
		NumberBox19->Value=l->getStock_Init();
		NumberBox20->Value=l->getStock();
		NumberBox21->Value=l->getStock_Init()-l->getStock();
		Edit39->Text=l->getDate();
	}catch(const char* msg){
		Label135->Visible=true;
		Label135->Caption=msg;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label43Click(TObject *Sender)
{
	PanelSearchBook->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel20Click(TObject *Sender)
{
	 Label135->Caption="";
     NumberBox9->Value=0;
	 Edit35->Text="";
	 Edit36->Text="";
	 NumberBox22->Value=0;
	 NumberBox19->Value=0;
	 NumberBox20->Value=0;
	 NumberBox21->Value=0;
	 Edit39->Text="";
	 PanelSearchBook->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image26Click(TObject *Sender)
{
     PanelSearchBook->BringToFront();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Panel25Click(TObject *Sender)
{
	if(Acces=="");
	else{
	Panel22->ParentBackground=true;
	Panel23->ParentBackground=true;
	Panel24->ParentBackground=true;
	Panel25->ParentBackground=false;
	Panel27->ParentBackground=true;
	Panel42->ParentBackground=true;
	Panel25->Color=clBtnFace;
	PanelLivre->BringToFront();
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Panel28MouseEnter(TObject *Sender)
{
	Panel28->ParentBackground=false;
	Panel28->Color=clSkyBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel28MouseLeave(TObject *Sender)
{
	Panel28->ParentBackground=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Label133MouseEnter(TObject *Sender)
{
    Panel28->ParentBackground=false;
    Panel28->Color=clSkyBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label138MouseEnter(TObject *Sender)
{
    Panel28->ParentBackground=false;
    Panel28->Color=clSkyBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image42MouseEnter(TObject *Sender)
{
    Panel28->ParentBackground=false;
    Panel28->Color=clSkyBlue;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Panel28Click(TObject *Sender)
{
	try{
	if(Edit35->Text=="")
		throw "Saisir Code livre";
	if(b.RechercherLivre(NumberBox9->Value)!=NULL && NumberBox21->Value==0)
		throw "Ce livre n'a pas été emprunté";
	if(Label135->Visible==true)
		throw "Verfier Code Livre";
	Label134->Visible=false;
	//*****************************************/
	StringGrid5->ColWidths[0] = 35;
	StringGrid5->Cells[1][0]="Nom";
	StringGrid5->Cells[2][0]="Prenom";
	StringGrid5->Cells[3][0]="CIN";
	StringGrid5->Cells[4][0]="Sexe";
	StringGrid5->Cells[5][0]="Specialite";
	StringGrid5->ColWidths[6]=45;
	StringGrid5->Cells[6][0]="Age";
	StringGrid5->ColWidths[7]=66;
	StringGrid5->Cells[7][0]="Nb Livre";
	StringGrid5->Cells[8][0]="Livre 1";
	StringGrid5->Cells[9][0]="Livre 2";
	StringGrid5->Cells[10][0]="Livre 3";
	int j=1;
    for(int i=0;i<=b.getCmpEnseignant();i++)
	{
		if((b.getEnseignant(i).getLivre1()!=NULL && b.getEnseignant(i).getLivre1()->getCode()==NumberBox9->Value)||(b.getEnseignant(i).getLivre2()!=NULL && b.getEnseignant(i).getLivre2()->getCode()==NumberBox9->Value)||(b.getEnseignant(i).getLivre3()!=NULL && b.getEnseignant(i).getLivre3()->getCode()==NumberBox9->Value))
			j++;
	}
	StringGrid5->RowCount=j;
	j=1;
	for(int i=0;i<=b.getCmpEnseignant();i++)
	{
		if((b.getEnseignant(i).getLivre1()!=NULL && b.getEnseignant(i).getLivre1()->getCode()==NumberBox9->Value)||(b.getEnseignant(i).getLivre2()!=NULL && b.getEnseignant(i).getLivre2()->getCode()==NumberBox9->Value)||(b.getEnseignant(i).getLivre3()!=NULL && b.getEnseignant(i).getLivre3()->getCode()==NumberBox9->Value))
		{
			StringGrid5->Cells[0][j]=j;
			StringGrid5->Cells[1][j]=b.getEnseignant(i).getNom();
			StringGrid5->Cells[2][j]=b.getEnseignant(i).getPrenom();
			StringGrid5->Cells[3][j]=b.getEnseignant(i).getCin();
			StringGrid5->Cells[4][j]=b.getEnseignant(i).getSexe();
			StringGrid5->Cells[5][j]=b.getEnseignant(i).getSpecialite();
			StringGrid5->Cells[6][j]=b.getEnseignant(i).getAge();
			StringGrid5->Cells[7][j]=b.getEnseignant(i).getNbLivre();
			if(b.getEnseignant(i).getLivre1()==NULL)
				StringGrid5->Cells[8][j]="-NaN-";
			else
				StringGrid5->Cells[8][j]=b.getEnseignant(i).getLivre1()->getCode();
			if(b.getEnseignant(i).getLivre2()==NULL)
				StringGrid5->Cells[9][j]="-NaN-";
			else
				StringGrid5->Cells[9][j]=b.getEnseignant(i).getLivre2()->getCode();
			if(b.getEnseignant(i).getLivre3()==NULL)
				StringGrid5->Cells[10][j]="-NaN-";
			else
				StringGrid5->Cells[10][j]=b.getEnseignant(i).getLivre3()->getCode();
			j=j+1;
		}
	}
	//////////////*********************************/
    StringGrid4->RowCount=b.getCmpEtudiant()+2;
	StringGrid4->ColWidths[0] = 35;
	StringGrid4->Cells[1][0]="Nom";
	StringGrid4->Cells[2][0]="Prenom";
	StringGrid4->ColWidths[7]=70;
	StringGrid4->Cells[3][0]="CIN";
	StringGrid4->Cells[4][0]="Sexe";
	StringGrid4->Cells[5][0]="Specialite";
	StringGrid4->ColWidths[6]=60;
	StringGrid4->Cells[6][0]="Niveau";
	StringGrid4->ColWidths[7]=45;
	StringGrid4->Cells[7][0]="Age";
	StringGrid4->Cells[8][0]="Nb Livre";
	StringGrid4->Cells[9][0]="Livre 1";
	StringGrid4->Cells[10][0]="Livre 2";
	int a=1;

    for(int i=0;i<=b.getCmpEtudiant();i++)
	{
		if((b.getEtudiant(i).getLivre1()!=NULL && b.getEtudiant(i).getLivre1()->getCode()==NumberBox9->Value)||(b.getEtudiant(i).getLivre2()!=NULL && b.getEtudiant(i).getLivre2()->getCode()==NumberBox9->Value))
			a++;
	}
	StringGrid4->RowCount=a;
	a=1;
	for(int i=0;i<=b.getCmpEtudiant();i++)
	{
		if((b.getEtudiant(i).getLivre1()!=NULL && b.getEtudiant(i).getLivre1()->getCode()==NumberBox9->Value)||(b.getEtudiant(i).getLivre2()!=NULL && b.getEtudiant(i).getLivre2()->getCode()==NumberBox9->Value))
		{
			StringGrid4->Cells[0][a]=a;
			StringGrid4->Cells[1][a]=b.getEtudiant(i).getNom();
			StringGrid4->Cells[2][a]=b.getEtudiant(i).getPrenom();
			StringGrid4->Cells[3][a]=b.getEtudiant(i).getCin();
			StringGrid4->Cells[4][a]=b.getEtudiant(i).getSexe();
			StringGrid4->Cells[5][a]=b.getEtudiant(i).getSpecialite();
			StringGrid4->Cells[6][a]=b.getEtudiant(i).getNiveau();
			StringGrid4->Cells[7][a]=b.getEtudiant(i).getAge();
			StringGrid4->Cells[8][a]=b.getEtudiant(i).getNbLivre();
			if(b.getEtudiant(i).getLivre1()==NULL)
				StringGrid4->Cells[9][a]="-NaN-";
			else
				StringGrid4->Cells[9][a]=b.getEtudiant(i).getLivre1()->getCode();
			if(b.getEtudiant(i).getLivre2()==NULL)
				StringGrid4->Cells[10][a]="-NaN-";
			else
				StringGrid4->Cells[10][a]=b.getEtudiant(i).getLivre2()->getCode();
			a++;
		}
	}
		PanelListBook2->BringToFront();
	}catch(const char* msg){
	Label134->Visible=true;
	Label134->Caption=msg;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Panel22MouseEnter(TObject *Sender)
{
	if(Panel22->ParentBackground==true)
	{
		Panel22->ParentBackground=false;
		Panel22->Color=clActiveCaption;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel22MouseLeave(TObject *Sender)
{
	if(Panel22->Color==clActiveCaption)
		Panel22->ParentBackground=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Panel24MouseEnter(TObject *Sender)
{
	if(Panel24->ParentBackground==true)
	{
		Panel24->ParentBackground=false;
		Panel24->Color=clActiveCaption;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel24MouseLeave(TObject *Sender)
{
		if(Panel24->Color==clActiveCaption)
			Panel24->ParentBackground=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel23MouseEnter(TObject *Sender)
{
	if(Panel23->ParentBackground==true)
	{
		Panel23->ParentBackground=false;
		Panel23->Color=clActiveCaption;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel23MouseLeave(TObject *Sender)
{
	if(Panel23->Color==clActiveCaption)
		Panel23->ParentBackground=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel25MouseEnter(TObject *Sender)
{
	if(Panel25->ParentBackground==true)
	{
		Panel25->ParentBackground=false;
		Panel25->Color=clActiveCaption;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel25MouseLeave(TObject *Sender)
{
	if(Panel25->Color==clActiveCaption)
		Panel25->ParentBackground=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel27MouseEnter(TObject *Sender)
{
if(Panel27->ParentBackground==true)
	{
		Panel27->ParentBackground=false;
		Panel27->Color=clActiveCaption;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel27MouseLeave(TObject *Sender)
{
	if(Panel27->Color==clActiveCaption)
		Panel27->ParentBackground=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel8MouseEnter(TObject *Sender)
{
	if(Acces=="Admin")
	Panel8->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel8MouseLeave(TObject *Sender)
{
	if(Acces=="Admin")
   Panel8->Color=Panel26->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel9MouseEnter(TObject *Sender)
{
	if(Acces=="Admin")
	Panel9->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel9MouseLeave(TObject *Sender)
{
	if(Acces=="Admin")
    Panel9->Color=Panel26->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel11MouseEnter(TObject *Sender)
{
	if(Acces=="Admin")
   Panel11->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel11MouseLeave(TObject *Sender)
{
	if(Acces=="Admin")
	Panel11->Color=Panel26->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel12MouseLeave(TObject *Sender)
{
	if(Acces=="Admin")
	Panel12->Color=Panel26->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel12MouseEnter(TObject *Sender)
{
    if(Acces=="Admin")
	Panel12->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel10MouseEnter(TObject *Sender)
{
	Panel10->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel10MouseLeave(TObject *Sender)
{
	Panel10->Color=Panel26->Color;
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm1::Panel26MouseEnter(TObject *Sender)
{
	Panel26->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel26MouseLeave(TObject *Sender)
{
    Panel26->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel18MouseEnter(TObject *Sender)
{
	if(Acces=="Admin")
	Panel18->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel18MouseLeave(TObject *Sender)
{
	if(Acces=="Admin")
	Panel18->Color=Panel10->Color;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Panel19MouseEnter(TObject *Sender)
{
	if(Acces=="Admin")
   Panel19->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel19MouseLeave(TObject *Sender)
{
	if(Acces=="Admin")
    Panel19->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel20MouseEnter(TObject *Sender)
{
	Panel20->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel20MouseLeave(TObject *Sender)
{
    Panel20->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel21MouseEnter(TObject *Sender)
{
	if(Acces=="Admin")
	Panel21->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel21MouseLeave(TObject *Sender)
{
    if(Acces=="Admin")
    Panel21->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel13MouseEnter(TObject *Sender)
{
	if(Acces=="Admin")
	Panel13->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel13MouseLeave(TObject *Sender)
{
	if(Acces=="Admin")
    Panel13->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel15MouseEnter(TObject *Sender)
{
	if(Acces=="Admin")
	Panel15->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel15MouseLeave(TObject *Sender)
{
	 if(Acces=="Admin")
	 Panel15->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel14MouseEnter(TObject *Sender)
{
	Panel14->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel14MouseLeave(TObject *Sender)
{
    Panel14->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel16MouseEnter(TObject *Sender)
{
	if(Acces=="Admin")
	 Panel16->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel16MouseLeave(TObject *Sender)
{
	if(Acces=="Admin")
	Panel16->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel17MouseLeave(TObject *Sender)
{
	if(Acces=="Admin")
    Panel17->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel17MouseEnter(TObject *Sender)
{
    if(Acces=="Admin")
	Panel17->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel29MouseEnter(TObject *Sender)
{
	 Panel29->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel29MouseLeave(TObject *Sender)
{
	Panel29->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel30MouseEnter(TObject *Sender)
{
    Panel30->Color=clActiveCaption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel30MouseLeave(TObject *Sender)
{
    Panel30->Color=Panel10->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image46MouseEnter(TObject *Sender)
{
	Edit37->PasswordChar=0;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image46MouseLeave(TObject *Sender)
{
	Edit37->PasswordChar='*';
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel33Click(TObject *Sender)
{
	User *u;
	int tl=0;
	int le=0;
	int ld=0;
	int ie=0;
	int is=0;
	for(int i=0;i<=b.getCmpLivre();i++)
	{
		tl=tl+b.getLivre(i).getStock_Init();
		ld=ld+b.getLivre(i).getStock();
	}
	le=tl-ld;
	ie=b.getCmpEnseignant()+1;
	is=b.getCmpEtudiant()+1;
	Label8->Caption=tl;
	Label46->Caption=le;
	Label49->Caption=ld;
	Label11->Caption=is;
	Label18->Caption=ie;
	bool Status=true;
	try{
		if(Edit32->Text=="")
			throw "*Champs Obligatoire";
		if(b.RechercheUser(Edit32->Text)==NULL)
			throw "Id Utilistaeur n'existe pas";
		Label142->Visible=false;
		u=b.RechercheUser(Edit32->Text);
		}catch(const char*msg){
		Label142->Visible=true;
		Label142->Caption=msg;
		Status=false;
		}
	try{
		if(Edit37->Text=="")
			throw "*Champs Obligatoire";
		if(b.RechercheUser(Edit32->Text)!=NULL && u->getPass()!=Edit37->Text)
			throw "Mot de passe incorrect";
		Label145->Visible=false;
	}catch(const char*msg){
	Label145->Visible=true;
	Label145->Caption=msg;
	Status=false;
	}
	try{
		if(Status==false)
			throw "";
		Application->MessageBox(L"Connection avec succés",L"Terminer",MB_OK);
		Acces="Admin";
		PanelDashbord->BringToFront();
		Label13->Cursor=crHandPoint;
		Label14->Cursor=crHandPoint;
		Label15->Cursor=crHandPoint;
		Label117->Cursor=crHandPoint;
		Label115->Cursor=crHandPoint;
		Image7->Cursor=crHandPoint;
		Image8->Cursor=crHandPoint;
		Image9->Cursor=crHandPoint;
		Image37->Cursor=crHandPoint;
		Image39->Cursor=crHandPoint;
		Panel22->Cursor=crHandPoint;
		Panel23->Cursor=crHandPoint;
		Panel24->Cursor=crHandPoint;
		Panel25->Cursor=crHandPoint;
		Panel27->Cursor=crHandPoint;
		Panel42->Cursor=crHandPoint;
		Image41->Cursor=crHandPoint;
        Label297->Cursor=crHandPoint;
		Panel22->ParentBackground=true;
		Panel23->ParentBackground=true;
		Panel24->ParentBackground=false;
		Panel25->ParentBackground=true;
		Panel27->ParentBackground=true;
		Panel24->Color=clBtnFace;
		Label1->Caption=Edit32->Text;
		Label1->Left=60;
		Image1->Visible=false;
		Image49->Visible=true;
	}catch(const char* msg){}
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Panel34Click(TObject *Sender)
{
	Label152->Visible=false;
	Label151->Visible=false;
	Label154->Visible=false;
	Edit38->Text="";
	Edit40->Text="";
	PanelSignUp->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image48MouseEnter(TObject *Sender)
{
    Edit40->PasswordChar=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image48MouseLeave(TObject *Sender)
{
	Edit40->PasswordChar='*';
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel31Click(TObject *Sender)
{
	bool Status=true;
	try{
		if(Edit41->Text!="W269N-WFGWX-YVC9B-4J6C9")
			throw "Invalid Clé d'activation";
		Label154->Visible=false;
	}catch(const char*msg){
	Label154->Visible=true;
	Label154->Caption=msg;
	Status=false;
	}

	try{
		if(Edit38->Text=="")
			throw "*Champs Obligatoire";
		if(b.RechercheUser(Edit38->Text)!=NULL)
			throw "User existe déja";
		if(!b.Space(Edit38->Text))
			throw "Id utilisateur ne doit pas contenir des espace";
		Label151->Visible=false;
	}catch(const char*msg){
	Label151->Visible=true;
	Label151->Caption=msg;
	Status=false;
	}
	try{
		if(Edit40->Text=="")
			throw "*Champs Obligatoire";
		if(Edit40->Text.Length()<8)
			throw "Mot de passe doit contenir au moins 8 caractéres";
		Label152->Visible=false;
	}catch(const char*msg){
	Label152->Visible=true;
	Label152->Caption=msg;
	Status=false;
	}
	try{
		if(Status==false)
			throw "";
		User u(Edit38->Text,Edit40->Text);
		b.AjouterUser(u);
		b.sauvgarderUser();
		Acces="Admin";
		Application->MessageBox(L"Création du compte avec succés",L"Terminer",MB_OK);
        int tl=0;
		int le=0;
		int ld=0;
		int ie=0;
		int is=0;
		for(int i=0;i<=b.getCmpLivre();i++)
		{
			tl=tl+b.getLivre(i).getStock_Init();
			ld=ld+b.getLivre(i).getStock();
		}
		le=tl-ld;
		ie=b.getCmpEnseignant()+1;
		is=b.getCmpEtudiant()+1;
		Label8->Caption=tl;
		Label46->Caption=le;
		Label49->Caption=ld;
		Label11->Caption=is;
		Label18->Caption=ie;
		PanelDashbord->BringToFront();
		Label13->Cursor=crHandPoint;
		Label14->Cursor=crHandPoint;
		Label15->Cursor=crHandPoint;
		Label117->Cursor=crHandPoint;
		Label115->Cursor=crHandPoint;
		Image7->Cursor=crHandPoint;
		Image8->Cursor=crHandPoint;
		Image9->Cursor=crHandPoint;
		Image37->Cursor=crHandPoint;
		Image39->Cursor=crHandPoint;
		Panel22->Cursor=crHandPoint;
		Panel23->Cursor=crHandPoint;
		Panel24->Cursor=crHandPoint;
		Panel25->Cursor=crHandPoint;
		Panel27->Cursor=crHandPoint;
		Panel22->ParentBackground=true;
		Panel23->ParentBackground=true;
		Panel24->ParentBackground=false;
		Panel25->ParentBackground=true;
		Panel27->ParentBackground=true;
		Panel24->Color=clBtnFace;
		Panel42->Cursor=crHandPoint;
		Image41->Cursor=crHandPoint;
		Label297->Cursor=crHandPoint;
		Label1->Caption=Edit38->Text;
		Label1->Left=60;
		Image1->Visible=false;
		Image49->Visible=true;
	}catch(const char* msg){}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel38Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'annuler la Création d'un nouveau Compte ?",L"Confirmation",MB_YESNO)==6)
	{
        Edit32->Text="";
		Label142->Visible=false;
		Edit37->Text="";
		Label145->Visible=false;
		PanelLog->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel35Click(TObject *Sender)
{
	if(Application->MessageBox(L"Certaines fonctions ne sont pas autorisées, Continuer ?",L"Attention",MB_YESNO)==6)
	{
        int tl=0;
		int le=0;
		int ld=0;
		int ie=0;
		int is=0;
		for(int i=0;i<=b.getCmpLivre();i++)
		{
			tl=tl+b.getLivre(i).getStock_Init();
			ld=ld+b.getLivre(i).getStock();
		}
		le=tl-ld;
		ie=b.getCmpEnseignant()+1;
		is=b.getCmpEtudiant()+1;
		Label8->Caption=tl;
		Label46->Caption=le;
		Label49->Caption=ld;
		Label11->Caption=is;
		Label18->Caption=ie;
		Panel8->Color=clBtnShadow;
		Panel9->Color=clBtnShadow;
		Panel11->Color=clBtnShadow;
		Panel12->Color=clBtnShadow;
		Panel13->Color=clBtnShadow;
		Panel15->Color=clBtnShadow;
		Panel16->Color=clBtnShadow;
		Panel17->Color=clBtnShadow;
		Panel18->Color=clBtnShadow;
		Panel19->Color=clBtnShadow;
		Panel21->Color=clBtnShadow;
		Image41->Visible=false;
		Panel42->Visible=false;
		Label297->Visible=false;
		Acces="Guest";
        PanelDashbord->BringToFront();
		Label13->Cursor=crHandPoint;
		Label14->Cursor=crHandPoint;
		Label15->Cursor=crHandPoint;
		Label117->Cursor=crHandPoint;
		Label115->Cursor=crHandPoint;
		Image7->Cursor=crHandPoint;
		Image8->Cursor=crHandPoint;
		Image9->Cursor=crHandPoint;
		Image37->Cursor=crHandPoint;
		Image39->Cursor=crHandPoint;
		Panel22->Cursor=crHandPoint;
		Panel23->Cursor=crHandPoint;
		Panel24->Cursor=crHandPoint;
		Panel25->Cursor=crHandPoint;
		Panel27->Cursor=crHandPoint;
		Panel22->ParentBackground=true;
		Panel23->ParentBackground=true;
		Panel24->ParentBackground=false;
		Panel25->ParentBackground=true;
		Panel27->ParentBackground=true;
		Panel24->Color=clBtnFace;
		Label1->Caption="Invité";
		Label1->Left=94;
		Image1->Visible=false;
		Image49->Visible=false;
		Image50->Visible=true;
		Panel8->Cursor=crNo;
		Label21->Cursor=crNo;
		Image12->Cursor=crNo;
		Panel9->Cursor=crNo;
		Label22->Cursor=crNo;
		Image13->Cursor=crNo;
		Panel11->Cursor=crNo;
		Label32->Cursor=crNo;
		Image17->Cursor=crNo;
		Panel12->Cursor=crNo;
		Label33->Cursor=crNo;
		Image18->Cursor=crNo;
		Panel13->Cursor=crNo;
		Panel15->Cursor=crNo;
		Panel16->Cursor=crNo;
		Panel17->Cursor=crNo;
		Image19->Cursor=crNo;
		Image20->Cursor=crNo;
		Image22->Cursor=crNo;
		Image23->Cursor=crNo;
		Label35->Cursor=crNo;
		Label39->Cursor=crNo;
		Label36->Cursor=crNo;
		Label38->Cursor=crNo;
		Panel18->Cursor=crNo;
		Panel19->Cursor=crNo;
		Panel21->Cursor=crNo;
		Label41->Cursor=crNo;
		Label42->Cursor=crNo;
		Label44->Cursor=crNo;
		Image24->Cursor=crNo;
		Image25->Cursor=crNo;
		Image27->Cursor=crNo;
		Panel41->Cursor=crNo;
		Panel41->ParentBackground=false;
		Panel41->Color=clBtnShadow;
		Label212->Cursor=crNo;
		Label213->Cursor=crNo;
		Image59->Cursor=crNo;
		Panel40->ParentBackground=false;
		Panel40->Color=clBtnShadow;
		Panel28->ParentBackground=false;
		Panel40->Color=clBtnShadow;
		Panel40->Cursor=crNo;
		Label212->Cursor=crNo;
		Label213->Cursor=crNo;
		Label185->Cursor=crNo;
		Label184->Cursor=crNo;
		Image55->Cursor=crNo;
		Image59->Cursor=crNo;



	}
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Image52Click(TObject *Sender)
{
	Enseignant e;
	String n, p, sex,s,age,CIN;
	int ni;
	bool Status=true;
	try{
		if(Edit42->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsLetter(Edit42->Text))
			throw "Nom doit etre alphabetique [a-z][A-Z]";
		Label166->Visible=false;
		n=Edit42->Text;
	}catch(const char* msg){
			Label166->Visible=true;
			Label166->Caption=msg;
			Status=false;}
	try{
		if(Edit43->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsLetter(Edit43->Text))
			throw "Prenom doit etre alphabetique [a-z][A-Z]";
		Label167->Visible=false;
		p=Edit43->Text;

	}catch(const char* msg){
		Label167->Visible=true;
		Label167->Caption=msg;
		Status=false;}

	try{
		if(!(RadioButton1->Checked||RadioButton2->Checked))
			throw "* Champs Obligatoire";
		Label110->Visible=false;
		if(RadioButton1->Checked)
			sex="HOMME";
		if(RadioButton2->Checked)
			sex="FEMME";
	}catch(const char *msg){
		Label168->Visible=true;
		Label168->Caption=msg;
		Status=false;}

	try{
		if(Edit44->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsLetter(Edit44->Text))
			throw "Spécialité doit etre alphabetique [a-z] [A-Z]";
		Label169->Visible=false;
		s=Edit44->Text;

	}catch(const char* msg){
		Label169->Visible=true;
		Label169->Caption=msg;
		Status=false;}
	try{
		if(Edit45->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsInteger(Edit45->Text))
			throw "Age doit etre Numerique [18-99]";
		Label171->Visible=false;
		age=Edit45->Text;
	}catch(const char* msg){
		Label171->Visible=true;
		Label171->Caption=msg;
		Status=false;}
	try{
		if(Edit46->Text=="")
			throw "* Champs Obligatoire";
		if(Edit46->Text.Length()<8)
			throw "CIN doit contenir 8 chiffres";
		if(!e.IsInteger(Edit46->Text))
			throw "CIN doit etre Numerique [0-9]";
		if(b.RechercherEnseignant(Edit46->Text)!=NULL || b.RechercherEtudiant(Edit46->Text)!=NULL)
			throw "CIN existe deja";
		Label172->Visible=false;
		CIN=Edit46->Text;
    } catch(const char* msg){
		Label172->Visible=true;
		Label172->Caption=msg;
		Status=false;}
	try{
		if(Status==false)
			throw"";
		e=Enseignant(n,p,s,age,CIN,sex);
		b.AjouterEnseignant(e);
		Application->MessageBox(L"Ajout avec succées ",L"Terminer",MB_OK);
		PanelEnseignant->BringToFront();
	}catch(const char *msg){}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image51Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'annuler l'ajout de l'enseignant ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEnseignant->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel13Click(TObject *Sender)
{
	if(Acces=="Admin")
	{
        PanelAddEnseig->BringToFront();
		Edit42->Text="";
		Edit43->Text="";
		Edit44->Text="";
		Edit45->Text="";
		Edit46->Text="";
		RadioButton1->Checked=false;
		RadioButton2->Checked=false;
		Label166->Visible=false;
		Label167->Visible=false;
		Label168->Visible=false;
		Label169->Visible=false;
		Label171->Visible=false;
		Label172->Visible=false;
    }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit54Change(TObject *Sender)
{
	 String cin;
	 cin=Edit54->Text;
	 Enseignant *e=b.RechercherEnseignant(cin);
	 try
	 {
		 if(e==NULL)
		 {
			Edit47->Text="";
			Edit48->Text="";
			Edit49->Text="";
			Edit50->Text="";
			Edit53->Text="";
			NumberBox24->Value=0;
			Edit51->Text="";
			Edit52->Text="";
			Edit55->Text="";
			throw "Invalide CIN";
		 }
		 Label173->Visible=false;
		 Edit47->Text=e->getNom();
		 Edit48->Text=e->getPrenom();
		 Edit49->Text=e->getSexe();
		 Edit50->Text=e->getSpecialite();
		 Edit53->Text=e->getAge();
		 NumberBox24->Value=e->getNbLivre();
		 if(e->getLivre1()==NULL)
		 Edit51->Text="-NaN-";
		 else
		 Edit51->Text=e->getLivre1()->getCode();
		 if(e->getLivre2()==NULL)
		 Edit52->Text="-NaN-";
		 else
		 Edit52->Text=e->getLivre2()->getCode();
		 if(e->getLivre2()==NULL)
		 Edit55->Text="-NaN-";
		 else
		 Edit55->Text=e->getLivre2()->getCode();
	 }catch(const char* msg){ Label173->Visible=true;
		Label173->Caption=msg;  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel14Click(TObject *Sender)
{
		PanelSearchEnsei->BringToFront();
		Edit47->Text="";
		Edit48->Text="";
		Edit49->Text="";
		Edit50->Text="";
		Edit51->Text="";
		Edit52->Text="";
		Edit53->Text="";
		Edit54->Text="";
		Edit55->Text="";
		NumberBox24->Value=0;
		Label173->Visible=false;
		Label178->Visible=false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Panel40Click(TObject *Sender)
{
	if(Acces=="Admin")
	{
	try{
	if(Edit54->Text=="")
		throw "Saisir CIN enseignant";
	if(b.RechercherEnseignant(Edit54->Text)==NULL)
		throw "Verifier Cin enseignant";
	Label178->Visible=false;
	Enseignant *e=b.RechercherEnseignant(Edit54->Text);
	Edit65->Text=e->getNom();
	Edit66->Text=e->getPrenom();
	Edit67->Text=e->getSpecialite();
	Edit68->Text=e->getAge();
	Edit69->Text=e->getCin();
	if(e->getSexe()=="HOMME")
	RadioButton3->Checked=true;
	else
	RadioButton4->Checked=true;
	PanelUpdateEnseig->BringToFront();
	}catch(const char* msg){
	Label178->Visible=true;
	Label178->Caption=msg;
    }
}
//---------------------------------------------------------------------------

}
void __fastcall TForm1::Edit64Change(TObject *Sender)
{
	 String cin;
	 cin=Edit64->Text;
	 Enseignant *e=b.RechercherEnseignant(cin);
	 try
	 {
		 if(e==NULL)
		 {
			Edit56->Text="";
			Edit57->Text="";
			Edit58->Text="";
			Edit59->Text="";
			Edit60->Text="";
			NumberBox23->Value=0;
			Edit61->Text="";
			Edit62->Text="";
			Edit63->Text="";
			throw "Invalide CIN";
		 }
		 Label188->Visible=false;
		 Edit56->Text=e->getNom();
		 Edit57->Text=e->getPrenom();
		 Edit58->Text=e->getSexe();
		 Edit59->Text=e->getSpecialite();
		 Edit62->Text=e->getAge();
		 NumberBox23->Value=e->getNbLivre();
		 if(e->getLivre1()==NULL)
		 Edit60->Text="-NaN-";
		 else
		 Edit60->Text=e->getLivre1()->getCode();
		 if(e->getLivre2()==NULL)
		 Edit61->Text="-NaN-";
		 else
		 Edit61->Text=e->getLivre2()->getCode();
		 if(e->getLivre2()==NULL)
		 Edit63->Text="-NaN-";
		 else
		 Edit63->Text=e->getLivre2()->getCode();
	 }catch(const char* msg){ Label188->Visible=true;
		Label188->Caption=msg;  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image56Click(TObject *Sender)
{
	try{
		if(Label188->Visible==true || Edit64->Text=="")
			throw "";
		Enseignant *e=b.RechercherEnseignant(Edit64->Text);
		if(e->getLivre1()!=NULL||e->getLivre2()!=NULL||e->getLivre3()!=NULL)
		{
			Application->MessageBox(L"L'enseignant a déja emprunté des livres, essayer de les rendre puis le supprimer",L"Impossible",MB_OK);
		}
		else
		{
			if(Application->MessageBox(L"Vous êtes sur de supprimer l'enseignant ?",L"Suppression",MB_YESNO)==6)
			{
				b.SupprimerEnseignantApartirCin(Edit64->Text);
				Application->MessageBox(L"Suppression avec Succés",L"Terminer",MB_OK);
				PanelEnseignant->BringToFront();
			}
		}
	}catch (const char*msg){}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image57Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'annuler la suppression l'enseignant ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEnseignant->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel15Click(TObject *Sender)
{
	if(Acces=="Admin")
	{
		Label188->Visible=false;
		Edit64->Text="";
		Edit56->Text="";
		Edit57->Text="";
		Edit58->Text="";
		Edit59->Text="";
		Edit60->Text="";
		Edit61->Text="";
		Edit62->Text="";
		Edit63->Text="";
		NumberBox23->Value=0;
        PanelDeleteEnsei->BringToFront();
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Panel40MouseEnter(TObject *Sender)
{
	if(Acces=="Admin")
	{
	Panel40->ParentBackground=false;
	Panel40->Color=clSkyBlue;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel40MouseLeave(TObject *Sender)
{
	if(Acces=="Admin")
	{
	Panel40->ParentBackground=true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image58Click(TObject *Sender)
{
	Etudiant e;
	Enseignant *en=b.RechercherEnseignant(Edit54->Text);
	bool Status=true;
    try{
		if(Edit65->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsLetter(Edit65->Text))
			throw "Nom doit etre alphabetique [a-z][A-Z]";
		Label205->Visible=false;

	}catch(const char* msg){
			Label205->Visible=true;
			Label205->Caption=msg;
			Status=false;}
	try{
		if(Edit66->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsLetter(Edit66->Text))
			throw "Prenom doit etre alphabetique [a-z][A-Z]";
		Label206->Visible=false;


	}catch(const char* msg){
		Label206->Visible=true;
		Label206->Caption=msg;
		Status=false;}
	try{
		if(Edit67->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsLetter(Edit67->Text))
			throw "Spécialité doit etre alphabetique [a-z] [A-Z]";
		Label208->Visible=false;

	}catch(const char* msg){
		Label208->Visible=true;
		Label208->Caption=msg;
		Status=false;}
	try{
		if(Edit68->Text=="")
			throw "* Champs Obligatoire";
		if(!e.IsInteger(Edit68->Text))
			throw "Age doit etre Numerique [18-99]";
		Label209->Visible=false;
	}catch(const char* msg){
		Label209->Visible=true;
		Label209->Caption=msg;
		Status=false;}
	try{
		if(Edit69->Text=="")
			throw "* Champs Obligatoire";
		if(Edit69->Text.Length()<8)
			throw "CIN doit contenir 8 chiffres";
		if(!e.IsInteger(Edit69->Text))
			throw "CIN doit etre Numerique [0-9]";
		if(Edit69->Text!=Edit54->Text && (b.RechercherEnseignant(Edit69->Text)!=NULL || b.RechercherEtudiant(Edit69->Text)!=NULL))
			throw "CIN existe deja";
		Label210->Visible=false;
    } catch(const char* msg){
		Label210->Visible=true;
		Label210->Caption=msg;
		Status=false;}
	try{
		if(Status==false)
			throw"";
		en->setNom(Edit65->Text);
		en->setPrenom(Edit66->Text);
		en->setSpecialite(Edit67->Text);
		en->setAge(Edit68->Text);
		en->setCin(Edit69->Text);
		if(RadioButton3->Checked==true)
		en->setSexe("HOMME");
		else
		en->setSexe("FEMME");
		Application->MessageBox(L"Modification avec Succés ",L"Terminer",MB_OK);
		PanelEnseignant->BringToFront();
	}catch(const char *msg){}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image54Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'aborder les modifications ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEnseignant->BringToFront();
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Panel41MouseEnter(TObject *Sender)
{
		if(Acces=="Admin")
		{
			Panel41->ParentBackground=false;
			Panel41->Color=clSkyBlue;
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel41MouseLeave(TObject *Sender)
{
    	if(Acces=="Admin")
	Panel41->ParentBackground=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel41Click(TObject *Sender)
{
	if(Acces=="Admin")
	{
	try{
	if(Edit29->Text=="")
		throw "Saisir CIN etudiant";
	if(b.RechercherEtudiant(Edit29->Text)==NULL)
		throw "Verifier Cin etudiant";
	Label211->Visible=false;
	Etudiant *e=b.RechercherEtudiant(Edit29->Text);
	Edit70->Text=e->getNom();
	Edit71->Text=e->getPrenom();
	Edit72->Text=e->getSpecialite();
	Edit73->Text=e->getAge();
	Edit74->Text=e->getCin();
	NumberBox26->Value=e->getNiveau();
	if(e->getSexe()=="HOMME")
	RadioButton5->Checked=true;
	else
	RadioButton6->Checked=true;
	Label221->Visible=false;
	Label222->Visible=false;
	Label223->Visible=false;
	Label224->Visible=false;
	Label225->Visible=false;
	Label226->Visible=false;
	Label230->Visible=false;
	PanelUpdateStud->BringToFront();
	}catch(const char* msg){
	Label211->Visible=true;
	Label211->Caption=msg;
	}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image31Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'aborder les modifications ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEtudiant->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image60Click(TObject *Sender)
{
	Etudiant *e=b.RechercherEtudiant(Edit29->Text);
	bool Status=true;
    try{
		if(Edit70->Text=="")
			throw "* Champs Obligatoire";
		if(!e->IsLetter(Edit70->Text))
			throw "Nom doit etre alphabetique [a-z][A-Z]";
		Label221->Visible=false;

	}catch(const char* msg){
			Label221->Visible=true;
			Label221->Caption=msg;
			Status=false;}
	try{
		if(Edit71->Text=="")
			throw "* Champs Obligatoire";
		if(!e->IsLetter(Edit71->Text))
			throw "Prenom doit etre alphabetique [a-z][A-Z]";
		Label222->Visible=false;


	}catch(const char* msg){
		Label222->Visible=true;
		Label222->Caption=msg;
		Status=false;}
	try{
		if(Edit72->Text=="")
			throw "* Champs Obligatoire";
		if(!e->IsLetter(Edit72->Text))
			throw "Spécialité doit etre alphabetique [a-z] [A-Z]";
		Label224->Visible=false;

	}catch(const char* msg){
		Label224->Visible=true;
		Label224->Caption=msg;
		Status=false;}
	try{
		if(Edit73->Text=="")
			throw "* Champs Obligatoire";
		if(!e->IsInteger(Edit73->Text))
			throw "Age doit etre Numerique [18-99]";
		Label225->Visible=false;
	}catch(const char* msg){
		Label225->Visible=true;
		Label225->Caption=msg;
		Status=false;}
	try{
		if(Edit74->Text=="")
			throw "* Champs Obligatoire";
		if(Edit74->Text.Length()<8)
			throw "CIN doit contenir 8 chiffres";
		if(!e->IsInteger(Edit74->Text))
			throw "CIN doit etre Numerique [0-9]";
		if(Edit74->Text!=Edit29->Text && (b.RechercherEnseignant(Edit74->Text)!=NULL || b.RechercherEtudiant(Edit74->Text)!=NULL))
			throw "CIN existe deja";
		Label226->Visible=false;
    } catch(const char* msg){
		Label226->Visible=true;
		Label226->Caption=msg;
		Status=false;}
	try{
		if(NumberBox26->Value==0)
			throw "* Champs Obligatoire";
		Label230->Visible=false;
	} catch(const char* msg){
		Label230->Visible=true;
		Label230->Caption=msg;
		Status=false;}
	try{
		if(Status==false)
			throw"";
		e->setNom(Edit70->Text);
		e->setPrenom(Edit71->Text);
		e->setSpecialite(Edit72->Text);
		e->setAge(Edit73->Text);
		e->setCin(Edit74->Text);
		e->setNiveau(NumberBox26->Value);
		if(RadioButton5->Checked==true)
		e->setSexe("HOMME");
		else
		e->setSexe("FEMME");
		Application->MessageBox(L"Modification avec Succés ",L"Terminer",MB_OK);
		PanelEtudiant->BringToFront();
	}catch(const char *msg){}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------


void __fastcall TForm1::Panel26Click(TObject *Sender)
{
	StringGrid1->RowCount=b.getCmpEtudiant()+2;
	StringGrid1->ColWidths[0] = 35;
	StringGrid1->Cells[1][0]="Nom";
	StringGrid1->Cells[2][0]="Prenom";
	StringGrid1->ColWidths[7]=70;
	StringGrid1->Cells[3][0]="CIN";
	StringGrid1->Cells[4][0]="Sexe";
	StringGrid1->Cells[5][0]="Specialite";
	StringGrid1->ColWidths[6]=60;
	StringGrid1->Cells[6][0]="Niveau";
	StringGrid1->ColWidths[7]=45;
	StringGrid1->Cells[7][0]="Age";
	StringGrid1->Cells[8][0]="Nb Livre";
	StringGrid1->Cells[9][0]="Livre 1";
	StringGrid1->Cells[10][0]="Livre 2";
	int j=1;
	for(int i=0;i<=b.getCmpEtudiant();i++)
	{
		StringGrid1->Cells[0][j]=j;
		StringGrid1->Cells[1][j]=b.getEtudiant(i).getNom();
		StringGrid1->Cells[2][j]=b.getEtudiant(i).getPrenom();
		StringGrid1->Cells[3][j]=b.getEtudiant(i).getCin();
		StringGrid1->Cells[4][j]=b.getEtudiant(i).getSexe();
		StringGrid1->Cells[5][j]=b.getEtudiant(i).getSpecialite();
		StringGrid1->Cells[6][j]=b.getEtudiant(i).getNiveau();
		StringGrid1->Cells[7][j]=b.getEtudiant(i).getAge();
		StringGrid1->Cells[8][j]=b.getEtudiant(i).getNbLivre();
		if(b.getEtudiant(i).getLivre1()==NULL)
			StringGrid1->Cells[9][j]="-NaN-";
		else
			StringGrid1->Cells[9][j]=b.getEtudiant(i).getLivre1()->getCode();
		if(b.getEtudiant(i).getLivre2()==NULL)
			StringGrid1->Cells[10][j]="-NaN-";
		else
			StringGrid1->Cells[10][j]=b.getEtudiant(i).getLivre2()->getCode();
		j=j+1;
	}
	PanelListStud->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image61Click(TObject *Sender)
{
	PanelEtudiant->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image33Click(TObject *Sender)
{
	bool Status=true;
	try{
		if(NumberBox11->Value==0)
			throw "*Champs obligatoire";
		Label86->Visible=false;
	}catch(const char* msg){
		Label86->Visible=true;
		Label86->Caption=msg;
		Status=false;
	}
	try{
        if(Edit75->Text=="")
			throw "*Champs obligatoire";
		Label85->Visible=false;
	}catch(const char* msg){
		Label85->Visible=true;
		Label85->Caption=msg;
		Status=false;
	}

	try{
		if(Status==false)
			throw"";
		if(b.RechercherEtudiant(Edit75->Text)->getLivre1()!=NULL && b.RechercherEtudiant(Edit75->Text)->getLivre2()!=NULL)
			throw"Etudiant a déja emprunter deux livre";
		if((b.RechercherEtudiant(Edit75->Text)->getLivre1()!=NULL&&b.RechercherEtudiant(Edit75->Text)->getLivre1()->getCode()==NumberBox11->Value)|| (b.RechercherEtudiant(Edit75->Text)->getLivre2()!=NULL && b.RechercherEtudiant(Edit75->Text)->getLivre2()->getCode()==NumberBox11->Value))
			throw " Etudiant a deja emprunter ce livre " ;
		Label84->Visible=false;
	}catch(const char* msg){
	Label84->Visible=true;
	Label84->Caption=msg;
	Status =false;
	}
	try{
		if(Status==false)
			throw"";
		 if(b.RechercherLivre(NumberBox11->Value)->getStock()==0)
			throw " Livre En rupture de stock ";
		 Label83->Visible=false;
	}catch(const char* msg){
	Label83->Visible=true;
	Label83->Caption=msg;
	Status =false;
	}
	try{
		if(Label85->Visible==true)
			throw"";
		if(Label86->Visible==true)
			throw"";
		if(Status==false)
			throw "";
		b.Empreinter(b.RechercherEtudiant(Edit75->Text),b.RechercherLivre(NumberBox11->Value));
		Application->MessageBox(L"Emprunte avec Succés",L"Terminer",MB_OK);
		PanelEtudiant->BringToFront();
	}catch(const char* msg){}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit75Change(TObject *Sender)
{
	Etudiant *e=b.RechercherEtudiant(Edit75->Text);
	try
	{
		if(e==NULL)
			throw "CIN Invalide";
		Label85->Visible=false;
		Edit9->Text=e->getNom();
		Edit10->Text=e->getPrenom();
		Edit11->Text=e->getSexe();
		Edit12->Text=e->getSpecialite();
		Edit31->Text=e->getAge();
		NumberBox8->Value=e->getNiveau();
		NumberBox10->Value=e->getNbLivre();
	}catch(const char* msg){
		Label85->Visible=true;
		Label85->Caption=msg;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NumberBox11Change(TObject *Sender)
{
	Livre *l=b.RechercherLivre(NumberBox11->Value);
	try
	{
		if(l==NULL)
			throw "Code livre Invalide";
		Label86->Visible=false;
		Edit13->Text=l->getTitre();
		Edit14->Text=l->getAuteur();
		Edit15->Text=l->getCode();
		Edit17->Text=l->getDate();
		NumberBox12->Value=l->getStock();

	}catch(const char* msg){
		Label86->Visible=true;
		Label86->Caption=msg;
	}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Image35Click(TObject *Sender)
{
	bool Status=true;
	Etudiant *e=b.RechercherEtudiant(Edit77->Text);
	try{
		if(Label96->Visible==false && ComboBoxEx1->Text=="")
			throw "*Champs Obligatoire";
		Label228->Visible=false;
	}catch(const char* msg){
		Label228->Visible=true;
		Label228->Caption=msg;
		Status=false;
	}
	try{
		if(Edit77->Text=="")
			throw "*Champs Obligatoire";
		if(Label97->Visible==true)
			throw"";
		if(Label228->Visible==true || Status==false)
			throw"";
		b.Rendre(e,ComboBoxEx1->Text.ToInt());
		if(Application->MessageBox(L"Vous êtes sur de rendre ce livre ?",L"Confirmation",MB_YESNO)==6)
		{
		PanelEtudiant->BringToFront();
		}
	Label97->Visible=false;
	}catch(const char* msg){
		Label97->Visible=true;
		Label97->Caption=msg;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit77Change(TObject *Sender)
{
		Edit21->Text="";
		Edit22->Text="";
		Edit23->Text="";
		Edit24->Text="";
		NumberBox17->Value=0;
		Edit16->Text="";
		Edit18->Text="";
		Edit19->Text="";
		Edit20->Text="";
		Edit76->Text="";
		NumberBox14->Value=0;
		NumberBox16->Value=0;
  Etudiant *e=b.RechercherEtudiant(Edit77->Text);
	try
	{
		if(e==NULL)
			throw "Invalid CIN";
		Label97->Visible=false;
		ComboBoxEx1->Clear();
		if(e->getLivre1()!=NULL)
		ComboBoxEx1->Items->Add(e->getLivre1()->getCode());
		if(e->getLivre2()!=NULL)
		ComboBoxEx1->Items->Add(e->getLivre2()->getCode());
		Edit16->Text=e->getNom();
		Edit18->Text=e->getPrenom();
		Edit19->Text=e->getSexe();
		Edit20->Text=e->getSpecialite();
		Edit76->Text=e->getAge();
		NumberBox14->Value=e->getNiveau();
		NumberBox16->Value=e->getNbLivre();
	}catch(const char*msg)
	{
		Label97->Visible=true;
		Label97->Caption=msg;
		ComboBoxEx1->Clear();
	}

	try{
		if(e!=NULL && e->getNbLivre()==0)
			throw "L'étudiant n'a pas emprunter aucun Livre";
		Label96->Visible=false;
    }catch(const char*msg)
	{
		Label96->Visible=true;
		Label96->Caption=msg;
	}
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBoxEx1Select(TObject *Sender)
{
	Livre *l=b.RechercherLivre(ComboBoxEx1->Text.ToInt());
	try{
		if(l==NULL)
			throw "";
		Edit21->Text=l->getTitre();
		Edit22->Text=l->getAuteur();
		Edit23->Text=l->getCode();
		Edit24->Text=l->getDate();
		NumberBox17->Value=l->getStock();

	}catch(const char* msg){}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel33MouseEnter(TObject *Sender)
{
	Panel33->ParentBackground=false;
	Panel33->Color=clSkyBlue;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Panel33MouseLeave(TObject *Sender)
{
	Panel33->ParentBackground=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel34MouseEnter(TObject *Sender)
{
	Panel34->ParentBackground=false;
	Panel34->Color=clSkyBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel34MouseLeave(TObject *Sender)
{
    Panel34->ParentBackground=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel35MouseEnter(TObject *Sender)
{
	Panel35->ParentBackground=false;
	Panel35->Color=clSkyBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel35MouseLeave(TObject *Sender)
{
    Panel35->ParentBackground=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit81Change(TObject *Sender)
{
	String cin;
	cin=Edit81->Text;
	Etudiant *e=b.RechercherEtudiant(cin);
	 try
	 {
		 if(e==NULL)
		 {
			Edit5->Text="";
			Edit6->Text="";
			Edit7->Text="";
			Edit8->Text="";
			NumberBox1->Value=0;
			Edit80->Text="";
			NumberBox2->Value=0;
			Edit78->Text="";
			Edit79->Text="";
		 }
		 if(e==NULL)
			throw "Invalide CIN";
		 Label234->Visible=false;
		 Edit5->Text=e->getNom();
		 Edit6->Text=e->getPrenom();
		 Edit7->Text=e->getSexe();
		 Edit8->Text=e->getSpecialite();
		 NumberBox1->Value=e->getNiveau();
		 Edit80->Text=e->getAge();
		 NumberBox2->Value=e->getNbLivre();
		 if(e->getLivre1()==NULL)
		 Edit78->Text="-NaN-";
		 else
		 Edit78->Text=e->getLivre1()->getCode();
		 if(e->getLivre2()==NULL)
		 Edit79->Text="-NaN-";
		 else
		 Edit79->Text=e->getLivre2()->getCode();
	 }catch(const char* msg){
	 	Label234->Visible=true;
		Label234->Caption=msg;  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image62Click(TObject *Sender)
{
	try{
		if(Label234->Visible==True || Edit81->Text== "")
			throw "";
		Etudiant *e=b.RechercherEtudiant(Edit81->Text);
		if(e->getLivre1()!=NULL||e->getLivre2()!=NULL)
		{
			Application->MessageBox(L"L'étudiant a déja emprunté des livres, essayer de les rendre puis le supprimer",L"Impossible",MB_OK);
		}
		else
		{
			if(Application->MessageBox(L"Vous êtes sur de supprimer l'étudiant ?",L"Suppression",MB_YESNO)==6)
			{
				b.SupprimerEtudiantApartirCin(Edit81->Text);
				Application->MessageBox(L"Suppression avec Succés",L"Terminer",MB_OK);
				PanelEtudiant->BringToFront();
			}
		}
	}catch (const char*msg){}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image63Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'annuler la suppression l'étudiant ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEtudiant->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image53Click(TObject *Sender)
{
    if(Application->MessageBox(L"Vous êtes sur d'annuler la recherche de l'enseignant ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEnseignant->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit91Change(TObject *Sender)
{
	Enseignant *e=b.RechercherEnseignant(Edit91->Text);
	try
	{
		if(e==NULL)
			throw "CIN Invalide";
		Label238->Visible=false;
		Edit82->Text=e->getNom();
		Edit83->Text=e->getPrenom();
		Edit84->Text=e->getSexe();
		Edit85->Text=e->getSpecialite();
		Edit86->Text=e->getAge();
		NumberBox7->Value=e->getNbLivre();
	}catch(const char* msg){
		Label238->Visible=true;
		Label238->Caption=msg;
		Edit82->Text="";
		Edit83->Text="";
		Edit84->Text="";
		Edit85->Text="";
		Edit86->Text="";
		NumberBox7->Value=0;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NumberBox13Change(TObject *Sender)
{
    Livre *l=b.RechercherLivre(NumberBox13->Value);
	try
	{
		if(l==NULL)
			throw "Code livre Invalide";
		Label239->Visible=false;
		Edit87->Text=l->getTitre();
		Edit88->Text=l->getAuteur();
		Edit89->Text=l->getCode();
		Edit90->Text=l->getDate();
		NumberBox15->Value=l->getStock();

	}catch(const char* msg){
		Label239->Visible=true;
		Label239->Caption=msg;
		Edit87->Text="";
		Edit88->Text="";
		Edit89->Text="";
		Edit90->Text="";
		NumberBox15->Value=0;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image28Click(TObject *Sender)
{
    if(Application->MessageBox(L"Vous êtes sur d'annuler l'emprunt d'un livre ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEnseignant->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image29Click(TObject *Sender)
{
    bool Status=true;
	try{
		if(NumberBox13->Value==0)
			throw "*Champs obligatoire";
		Label239->Visible=false;
	}catch(const char* msg){
		Label239->Visible=true;
		Label239->Caption=msg;
		Status=false;
	}
	try{
		if(Edit91->Text=="")
			throw "*Champs obligatoire";
		Label238->Visible=false;
	}catch(const char* msg){
		Label238->Visible=true;
		Label238->Caption=msg;
		Status=false;
	}

	try{
		if(Status==false)
			throw"";
		if(b.RechercherEnseignant(Edit91->Text)->getLivre1()!=NULL && b.RechercherEnseignant(Edit91->Text)->getLivre2()!=NULL && b.RechercherEnseignant(Edit91->Text)->getLivre3()!=NULL)
			throw"Enseignant a déja emprunter trois livres";
		if((b.RechercherEnseignant(Edit91->Text)->getLivre1()!=NULL && b.RechercherEnseignant(Edit91->Text)->getLivre1()->getCode()==NumberBox13->Value)|| (b.RechercherEnseignant(Edit91->Text)->getLivre2()!=NULL && b.RechercherEnseignant(Edit91->Text)->getLivre2()->getCode()==NumberBox13->Value)|| (b.RechercherEnseignant(Edit91->Text)->getLivre3()!=NULL && b.RechercherEnseignant(Edit91->Text)->getLivre3()->getCode()==NumberBox13->Value))
			throw " Enseignant a deja emprunter ce livre " ;
		Label247->Visible=false;
	}catch(const char* msg){
	Label247->Visible=true;
	Label247->Caption=msg;
	Status =false;
	}
	try{
		if(Status==false)
			throw"";
		 if(b.RechercherLivre(NumberBox13->Value)->getStock()==0)
			throw " Livre En rupture de stock ";
		 Label253->Visible=false;
	}catch(const char* msg){
	Label253->Visible=true;
	Label253->Caption=msg;
	Status =false;
	}
	try{
		if(Label239->Visible==true)
			throw"";
		if(Label238->Visible==true)
			throw"";
		if(Status==false)
			throw "";
		b.Empreinter(b.RechercherEnseignant(Edit91->Text),b.RechercherLivre(NumberBox13->Value));
		Application->MessageBox(L"Emprunte avec Succés",L"Terminer",MB_OK);
		PanelEnseignant->BringToFront();
	}catch(const char* msg){}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel16Click(TObject *Sender)
{
	if(Acces=="Admin")
		{
			Label253->Visible=false;
			Label239->Visible=false;
			Label238->Visible=false;
			Label247->Visible=false;
            Edit87->Text="";
			Edit88->Text="";
			Edit89->Text="";
			Edit90->Text="";
			NumberBox15->Value=0;
            Edit82->Text="";
			Edit83->Text="";
			Edit84->Text="";
			Edit85->Text="";
			Edit86->Text="";
			NumberBox7->Value=0;
			Edit91->Text="";
			NumberBox13->Value=0;
            PanelEmprunterEnsei->BringToFront();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel29Click(TObject *Sender)
{
	StringGrid2->RowCount=b.getCmpEnseignant()+2;
	StringGrid2->ColWidths[0] = 35;
	StringGrid2->Cells[1][0]="Nom";
	StringGrid2->Cells[2][0]="Prenom";
	StringGrid2->Cells[3][0]="CIN";
	StringGrid2->Cells[4][0]="Sexe";
	StringGrid2->Cells[5][0]="Specialite";
	StringGrid2->ColWidths[6]=45;
	StringGrid2->Cells[6][0]="Age";
	StringGrid2->ColWidths[7]=66;
	StringGrid2->Cells[7][0]="Nb Livre";
	StringGrid2->Cells[8][0]="Livre 1";
	StringGrid2->Cells[9][0]="Livre 2";
	StringGrid2->Cells[10][0]="Livre 3";
	int j=1;
	for(int i=0;i<=b.getCmpEnseignant();i++)
	{
		StringGrid2->Cells[0][j]=j;
		StringGrid2->Cells[1][j]=b.getEnseignant(i).getNom();
		StringGrid2->Cells[2][j]=b.getEnseignant(i).getPrenom();
		StringGrid2->Cells[3][j]=b.getEnseignant(i).getCin();
		StringGrid2->Cells[4][j]=b.getEnseignant(i).getSexe();
		StringGrid2->Cells[5][j]=b.getEnseignant(i).getSpecialite();
		StringGrid2->Cells[6][j]=b.getEnseignant(i).getAge();
		StringGrid2->Cells[7][j]=b.getEnseignant(i).getNbLivre();
		if(b.getEnseignant(i).getLivre1()==NULL)
			StringGrid2->Cells[8][j]="-NaN-";
		else
			StringGrid2->Cells[8][j]=b.getEnseignant(i).getLivre1()->getCode();
		if(b.getEnseignant(i).getLivre2()==NULL)
			StringGrid2->Cells[9][j]="-NaN-";
		else
			StringGrid2->Cells[9][j]=b.getEnseignant(i).getLivre2()->getCode();
		if(b.getEnseignant(i).getLivre3()==NULL)
			StringGrid2->Cells[10][j]="-NaN-";
		else
			StringGrid2->Cells[10][j]=b.getEnseignant(i).getLivre3()->getCode();
		j=j+1;
	}
	PanelListEnseig->BringToFront();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image64Click(TObject *Sender)
{
    PanelEnseignant->BringToFront();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image66Click(TObject *Sender)
{
	bool Status=true;
	Enseignant *e=b.RechercherEnseignant(Edit101->Text);
	try{
		if(Label266->Visible==false && ComboBoxEx2->Text=="")
			throw "*Champs Obligatoire";
		Label258->Visible=false;
	}catch(const char* msg){
		Label258->Visible=true;
		Label258->Caption=msg;
		Status=false;
	}
	try{
		if(Edit101->Text=="")
			throw "*Champs Obligatoire";
		if(Label266->Visible==true)
			throw"";
		if(Label256->Visible==true || Status==false)
			throw"";
		b.Rendre(e,ComboBoxEx2->Text.ToInt());
		if(Application->MessageBox(L"Vous êtes sur de rendre ce livre ?",L"Confirmation",MB_YESNO)==6)
		{
		PanelEnseignant->BringToFront();
		}
	Label256->Visible=false;
	}catch(const char* msg){
		Label256->Visible=true;
		Label256->Caption=msg;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit101Change(TObject *Sender)
{
		Edit97->Text="";
		Edit98->Text="";
		Edit99->Text="";
		Edit100->Text="";
		NumberBox27->Value=0;
		Edit92->Text="";
		Edit93->Text="";
		Edit94->Text="";
		Edit95->Text="";
		Edit96->Text="";
		NumberBox25->Value=0;
		Label256->Visible=false;
		Label266->Visible=false;
		Label258->Visible=false;
  Enseignant *e=b.RechercherEnseignant(Edit101->Text);
	try
	{
		if(e==NULL)
			throw "Invalid CIN";
		Label256->Visible=false;
		ComboBoxEx2->Clear();
		if(e->getLivre1()!=NULL)
		ComboBoxEx2->Items->Add(e->getLivre1()->getCode());
		if(e->getLivre2()!=NULL)
		ComboBoxEx2->Items->Add(e->getLivre2()->getCode());
		if(e->getLivre3()!=NULL)
		ComboBoxEx2->Items->Add(e->getLivre3()->getCode());
		Edit92->Text=e->getNom();
		Edit93->Text=e->getPrenom();
		Edit94->Text=e->getSexe();
		Edit95->Text=e->getSpecialite();
		Edit96->Text=e->getAge();
		NumberBox25->Value=e->getNbLivre();
	}catch(const char*msg)
	{
		Label256->Visible=true;
		Label256->Caption=msg;
		ComboBoxEx2->Clear();
	}

	try{
		if(e!=NULL && e->getNbLivre()==0)
			throw "L'enseignant n'a pas emprunter aucun Livre";
		Label266->Visible=false;
    }catch(const char*msg)
	{
		Label266->Visible=true;
		Label266->Caption=msg;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBoxEx2Select(TObject *Sender)
{
	Livre *l=b.RechercherLivre(ComboBoxEx2->Text.ToInt());
	try{
		if(l==NULL)
			throw "";
		Edit97->Text=l->getTitre();
		Edit98->Text=l->getAuteur();
		Edit99->Text=l->getCode();
		Edit100->Text=l->getDate();
		NumberBox27->Value=l->getStock();

	}catch(const char* msg){}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel17Click(TObject *Sender)
{
	if(Acces=="Admin")
	{
		Edit101->Text="";
		ComboBoxEx2->Clear();
		Edit97->Text="";
		Edit98->Text="";
		Edit99->Text="";
		Edit100->Text="";
		NumberBox27->Value=0;
		Edit92->Text="";
		Edit93->Text="";
		Edit94->Text="";
		Edit95->Text="";
		Edit96->Text="";
		NumberBox25->Value=0;
		Label256->Visible=false;
		Label266->Visible=false;
		Label258->Visible=false;
		PanelRendreEnsei->BringToFront();
    }

}
//---------------------------------------------------------------------------



void __fastcall TForm1::NumberBox31ChangeValue(TObject *Sender)
{
	try{
		if(b.RechercherLivre(NumberBox31->Value)==NULL)
		{
			Edit103->Text="";
			Edit104->Text="";
			NumberBox30->Value=0;
			NumberBox3->Value=0;
			NumberBox28->Value=0;
			NumberBox29->Value=0;
			Edit105->Text="";
		}
		if(b.RechercherLivre(NumberBox31->Value)==NULL)
			throw "Invalid code";
		Label273->Visible=false;
		Livre *l=b.RechercherLivre(NumberBox31->Value);
		Edit103->Text=l->getTitre();
		Edit104->Text=l->getAuteur();
		NumberBox30->Value=l->getCode();
		NumberBox3->Value=l->getStock_Init();
		NumberBox28->Value=l->getStock();
		NumberBox29->Value=l->getStock_Init()-l->getStock();
		Edit105->Text=l->getDate();
	}catch(const char* msg){
		Label273->Visible=true;
		Label273->Caption=msg;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image68Click(TObject *Sender)
{
	if(Application->MessageBox(L"Vous êtes sur d'annuler la suppression du livre ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelLivre->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image67Click(TObject *Sender)
{
    try{
		if(Label234->Visible==True || NumberBox31->Value==0)
			throw "";
		Livre *l=b.RechercherLivre(NumberBox31->Value);
		if(NumberBox29->Value!=0)
		{
			Application->MessageBox(L"Ce Livre est déja emprunter, Vous ne pouvez pas le supprimer",L"Impossible",MB_OK);
		}
		else
		{
			if(Application->MessageBox(L"Vous êtes sur de supprimer Le Livre ?",L"Suppression",MB_YESNO)==6)
			{
				b.SupprimerLivreApartirCode(NumberBox31->Value);
				Application->MessageBox(L"Suppression avec Succés",L"Terminer",MB_OK);
				PanelLivre->BringToFront();
			}
		}
	}catch (const char*msg){}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel19Click(TObject *Sender)
{
	if(Acces=="Admin")
	{
			Edit103->Text="";
			Edit104->Text="";
			NumberBox30->Value=0;
			NumberBox3->Value=0;
			NumberBox28->Value=0;
			NumberBox29->Value=0;
			Edit105->Text="";
			NumberBox31->Value=0;
			Label273->Visible=false;
            PanelDeleteBook->BringToFront();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NumberBox34Change(TObject *Sender)
{
	try{
		if(b.RechercherLivre(NumberBox34->Value)==NULL)
		{
			Edit102->Enabled=false;
			Edit106->Enabled=false;
			NumberBox32->Enabled=false;
			NumberBox33->Enabled=false;
			DateTimePicker2->Enabled=false;
			Edit102->Text="";
			Edit106->Text="";
			NumberBox32->Value=0;
			NumberBox33->Value=0;
			DateTimePicker2->Date=StrToDate("01/01/1900");

		}
		if(b.RechercherLivre(NumberBox34->Value)==NULL)
			throw "Invalid code";
		Label292->Visible=false;
		Edit102->Enabled=true;
		Edit106->Enabled=true;
		NumberBox32->Enabled=true;
		NumberBox33->Enabled=true;
		DateTimePicker2->Enabled=true;
		Livre *l=b.RechercherLivre(NumberBox34->Value);
		Edit102->Text=l->getTitre();
		Edit106->Text=l->getAuteur();
		NumberBox32->Value=l->getCode();
		NumberBox33->Value=l->getStock_Init();
		DateTimePicker2->Date=StrToDate(l->getDate());
	}catch(const char* msg){
		Label292->Visible=true;
		Label292->Caption=msg;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel21Click(TObject *Sender)
{
	if(Acces=="Admin")
	{
			Edit102->Enabled=false;
			Edit106->Enabled=false;
			NumberBox32->Enabled=false;
			NumberBox33->Enabled=false;
			DateTimePicker2->Enabled=false;
			Edit102->Text="";
			Edit106->Text="";
			NumberBox32->Value=0;
			NumberBox33->Value=0;
			DateTimePicker2->Date=StrToDate("01/01/1900");
			Label292->Visible=false;
			NumberBox34->Value=0;
			PanelUpdateBook->BringToFront();
            Label292->Visible=false;
			Label281->Visible=false;
			Label282->Visible=false;
			Label283->Visible=false;
			Label284->Visible=false;
			Label285->Visible=false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image70Click(TObject *Sender)
{
	Livre l;
	String titre,auteur,date;
	int code, stock;
	int em=0;
	bool Status=true;
	date=DateTimePicker1->Date;
	try{
		if(Edit102->Text=="" && NumberBox34->Value!=0)
			throw "*Champs Obligatoire";
		titre=Edit102->Text;
		Label281->Visible=false;
	}catch(const char* msg){
	Label281->Visible=true;
	Label281->Caption=msg;
	Status=false;
	}
	try{
		if(Edit106->Text=="" && NumberBox34->Value!=0)
			throw "*Champs Obligatoire";
		if(!l.IsLetter(Edit106->Text) && NumberBox34->Value!=0)
			throw "Auteur doit etre alphabetique [a-z] [A-Z]";
		auteur=Edit106->Text;
		Label282->Visible=false;
	}catch(const char* msg){
	Label282->Visible=true;
	Label282->Caption=msg;
	Status=false;
	}
	try{
		if(b.RechercherLivre(NumberBox32->Value)!=NULL && NumberBox34->Value!=NumberBox32->Value )
			throw "Code livre existe deja";
		if(NumberBox32->Value==0 && NumberBox34->Value!=0)
			throw "*Champs Obligatoire";
		Label283->Visible=false;
		code=NumberBox32->Value;
	}catch(const char*msg){Label283->Visible=true;
	Label283->Caption=msg;
	Status=false;
	}
	try{
		em=b.RechercherLivre(NumberBox34->Value)->getStock_Init()-b.RechercherLivre(NumberBox34->Value)->getStock();
		if(NumberBox33->Value==0 && NumberBox34->Value!=0)
			throw "*Champs Obligatoire";
		if(NumberBox33->Value<0)
			throw "Stock doit etre positif";
		if(NumberBox33->Value<em)
			throw "Invalid Stock";
		Label284->Visible=false;
		stock=NumberBox33->Value;
	}catch(const char*msg){Label284->Visible=true;
	Label284->Caption=msg;
	Status=false;
	}
	try{
		if(DateTimePicker2->Date=="01/01/1900" && NumberBox34->Value!=0 )
			throw  "*Champs Obligatoire";
			Label285->Visible=false;
			date=DateTimePicker1->Date.FormatString("dd/mm/yyyy");
	}catch(const char*msg){Label285->Visible=true;
	Label285->Caption=msg;
	Status=false;
	}
	try{
		if(Status==false)
			throw"";
		if(NumberBox34->Value==0)
			throw  "*Champs Obligatoire";
		if(Application->MessageBox(L"Vous êtes sur de modifier les informations du livre ?",L"Confirmation",MB_YESNO)==6)
		{
            Livre *l1=b.RechercherLivre(NumberBox34->Value);
			l1->setTitre(Edit102->Text);
			l1->setAuteur(Edit106->Text);
			l1->setCode(NumberBox32->Value);
			l1->setStock(NumberBox33->Value-(l1->getStock_Init()-l1->getStock()));
			l1->setStock_Init(NumberBox33->Value);
			l1->setDate(DateTimePicker2->Date);
			PanelLivre->BringToFront();
		}


	}catch(const char* msg){
	Label292->Visible=true;
	Label292->Caption=msg;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image69Click(TObject *Sender)
{
    if(Application->MessageBox(L"Vous êtes sur d'annuler la modification du livre ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelLivre->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image71Click(TObject *Sender)
{
    PanelLivre->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel30Click(TObject *Sender)
{
	StringGrid3->RowCount=b.getCmpLivre()+2;
	StringGrid3->ColWidths[0] = 35;
	StringGrid3->ColWidths[1] = 120;
	StringGrid3->ColWidths[7] = 120;
    StringGrid3->ColWidths[2] = 120;
	StringGrid3->Cells[1][0]="Titre";
	StringGrid3->Cells[2][0]="Auteur";
	StringGrid3->Cells[3][0]="Code";
	StringGrid3->Cells[4][0]="Stock";
	StringGrid3->Cells[5][0]="Disponible";
	StringGrid3->Cells[6][0]="Emprunté";
	StringGrid3->Cells[7][0]="Annee Edition";
	int j=1;
	for(int i=0;i<=b.getCmpEtudiant();i++)
	{
		StringGrid3->Cells[0][j]=j;
		StringGrid3->Cells[1][j]=b.getLivre(i).getTitre();
		StringGrid3->Cells[2][j]=b.getLivre(i).getAuteur();
		StringGrid3->Cells[3][j]=b.getLivre(i).getCode();
		StringGrid3->Cells[4][j]=b.getLivre(i).getStock_Init();
		StringGrid3->Cells[5][j]=b.getLivre(i).getStock();
		StringGrid3->Cells[6][j]=b.getLivre(i).getStock_Init()-b.getLivre(i).getStock();
		StringGrid3->Cells[7][j]=b.getLivre(i).getDate();
		j=j+1;
	}
	PanelListBook->BringToFront();
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Image72Click(TObject *Sender)
{
    PanelLivre->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel42Click(TObject *Sender)
{
    if(Acces==""||Acces=="Guest");
	else{
	if(Application->MessageBox(L"Vous êtes sur de Sauvgrader les Modifications ?",L"Confirmation",MB_YESNO)==6)
	{
			b.SauvgarderEtudiant();
			b.SauvgarderEnseignant();
			b.SauvgarderLivre();
            Application->MessageBox(L"Enregistrement avec Succés",L"Terminer",MB_OK);
	}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel42MouseEnter(TObject *Sender)
{
	if(Acces!="Guest")
	if(Panel42->ParentBackground==true)
	{
		Panel42->ParentBackground=false;
		Panel42->Color=clActiveCaption;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel42MouseLeave(TObject *Sender)
{
    if(Acces!="Guest")
	if(Panel42->Color==clActiveCaption)
		Panel42->ParentBackground=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image40Click(TObject *Sender)
{
    if(Application->MessageBox(L"Vous êtes sur d'annuler la recherche du Livre?",L"Confirmation",MB_YESNO)==6)
	{
		PanelLivre->BringToFront();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image65Click(TObject *Sender)
{
    if(Application->MessageBox(L"Vous êtes sur d'annuler le remettre d'un livre ?",L"Confirmation",MB_YESNO)==6)
	{
		PanelEnseignant->BringToFront();
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image75Click(TObject *Sender)
{
    MediaPlayer1->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image76Click(TObject *Sender)
{
    MediaPlayer1->Pause();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel31MouseEnter(TObject *Sender)
{
	Panel31->ParentBackground=false;
	Panel31->Color=clSkyBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel31MouseLeave(TObject *Sender)
{
     Panel31->ParentBackground=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel38MouseEnter(TObject *Sender)
{
	Panel38->ParentBackground=false;
	Panel38->Color=clSkyBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel38MouseLeave(TObject *Sender)
{
	Panel38->ParentBackground=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label316MouseEnter(TObject *Sender)
{
	Label316->Font->Color= clBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label316MouseLeave(TObject *Sender)
{
	Label316->Font->Color=Label317->Font->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label317MouseEnter(TObject *Sender)
{
	Label317->Font->Color= clBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label317MouseLeave(TObject *Sender)
{
	Label317->Font->Color= Label316->Font->Color;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Label316Click(TObject *Sender)
{
	Label322->Caption=s.NbTotalEtudiant(b);
	Label327->Caption=s.nbFemmeEtudiant(b);
	Label330->Caption=s.nbHommeEtudiant(b);
	Label326->Caption=s.nbEtudiantlivre(b);
	Label334->Caption=s.nbEtudiantaucunlivre(b);
    PanelDashStud->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label317Click(TObject *Sender)
{
	Label342->Caption=s.NbTotalEnseignant(b);
		Label343->Caption=s.nbFemmeEnseignant(b);
		Label344->Caption=s.nbHommeEnseignant(b);
		Label352->Caption=s.nbEnseignantaucunlivre(b);
		Label348->Caption=s.nbEnseignantlivre(b);
		PanelDashEnseig->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image82Click(TObject *Sender)
{
    PanelDashbord->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image83Click(TObject *Sender)
{
    PanelDashbord->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
    MediaPlayer1->FileName=L"C:\\Program Files (x86)\\Bibliotheque\\Program\\Music.mp3";
	MediaPlayer1->Open();
	MediaPlayer1->Play();
	MediaPlayer1->AutoRewind=true;
	if(FileExists("C:\\Data\\User.csv") && FileExists("C:\\Data\\Enseignant.csv") && FileExists("C:\\Data\\Livre.csv") && FileExists("C:\\Data\\Etudiant.csv"))
	{
		b.ReccupererUser();
		b.ReccupereLivre();
		b.ReccupererEnseignant();
		b.ReccupererEtudiant();
	}
	else
	{
		TDirectory::CreateDirectory("C:\\Data");
		b.SauvgarderEtudiant();
		b.SauvgarderUser();
		b.SauvgarderEnseignant();
		b.SauvgarderLivre();
    }
}
//---------------------------------------------------------------------------



