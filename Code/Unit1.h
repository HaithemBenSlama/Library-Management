//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.CategoryButtons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ControlList.hpp>
#include <Vcl.Touch.Keyboard.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.WinXPickers.hpp>
#include <IdAttachment.hpp>
#include <IdBaseComponent.hpp>
#include <IdMessage.hpp>
#include <Vcl.NumberBox.hpp>
#include <Datasnap.Provider.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Vcl.Mask.hpp>
#include <string.h>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.MPlayer.hpp>
#include <Vcl.ActnColorMaps.hpp>
#include <Vcl.ActnMan.hpp>
//------------Class user-------------------------
class User
{
	String id;
	String pass;
	public:
	User()
	{

	}
	User(String i,String p)
	{
		id=i;
		pass=p;
	}
	User(User &u)
	{
		id=u.id;
		pass=u.pass;
    }
	~User()
	{

	}
	String getId()
	{
		return id;
	}
	String getPass()
	{
		return pass;
	}
	void setId(String i)
	{
		id=i;
	}
	void setPass(String p)
	{
		pass=p;
	}
};
//------------Class Personne----------------------
class Personne
{
private:
	String nom;
	String prenom;
	String Specialite;
	String sexe;
	String age;
	String Cin;
public:
	Personne()
	{
	}

	Personne(String n,String p,String s,String a,String c,String sex)
	{
		nom=n;
		prenom=p;
		Specialite=s;
		age=a;
		Cin=c;
		sexe=sex;
	}
	Personne(Personne &p)
	{
		nom=p.nom;
		prenom=p.prenom;
		Specialite=p.Specialite;
		age=p.age;
		Cin=p.Cin;
		sexe=p.sexe;
	}

	~Personne()
	{
	}

	String getNom()
	{
		return nom;
	}

	String getPrenom()
	{
		return prenom;
	}

	String getSpecialite()
	{
		return Specialite;
	}

	String getAge()
	{
		return age;
	}

	String getCin()
	{
		return Cin;
	}

	String getSexe()
	{
		return sexe;
	}

	void setNom(String n)
	{
		nom=n;
	}

	void setPrenom(String p)
	{
		prenom=p;
	}

	void setSpecialite(String s)
	{
		Specialite=s;
	}

	void setAge(String a)
	{
		age=a;
    }
	void setCin(String c)
	{
		Cin=c;
	}

	void setSexe(String s)
	{
		sexe=s;
	}
	unsigned IsLetter(String str)
	{
		for (char const &c : str)
		{
		if (!(std::isalpha(c) == 0) || c==' ');
		else
		return 0;
		}
	return 1;
	}
	unsigned IsInteger(String str)
	{
		for (char const &c : str) {
		if (std::isdigit(c) == 0) return 0;
	}
	return 1;
	}
};
//------------Class Livre----------------------
class Livre
{
private:
	String titre;
	String auteur;
	int code;
	int stock_Init;
	int stock;
	String annee_edition;
public:
	Livre()
	{
	}

	Livre(String a,String b,int c, int s,int si,String d)
	{
		titre=a;
		auteur=b;
		code=c;
		stock=s;
		stock_Init=si;
		annee_edition=d;
	}

	Livre(Livre &l)
	{
        titre=l.titre;
		auteur=l.auteur;
		code=l.code;
		stock=l.stock;
		stock_Init=l.stock_Init;
		annee_edition=l.annee_edition;
	}

	~Livre()
	{
	}
	int getStock_Init()
	{
		return stock_Init;
    }
	String getTitre()
	{
		return titre;
    }
	String getAuteur()
	{
		return auteur;
    }
	int getCode()
	{
		return code;
    }
	int getStock()
	{
		return stock;
    }
	String getDate()
	{
		return annee_edition;
	}
	void setDate(String d)
	{
		annee_edition=d;
    }
	void setStock_Init(int s)
	{
		stock_Init=s;
    }
	void setTitre(String t)
	{
		titre=t;
    }
	void setAuteur(String a)
	{
		auteur=a;
    }
	void setCode(int c)
	{
		code=c;
	}

	void setStock(int s)
	{
		stock=s;
	}
	unsigned IsLetter(String str)
	{
		for (char const &c : str)
		{
		if (!(std::isalpha(c) == 0) || c==' ');
		else
		return 0;
		}
	return 1;
	}
	unsigned IsInteger(String str)
	{
		for (char const &c : str) {
		if (std::isdigit(c) == 0) return 0;
	}
	return 1;
	}
};
//----------Class Etudiant-------------------
class Etudiant:public Personne
{
private:
	int niveau;
	Livre* l1;
	Livre* l2;
    int NbLivre;
public:
	Etudiant()
	{
		l1=new Livre;
		l2=new Livre;
	}

	Etudiant(String n, String p, String s, String a, String c,String sexe, int ni):Personne(n,p,s,a,c,sexe)
	{
        niveau=ni;
		l1=new Livre;
		l2=new Livre;
		l1=NULL;
		l2=NULL;
		NbLivre=0;
	}

	Etudiant(Etudiant &e)
	{
        setNom(e.getNom());
		setPrenom(e.getPrenom());
		setSpecialite(e.getSpecialite());
		setAge(e.getAge());
		setCin(e.getCin());
		setSexe(e.getSexe());
		l1=e.l1;
		l2=e.l2;
		niveau=e.niveau;
		NbLivre=e.NbLivre;
	}

	~Etudiant()
	{
	}
	int getNiveau()
	{
		return niveau;
    }
	int getNbLivre()
	{
		return NbLivre;
    }
	Livre* getLivre1()
	{
		return l1;
    }
	Livre* getLivre2()
	{
		return l2;
    }
	void setLivre1(Livre*l)
	{
		l1=l;
    }
	void setLivre2(Livre*l)
	{
		l2=l;
    }
	void setNbLivre(int n)
	{
		NbLivre=n;
    }
	void setNiveau(int n)
	{
		niveau=n;
	}
};
//------------Class Enseignant----------------------
class Enseignant:public Personne
{
private:
    Livre *l1;
	Livre *l2;
    Livre *l3;
	int nbLivre;
public:
	Enseignant()
	{
    }
	Enseignant(Enseignant &e)
	{
        setNom(e.getNom());
		setPrenom(e.getPrenom());
		setSpecialite(e.getSpecialite());
		setAge(e.getAge());
		setCin(e.getCin());
		setSexe(e.getSexe());
		l1=e.l1;
		l2=e.l2;
		l3=e.l3;
		nbLivre=e.nbLivre;
    }
	Enseignant(String n,String p,String s,String a,String c,String sexe):Personne(n,p,s,a,c,sexe)
	{
		l1=NULL;
		l2=NULL;
		l3=NULL;
		nbLivre=0;
	}
	~Enseignant()
	{
	}

	Livre* getLivre1()
	{
		return l1;
    }
	Livre* getLivre2()
	{
		return l2;
	}
	Livre* getLivre3()
	{
		return l3;
    }
	int getNbLivre()
	{
		return nbLivre;
    }
	void setNbLivre(int n)
	{
		nbLivre=n;
	}
	void setLivre1(Livre *l)
	{
		l1=l;
    }
	void setLivre2(Livre *l)
	{
		l2=l;
    }
	void setLivre3(Livre *l)
	{
		l3=l;
	}
	unsigned IsLetter(String str)
	{
		for (char const &c : str)
		{
		if (!(std::isalpha(c) == 0) || c==' ');
		else
		return 0;
		}
	return 1;
	}
	unsigned IsInteger(String str)
	{
		for (char const &c : str) {
		if (std::isdigit(c) == 0) return 0;
	}
	return 1;
	}
};
//---------Class Biblio----------------------
class Biblio
{
private:
	Livre tabLivre[1000];
	Etudiant tabEtudiant[1000];
	Enseignant tabEnseignant[1000];
    User tabUser[100];
	int cmpUser=-1;
	int cmpLivre=-1;
	int cmpEtudiant=-1;
	int cmpEnseignant=-1;
public:
	Biblio()
	{
	}
	Biblio(Biblio &b)
	{
		for(int i=0;i<b.cmpLivre;i++)
			tabLivre[i]=b.tabLivre[i];
		for(int i=0;i<b.cmpEtudiant;i++)
			tabEtudiant[i]=b.tabEtudiant[i];
		for(int i=0;i<b.cmpEnseignant;i++)
			tabEnseignant[i]=b.tabEnseignant[i];
		cmpLivre=b.cmpLivre;
		cmpEtudiant=b.cmpEtudiant;
		cmpEnseignant=b.cmpEnseignant;
    }
	~Biblio()
	{
	}
	void AjouterLivre(Livre l)
	{
        cmpLivre++;
		tabLivre[cmpLivre]=l;
	}
	void AjouterEtudiant(Etudiant e)
	{
		cmpEtudiant++;
		tabEtudiant[cmpEtudiant]=e;
	}
	void AjouterEnseignant(Enseignant e)
	{
        cmpEnseignant++;
		tabEnseignant[cmpEnseignant]=e;
	}
	int getCmpLivre()
	{
		return cmpLivre;
	}
	int getCmpEtudiant()
	{
		return cmpEtudiant;
	}
	int getCmpEnseignant()
	{
		return cmpEnseignant;
	}
	void SupprimerEtudiantApartirCin(String c)
	{
	   int pos;
		for(int i=0;i<=cmpEtudiant;i++)
		{
			if(c==tabEtudiant[i].getCin())
			 pos=i;
		}
		if(pos==cmpEtudiant)
			cmpEtudiant--;
		else
		{
			 for(int i=pos;i<cmpEtudiant;i++)
				tabEtudiant[i]=tabEtudiant[i+1];
			 cmpEtudiant--;
		}
	}
	void SupprimerEnseignantApartirCin(String c)
	{
		int pos;
		for(int i=0;i<=cmpEnseignant;i++)
		{
			if(c==tabEnseignant[i].getCin())
				pos=i;
		}
		if(pos==cmpEnseignant)
			cmpEnseignant--;
		else
		{
			for(int i=pos;i<cmpEnseignant;i++)
				tabEnseignant[i]=tabEnseignant[i+1];
			cmpEnseignant--;
		}
	}
	void SupprimerLivreApartirCode(int c)
	{
		int pos;
        for(int i=0;i<=cmpLivre;i++)
        {
            if(c==tabLivre[i].getCode())
            pos=i;
		}
        if(pos==cmpLivre)
        cmpLivre--;
		else
		{
			for(int i=pos;i<cmpLivre;i++)
				tabEtudiant[i]=tabEtudiant[i+1];
            cmpLivre--;
		}

    }
	Livre* RechercherLivre(int c)
	{
        int pos=-1;
    if(cmpLivre==-1)
        return NULL;
    else
    {
        for(int i=0;i<=cmpLivre;i++)
            if(c==tabLivre[i].getCode())
                pos=i;
        if(pos==-1)
            return NULL;
        else
            return &tabLivre[pos];
	}
    }
	Etudiant* RechercherEtudiant(String c)
	{
		  int pos=-1;
		 if(cmpEtudiant==-1)
			 return NULL;
		 else
		 {
			for(int i=0;i<=cmpEtudiant;i++)
				if(c==tabEtudiant[i].getCin())
					pos=i;
			if(pos==-1)
				 return NULL;
			 else
				 return &tabEtudiant[pos];
	}
    }
	Enseignant* RechercherEnseignant(String c)
	{
        int pos=-1;
		if(cmpEnseignant==-1)
        return NULL;
		else
		{
        for(int i=0;i<=cmpEnseignant;i++)
            if(c==tabEnseignant[i].getCin())
                pos=i;
        if(pos==-1)
            return NULL;
        else
            return &tabEnseignant[pos];
		}
	}
	Etudiant getEtudiant(int i)
	{
		return tabEtudiant[i];
	}
	Enseignant getEnseignant(int i)
	{
		return tabEnseignant[i];
	}
	Livre getLivre(int i)
	{
		return tabLivre[i];
    }
	void Empreinter(Etudiant* e, Livre* l)
	{
		if(e->getLivre1()==NULL)
		{
			e->setLivre1(l);
			e->setNbLivre(e->getNbLivre()+1);
			l->setStock(l->getStock()-1);
		}
		else
		if(e->getLivre2()==NULL)
		{
			e->setLivre2(l);
			e->setNbLivre(e->getNbLivre()+1);
			l->setStock(l->getStock()-1);
		}
    }
	void Empreinter(Enseignant* e,Livre* l)
	{
        if(e->getLivre1()==NULL)
		{
			e->setLivre1(l);
			e->setNbLivre(e->getNbLivre()+1);
			l->setStock(l->getStock()-1);
		}
		else
		if(e->getLivre2()==NULL)
		{
			e->setLivre2(l);
			e->setNbLivre(e->getNbLivre()+1);
			l->setStock(l->getStock()-1);
		}
        else
		if(e->getLivre3()==NULL)
		{
			e->setLivre3(l);
			e->setNbLivre(e->getNbLivre()+1);
			l->setStock(l->getStock()-1);
		}
	}
	void Rendre(Enseignant* e,int code)
	{
		if(e->getLivre1()!=NULL && e->getLivre1()->getCode()==code)
		{
			(RechercherLivre(e->getLivre1()->getCode()))->setStock(RechercherLivre(e->getLivre1()->getCode())->getStock()+1);
			e->setLivre1(NULL);
			e->setNbLivre(e->getNbLivre()-1);
		}
		else
		{
			if(e->getLivre2()!=NULL && e->getLivre2()->getCode()==code)
			{
				(RechercherLivre(e->getLivre2()->getCode()))->setStock(RechercherLivre(e->getLivre2()->getCode())->getStock()+1);
				e->setLivre2(NULL);
				e->setNbLivre(e->getNbLivre()-1);
			}
			else
			{
				(RechercherLivre(e->getLivre3()->getCode()))->setStock(RechercherLivre(e->getLivre3()->getCode())->getStock()+1);
				e->setLivre3(NULL);
				e->setNbLivre(e->getNbLivre()-1);
            }
		}
	}
	void Rendre(Etudiant* e ,int code)
	{
		if(e->getLivre1()!=NULL && e->getLivre1()->getCode()==code)
		{
			(RechercherLivre(e->getLivre1()->getCode()))->setStock(RechercherLivre(e->getLivre1()->getCode())->getStock()+1);
			e->setLivre1(NULL);
			e->setNbLivre(e->getNbLivre()-1);
		}
		else
		{
			(RechercherLivre(e->getLivre2()->getCode()))->setStock(RechercherLivre(e->getLivre2()->getCode())->getStock()+1);
			 e->setLivre2(NULL);
			 e->setNbLivre(e->getNbLivre()-1);
		}
    }
	void SauvgarderEtudiant()
	{
		String a,b;
		TTextWriter * twSave = new TStreamWriter("C:\\Data\\Etudiant.csv", False);
		for(int i=0;i<=cmpEtudiant;i++)
		{
			if(tabEtudiant[i].getLivre1()==NULL)
				a="NULL";
			else
				a=tabEtudiant[i].getLivre1()->getCode();
			if(tabEtudiant[i].getLivre2()==NULL)
				b="NULL";
			else
				b=tabEtudiant[i].getLivre2()->getCode();

			twSave->WriteLine(tabEtudiant[i].getNom()+';'+tabEtudiant[i].getPrenom()+';'+tabEtudiant[i].getSexe()+';'+tabEtudiant[i].getSpecialite()+';'+tabEtudiant[i].getNiveau()+';'+tabEtudiant[i].getAge()+';'+tabEtudiant[i].getCin()+';'+tabEtudiant[i].getNbLivre()+';'+a+';'+b);
		}
		twSave->Close();
	}

	void SauvgarderEnseignant()
	{
		String a,b,c;
		TTextWriter * twSave = new TStreamWriter("C:\\Data\\Enseignant.csv", False);
        for(int i=0;i<=cmpEnseignant;i++)
		{
			if(tabEnseignant[i].getLivre1()==NULL)
				a="NULL";
			else
				a=tabEnseignant[i].getLivre1()->getCode();
			if(tabEnseignant[i].getLivre2()==NULL)
				b="NULL";
			else
				b=tabEnseignant[i].getLivre2()->getCode();
			if(tabEnseignant[i].getLivre3()==NULL)
				c="NULL";
			else
				c=tabEnseignant[i].getLivre3()->getCode();
			twSave->WriteLine(tabEnseignant[i].getNom()+';'+tabEnseignant[i].getPrenom()+';'+tabEnseignant[i].getSexe()+';'+tabEnseignant[i].getSpecialite()+';'+tabEnseignant[i].getAge()+';'+tabEnseignant[i].getCin()+';'+tabEnseignant[i].getNbLivre()+';'+a+';'+b+';'+c);
		}
		twSave->Close();
    }
	void SauvgarderLivre()
	{
		TTextWriter * twSave = new TStreamWriter("C:\\Data\\Livre.csv", False);
		for(int i=0;i<=cmpLivre;i++)
			twSave->WriteLine(tabLivre[i].getTitre()+';'+tabLivre[i].getAuteur()+';'+tabLivre[i].getCode()+';'+tabLivre[i].getStock()+';'+tabLivre[i].getStock_Init()+';'+tabLivre[i].getDate());
		twSave->Close();
	}
	void ReccupererEtudiant()
	{
		wchar_t* line=new wchar_t[100];
		wchar_t* nom=new wchar_t[50];
		wchar_t* prenom=new wchar_t[50];
		wchar_t* sexe=new wchar_t[10];
		wchar_t* specialite=new wchar_t[30];
		wchar_t* niveau=new wchar_t[2];
		wchar_t* age=new wchar_t[3];
		wchar_t* cin=new wchar_t[9];
		wchar_t* livre=new wchar_t[2];
		wchar_t* livre1=new wchar_t[6];
		wchar_t* livre2=new wchar_t[6];
		int pos;
		String a;
		TStreamReader * srOpen = new TStreamReader("C:\\Data\\Etudiant.csv");
		line=srOpen->ReadLine().c_str();
		while(wcslen(line)>1)
		{
			int i=0;
			int j=0;
			while(line[i]!=';')
			{
				nom[i]=line[i];
				i++;
			}
			nom[i]='\0';
			i++;
			while(line[i]!=';')
			{
				prenom[j]=line[i];
				i++;
				j++;
			}
			prenom[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				sexe[j]=line[i];
				i++;
				j++;
			}
			sexe[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
			   specialite[j]=line[i];
			   j++;
			   i++;
			}
			specialite[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				niveau[j]=line[i];
				i++;
				j++;
			}
			niveau[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				age[j]=line[i];
				i++;
				j++;
			}
			age[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				cin[j]=line[i];
				j++;
				i++;
			}
			cin[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				livre[j]=line[i];
				i++;
				j++;
			}
			livre[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				livre1[j]=line[i];
				i++;
				j++;
			}
			livre1[j]='\0';
			i++;
			j=0;
			while(line[i]!='\0')
			{
				livre2[j]=line[i];
				i++;
				j++;
			}
			livre2[j]='\0';
			line=srOpen->ReadLine().c_str();
		int n,nb;
		n=_wtoi(niveau);
		nb=_wtoi(livre);
		Etudiant e(nom,prenom,specialite,age,cin,sexe,n);
		if(livre1==L"NULL")
			e.setLivre1(NULL);
		else
			e.setLivre1(RechercherLivre(_wtoi(livre1)));
		if(livre2==L"NULL")
			e.setLivre2(NULL);
		else
			e.setLivre2(RechercherLivre(_wtoi(livre2)));
		e.setNbLivre(nb);
		AjouterEtudiant(e);
		}
		free(line);
		free(nom);
		free(prenom);
		free(specialite);
		free(age);
		free(cin);
		free(sexe);
		free(niveau);
		free(livre);
		free(livre1);
		free(livre2);
		srOpen->Close();


	}

	void ReccupereLivre()
	{
		wchar_t* line=new wchar_t[100];
		wchar_t* titre=new wchar_t[50];
		wchar_t* auteur=new wchar_t[50];
		wchar_t* code=new wchar_t[10];
		wchar_t* stock_int=new wchar_t[5];
		wchar_t* stock=new wchar_t[5];
		wchar_t* date=new wchar_t[20];
		TStreamReader * srOpen = new TStreamReader("C:\\Data\\Livre.csv");
		line=srOpen->ReadLine().c_str();
		while(wcslen(line)>1)
		{
			int i=0;
			int j=0;
			while(line[i]!=';')
			{
				titre[i]=line[i];
				i++;
			}
			titre[i]='\0';
			i++;
			while(line[i]!=';')
			{
				auteur[j]=line[i];
				i++;
				j++;
			}
			auteur[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				code[j]=line[i];
				i++;
				j++;
			}
			code[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
			   stock[j]=line[i];
			   j++;
			   i++;
			}
			stock[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				stock_int[j]=line[i];
				i++;
				j++;
			}
			stock_int[j]='\0';
			i++;
			j=0;
			while(line[i]!='\0')
			{
				date[j]=line[i];
				i++;
				j++;
			}
			date[j]='\0';
			line=srOpen->ReadLine().c_str();
		int s,si,c;
		s=_wtoi(stock);
		si=_wtoi(stock_int);
		c=_wtoi(code);
		Livre l(titre,auteur,c,s,si,date);
		AjouterLivre(l);
		}
		free(titre);
		free(auteur);
		free(code);
		free(stock_int);
		free(stock);
		free(date);
		srOpen->Close();
	}

	void ReccupererEnseignant()
	{
		wchar_t* line=new wchar_t[100];
		wchar_t* nom=new wchar_t[50];
		wchar_t* prenom=new wchar_t[50];
		wchar_t* sexe=new wchar_t[10];
		wchar_t* specialite=new wchar_t[30];
		wchar_t* age=new wchar_t[3];
		wchar_t* cin=new wchar_t[9];
		wchar_t* livre=new wchar_t[2];
		wchar_t* livre1=new wchar_t[6];
		wchar_t* livre2=new wchar_t[6];
		wchar_t* livre3=new wchar_t[6];
		int pos;
		String a;
		TStreamReader * srOpen = new TStreamReader("C:\\Data\\Enseignant.csv");
		line=srOpen->ReadLine().c_str();
		while(wcslen(line)>1)
		{
			int i=0;
			int j=0;
			while(line[i]!=';')
			{
				nom[i]=line[i];
				i++;
			}
			nom[i]='\0';
			i++;
			while(line[i]!=';')
			{
				prenom[j]=line[i];
				i++;
				j++;
			}
			prenom[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				sexe[j]=line[i];
				i++;
				j++;
			}
			sexe[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
			   specialite[j]=line[i];
			   j++;
			   i++;
			}
			specialite[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				age[j]=line[i];
				i++;
				j++;
			}
			age[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				cin[j]=line[i];
				j++;
				i++;
			}
			cin[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				livre[j]=line[i];
				i++;
				j++;
			}
			livre[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				livre1[j]=line[i];
				i++;
				j++;
			}
			livre1[j]='\0';
			i++;
			j=0;
			while(line[i]!=';')
			{
				livre2[j]=line[i];
				i++;
				j++;
			}
			livre2[j]='\0';
            i++;
			j=0;
			while(line[i]!='\0')
			{
				livre3[j]=line[i];
				i++;
				j++;
			}
			line=srOpen->ReadLine().c_str();
		int n,nb;
		nb=_wtoi(livre);
		Enseignant e(nom,prenom,specialite,age,cin,sexe);
		if(livre1==L"NULL")
			e.setLivre1(NULL);
		else
			e.setLivre1(RechercherLivre(_wtoi(livre1)));
		if(livre2==L"NULL")
			e.setLivre2(NULL);
		else
			e.setLivre2(RechercherLivre(_wtoi(livre2)));
		if(livre3==L"NULL")
			e.setLivre3(NULL);
		else
			e.setLivre3(RechercherLivre(_wtoi(livre3)));
		e.setNbLivre(nb);
		AjouterEnseignant(e);
		}
		free(line);
		free(nom);
		free(prenom);
		free(specialite);
		free(age);
		free(cin);
		free(sexe);
		free(livre);
		free(livre1);
		free(livre2);
		free(livre3);
		srOpen->Close();
	}


	void AjouterUser(User u)
	{
		cmpUser=cmpUser+1;;
		tabUser[cmpUser]=u;
	}
	void SauvgarderUser()
	{
		TTextWriter * twSave = new TStreamWriter("C:\\Data\\User.csv", False);
		for(int i=0;i<=cmpUser;i++)
			twSave->WriteLine(tabUser[i].getId()+';'+tabUser[i].getPass());
		twSave->Close();
	}
	User* RechercheUser(String id)
	{
		int pos=-1;
		 if(cmpUser==-1)
			 return NULL;
		 else
		 {
			for(int i=0;i<=cmpUser;i++)
				if(id==tabUser[i].getId())
					pos=i;
			if(pos==-1)
				 return NULL;
			 else
				 return &tabUser[pos];
		 }
	}
	void ReccupererUser()
	{
		wchar_t *line=new wchar_t[60];
		wchar_t *iden=new wchar_t[30];
		wchar_t *passw=new wchar_t[30];
		TStreamReader * srOpen = new TStreamReader("C:\\Data\\User.csv");
		line=srOpen->ReadLine().c_str();
		while(wcslen(line)>1)
		{
			int i=0;
			int j=0;
			while(line[i]!=';')
			{
				iden[i]=line[i];
				i++;
			}
			iden[i]='\0';
			i++;
			while(line[i]!='\0')
			{
				passw[j]=line[i];
				i++;
				j++;
			}
			passw[j]='\0';
			User add(iden,passw);
			AjouterUser(add);
			line=srOpen->ReadLine().c_str();
		}
		free(line);
		free(iden);
		free(passw);
		srOpen->Close();
	}
	void sauvgarderUser()
	{
		TTextWriter * twSave = new TStreamWriter("C:\\Data\\User.csv", False);
		for(int i=0;i<=cmpUser;i++)
			twSave->WriteLine(tabUser[i].getId()+';'+tabUser[i].getPass());
		twSave->Close();
    }
	unsigned Space(String str)
	{
		for (char const &c : str) {
		if (c==' ') return 0;
	}
	return 1;
	}
	friend class Statistique;
};
//----------Class Statistique---------------------
class Statistique
{
public:
	Statistique()
	{}
	int NbTotalEtudiant(Biblio b)
	{
		return b.cmpEtudiant+1;
	}
	int NbTotalEnseignant(Biblio b)
	{
		return b.cmpEnseignant+1;
	}
	/*int NbTotalLivre(Biblio b)
	{
		int stock=0;
		for(int i=0;i<b.cmpLivre+1;i++)
		{
			stock=stock+b.tabLivre[i].getStock_Init();
		}
		return stock;
	}
	int NbLivreDispo(Biblio b)
	{
		int dispo=0;
		for(int i=0;i<b.cmpLivre+1;i++)
		   {
			dispo=dispo+b.tabLivre[i].getStock();
		   }
		return dispo;
	}
	int NbLivreEmprunter(Biblio b)
	{
		return NbTotalLivre(b)-NbLivreDispo(b);
	}      */
	int nbHommeEtudiant(Biblio b)
	{
		int h=0;
		for(int i=0;i<=b.cmpEtudiant;i++)
	{
		if(b.tabEtudiant[i].getSexe()=="HOMME")
			h++;
	}
		return h;
	}
	int nbFemmeEtudiant(Biblio b)
	{
		return NbTotalEtudiant(b)-nbHommeEtudiant(b);
	}
	int nbEtudiantaucunlivre(Biblio b)
	{
		int a=0;
		for(int i=0;i<=b.cmpEtudiant;i++)
	{
	   if(b.tabEtudiant[i].getLivre1()==NULL && b.tabEtudiant[i].getLivre2()==NULL)
			a++;
	}
		return a;
	}
	int nbEtudiantlivre(Biblio b)
	{
		return NbTotalEtudiant(b)-nbEtudiantaucunlivre(b);
	}
	int nbHommeEnseignant(Biblio b)
	{
		int h=0;
		for(int i=0;i<=b.cmpEnseignant;i++)
	{
		if(b.tabEnseignant[i].getSexe()=="HOMME")
			h++;
	}
		return h;
	}
	int nbFemmeEnseignant(Biblio b)
	{
		return NbTotalEnseignant(b)-nbHommeEnseignant(b);
	}
	int nbEnseignantaucunlivre(Biblio b)
	{
		int a=0;
		for(int i=0;i<=b.cmpEnseignant;i++)
	{
	   if(b.tabEnseignant[i].getLivre1()==NULL && b.tabEnseignant[i].getLivre2()==NULL && b.tabEnseignant[i].getLivre3()==NULL)
			a++;
	}
		return a;
	}
	int nbEnseignantlivre(Biblio b)
	{
		return NbTotalEnseignant(b)-nbEnseignantaucunlivre(b);
	}

};
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TShape *Shape1;
	TShape *Shape2;
	TShape *Shape3;
	TShape *Shape4;
	TLabel *Label5;
	TPanel *Panel3;
	TImage *Image1;
	TLabel *Label2;
	TLabel *Label6;
	TPanel *Panel6;
	TImage *Image5;
	TImage *Image6;
	TImage *Image2;
	TPanel *PanelDashbord;
	TLabel *Label4;
	TPanel *Panel4;
	TLabel *Label7;
	TLabel *Label9;
	TImage *Image3;
	TPanel *Panel5;
	TLabel *Label10;
	TLabel *Label12;
	TImage *Image4;
	TPanel *Panel7;
	TLabel *Label17;
	TLabel *Label19;
	TImage *Image11;
	TPanel *PanelEtudiant;
	TLabel *Label20;
	TPanel *Panel8;
	TLabel *Label21;
	TImage *Image12;
	TPanel *Panel9;
	TLabel *Label22;
	TImage *Image13;
	TPanel *Panel10;
	TLabel *Label23;
	TImage *Image14;
	TPanel *PanelAddStudent;
	TLabel *Label24;
	TLabel *Label25;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TEdit *nom;
	TEdit *prenom;
	TEdit *specialite;
	TRadioButton *Homme;
	TLabel *Label29;
	TNumberBox *niveau;
	TRadioButton *Femme;
	TLabel *Label30;
	TLabel *Label31;
	TPanel *Panel11;
	TLabel *Label32;
	TImage *Image17;
	TPanel *Panel12;
	TLabel *Label33;
	TImage *Image18;
	TPanel *PanelEnseignant;
	TLabel *Label34;
	TPanel *Panel13;
	TLabel *Label35;
	TImage *Image19;
	TPanel *Panel14;
	TLabel *Label37;
	TImage *Image21;
	TPanel *Panel16;
	TLabel *Label38;
	TImage *Image22;
	TPanel *Panel15;
	TLabel *Label36;
	TImage *Image20;
	TPanel *Panel17;
	TLabel *Label39;
	TImage *Image23;
	TPanel *PanelLivre;
	TLabel *Label40;
	TPanel *Panel18;
	TLabel *Label41;
	TImage *Image24;
	TPanel *Panel19;
	TLabel *Label42;
	TImage *Image25;
	TPanel *Panel20;
	TLabel *Label43;
	TImage *Image26;
	TPanel *Panel21;
	TLabel *Label44;
	TImage *Image27;
	TLabel *Label45;
	TLabel *Label47;
	TLabel *Label48;
	TLabel *Label50;
	TPanel *Panel22;
	TPanel *Panel23;
	TPanel *Panel24;
	TLabel *Label13;
	TImage *Image7;
	TLabel *Label14;
	TImage *Image8;
	TLabel *Label15;
	TImage *Image9;
	TPanel *PanelDeleteStud;
	TLabel *Label58;
	TLabel *Label51;
	TImage *Image15;
	TImage *Image16;
	TPanel *PanelSearchStud;
	TLabel *Label59;
	TGroupBox *GroupBox2;
	TLabel *Label60;
	TLabel *Label61;
	TLabel *Label62;
	TLabel *Label63;
	TLabel *Label64;
	TLabel *Label65;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TNumberBox *NumberBox4;
	TLabel *Label66;
	TImage *Image30;
	TPanel *PanelEmprunterStud;
	TLabel *Label67;
	TLabel *Label68;
	TGroupBox *GroupBox3;
	TLabel *Label69;
	TLabel *Label70;
	TLabel *Label71;
	TLabel *Label72;
	TLabel *Label73;
	TLabel *Label74;
	TEdit *Edit9;
	TEdit *Edit10;
	TEdit *Edit11;
	TEdit *Edit12;
	TNumberBox *NumberBox8;
	TLabel *Label75;
	TNumberBox *NumberBox10;
	TNumberBox *NumberBox11;
	TLabel *Label77;
	TGroupBox *GroupBox4;
	TLabel *Label78;
	TLabel *Label79;
	TLabel *Label81;
	TLabel *Label82;
	TEdit *Edit13;
	TEdit *Edit14;
	TEdit *Edit15;
	TLabel *Label80;
	TEdit *Edit17;
	TLabel *Label83;
	TLabel *Label84;
	TImage *Image32;
	TImage *Image33;
	TLabel *Label85;
	TLabel *Label86;
	TNumberBox *NumberBox12;
	TPanel *PanelRendreStud;
	TLabel *Label87;
	TLabel *Label88;
	TGroupBox *GroupBox5;
	TLabel *Label89;
	TLabel *Label90;
	TLabel *Label91;
	TLabel *Label92;
	TLabel *Label93;
	TLabel *Label94;
	TLabel *Label95;
	TLabel *Label96;
	TEdit *Edit16;
	TEdit *Edit18;
	TEdit *Edit19;
	TEdit *Edit20;
	TNumberBox *NumberBox14;
	TNumberBox *NumberBox16;
	TLabel *Label97;
	TComboBoxEx *ComboBoxEx1;
	TLabel *Label98;
	TGroupBox *GroupBox6;
	TLabel *Label76;
	TLabel *Label99;
	TLabel *Label100;
	TLabel *Label101;
	TLabel *Label102;
	TEdit *Edit21;
	TEdit *Edit22;
	TEdit *Edit23;
	TEdit *Edit24;
	TNumberBox *NumberBox17;
	TImage *Image34;
	TImage *Image35;
	TPanel *Panel26;
	TLabel *Label103;
	TImage *Image36;
	TLabel *Label104;
	TLabel *Label105;
	TNumberBox *NumberBox18;
	TLabel *Label106;
	TEdit *Edit25;
	TEdit *Edit26;
	TLabel *Label107;
	TLabel *Label108;
	TLabel *Label109;
	TLabel *Label110;
	TLabel *Label111;
	TLabel *Label112;
	TLabel *Label113;
	TLabel *Label114;
	TEdit *Edit27;
	TEdit *Edit28;
	TEdit *Edit29;
	TEdit *Edit30;
	TEdit *Edit31;
	TPanel *Panel27;
	TLabel *Label115;
	TImage *Image37;
	TPanel *PanelAddBook;
	TLabel *Label16;
	TLabel *Label116;
	TLabel *Label118;
	TLabel *Label119;
	TLabel *Label120;
	TLabel *Label122;
	TLabel *Label123;
	TLabel *Label124;
	TLabel *Label126;
	TLabel *Label127;
	TLabel *Label129;
	TEdit *Edit33;
	TEdit *Edit34;
	TNumberBox *NumberBox5;
	TNumberBox *NumberBox6;
	TImage *Image10;
	TImage *Image38;
	TPanel *Panel25;
	TLabel *Label117;
	TImage *Image39;
	TShape *Shape5;
	TDateTimePicker *DateTimePicker1;
	TPanel *PanelSearchBook;
	TGroupBox *GroupBox7;
	TLabel *Label3;
	TLabel *Label121;
	TLabel *Label125;
	TLabel *Label128;
	TLabel *Label130;
	TEdit *Edit35;
	TEdit *Edit36;
	TLabel *Label135;
	TLabel *Label136;
	TLabel *Label137;
	TEdit *Edit39;
	TNumberBox *NumberBox9;
	TLabel *Label131;
	TLabel *Label132;
	TPanel *Panel28;
	TImage *Image42;
	TLabel *Label133;
	TLabel *Label138;
	TNumberBox *NumberBox19;
	TNumberBox *NumberBox20;
	TNumberBox *NumberBox21;
	TNumberBox *NumberBox22;
	TLabel *Label134;
	TPanel *Panel29;
	TLabel *Label139;
	TImage *Image43;
	TPanel *Panel30;
	TLabel *Label140;
	TImage *Image44;
	TPanel *PanelLog;
	TPanel *Panel32;
	TEdit *Edit32;
	TPanel *Panel33;
	TPanel *Panel34;
	TPanel *Panel35;
	TImage *Image45;
	TPanel *Panel36;
	TLabel *Label143;
	TLabel *Label144;
	TLabel *Label141;
	TLabel *Label142;
	TLabel *Label145;
	TLabel *Label146;
	TLabel *Label147;
	TLabel *Label148;
	TEdit *Edit37;
	TPanel *Panel37;
	TTimer *Timer1;
	TImage *Image46;
	TPanel *PanelSignUp;
	TPanel *Panel39;
	TImage *Image47;
	TLabel *Label149;
	TLabel *Label150;
	TLabel *Label151;
	TLabel *Label152;
	TEdit *Edit38;
	TPanel *Panel43;
	TLabel *Label156;
	TEdit *Edit40;
	TPanel *Panel44;
	TImage *Image48;
	TEdit *Edit41;
	TLabel *Label153;
	TLabel *Label154;
	TPanel *Panel38;
	TPanel *Panel31;
	TLabel *Label157;
	TLabel *Label155;
	TImage *Image49;
	TImage *Image50;
	TPanel *PanelAddEnseig;
	TLabel *Label158;
	TLabel *Label159;
	TLabel *Label160;
	TLabel *Label161;
	TLabel *Label162;
	TLabel *Label164;
	TLabel *Label165;
	TImage *Image51;
	TImage *Image52;
	TLabel *Label166;
	TLabel *Label167;
	TLabel *Label168;
	TLabel *Label169;
	TLabel *Label171;
	TLabel *Label172;
	TEdit *Edit42;
	TEdit *Edit43;
	TEdit *Edit44;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TEdit *Edit45;
	TEdit *Edit46;
	TPanel *PanelSearchEnsei;
	TLabel *Label163;
	TLabel *Label170;
	TImage *Image53;
	TLabel *Label173;
	TGroupBox *GroupBox8;
	TLabel *Label174;
	TLabel *Label175;
	TLabel *Label176;
	TLabel *Label177;
	TLabel *Label179;
	TLabel *Label180;
	TLabel *Label181;
	TLabel *Label182;
	TEdit *Edit47;
	TEdit *Edit48;
	TEdit *Edit49;
	TEdit *Edit50;
	TNumberBox *NumberBox24;
	TEdit *Edit51;
	TEdit *Edit52;
	TEdit *Edit53;
	TEdit *Edit54;
	TLabel *Label183;
	TEdit *Edit55;
	TLabel *Label178;
	TPanel *Panel40;
	TImage *Image55;
	TLabel *Label184;
	TLabel *Label185;
	TPanel *PanelDeleteEnsei;
	TLabel *Label186;
	TLabel *Label187;
	TLabel *Label188;
	TGroupBox *GroupBox9;
	TLabel *Label190;
	TLabel *Label191;
	TLabel *Label192;
	TLabel *Label193;
	TLabel *Label194;
	TLabel *Label195;
	TLabel *Label196;
	TLabel *Label197;
	TLabel *Label198;
	TEdit *Edit56;
	TEdit *Edit57;
	TEdit *Edit58;
	TEdit *Edit59;
	TNumberBox *NumberBox23;
	TEdit *Edit60;
	TEdit *Edit61;
	TEdit *Edit62;
	TEdit *Edit63;
	TEdit *Edit64;
	TImage *Image56;
	TImage *Image57;
	TPanel *PanelUpdateEnseig;
	TLabel *Label189;
	TLabel *Label199;
	TLabel *Label200;
	TLabel *Label201;
	TLabel *Label202;
	TLabel *Label203;
	TLabel *Label204;
	TImage *Image54;
	TImage *Image58;
	TLabel *Label205;
	TLabel *Label206;
	TLabel *Label207;
	TLabel *Label208;
	TLabel *Label209;
	TLabel *Label210;
	TEdit *Edit65;
	TEdit *Edit66;
	TEdit *Edit67;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TEdit *Edit68;
	TEdit *Edit69;
	TLabel *Label211;
	TPanel *Panel41;
	TImage *Image59;
	TLabel *Label212;
	TLabel *Label213;
	TPanel *PanelUpdateStud;
	TLabel *Label214;
	TLabel *Label215;
	TLabel *Label216;
	TLabel *Label217;
	TLabel *Label218;
	TLabel *Label219;
	TLabel *Label220;
	TImage *Image31;
	TImage *Image60;
	TLabel *Label221;
	TLabel *Label222;
	TLabel *Label223;
	TLabel *Label224;
	TLabel *Label225;
	TLabel *Label226;
	TEdit *Edit70;
	TEdit *Edit71;
	TEdit *Edit72;
	TRadioButton *RadioButton5;
	TRadioButton *RadioButton6;
	TEdit *Edit73;
	TEdit *Edit74;
	TLabel *Label229;
	TLabel *Label230;
	TNumberBox *NumberBox26;
	TPanel *PanelListStud;
	TStringGrid *StringGrid1;
	TLabel *Label227;
	TImage *Image61;
	TEdit *Edit75;
	TEdit *Edit76;
	TLabel *Label228;
	TEdit *Edit77;
	TImage *Image62;
	TImage *Image63;
	TGroupBox *GroupBox1;
	TLabel *Label52;
	TLabel *Label53;
	TLabel *Label54;
	TLabel *Label55;
	TLabel *Label56;
	TLabel *Label57;
	TLabel *Label231;
	TLabel *Label232;
	TLabel *Label233;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TNumberBox *NumberBox1;
	TNumberBox *NumberBox2;
	TEdit *Edit78;
	TEdit *Edit79;
	TEdit *Edit80;
	TEdit *Edit81;
	TLabel *Label234;
	TPanel *PanelEmprunterEnsei;
	TLabel *Label235;
	TLabel *Label236;
	TLabel *Label237;
	TImage *Image28;
	TImage *Image29;
	TLabel *Label238;
	TLabel *Label239;
	TGroupBox *GroupBox10;
	TLabel *Label240;
	TLabel *Label241;
	TLabel *Label242;
	TLabel *Label243;
	TLabel *Label245;
	TLabel *Label246;
	TLabel *Label247;
	TEdit *Edit82;
	TEdit *Edit83;
	TEdit *Edit84;
	TEdit *Edit85;
	TNumberBox *NumberBox7;
	TEdit *Edit86;
	TNumberBox *NumberBox13;
	TGroupBox *GroupBox11;
	TLabel *Label248;
	TLabel *Label249;
	TLabel *Label250;
	TLabel *Label251;
	TLabel *Label252;
	TLabel *Label253;
	TEdit *Edit87;
	TEdit *Edit88;
	TEdit *Edit89;
	TEdit *Edit90;
	TNumberBox *NumberBox15;
	TEdit *Edit91;
	TPanel *PanelListEnseig;
	TLabel *Label244;
	TImage *Image64;
	TStringGrid *StringGrid2;
	TPanel *PanelRendreEnsei;
	TLabel *Label254;
	TLabel *Label255;
	TLabel *Label256;
	TLabel *Label257;
	TImage *Image65;
	TImage *Image66;
	TLabel *Label258;
	TGroupBox *GroupBox12;
	TLabel *Label259;
	TLabel *Label260;
	TLabel *Label261;
	TLabel *Label262;
	TLabel *Label264;
	TLabel *Label265;
	TLabel *Label266;
	TEdit *Edit92;
	TEdit *Edit93;
	TEdit *Edit94;
	TEdit *Edit95;
	TNumberBox *NumberBox25;
	TEdit *Edit96;
	TComboBoxEx *ComboBoxEx2;
	TGroupBox *GroupBox13;
	TLabel *Label267;
	TLabel *Label268;
	TLabel *Label269;
	TLabel *Label270;
	TLabel *Label271;
	TEdit *Edit97;
	TEdit *Edit98;
	TEdit *Edit99;
	TEdit *Edit100;
	TNumberBox *NumberBox27;
	TEdit *Edit101;
	TPanel *PanelDeleteBook;
	TLabel *Label263;
	TLabel *Label272;
	TImage *Image67;
	TImage *Image68;
	TLabel *Label273;
	TGroupBox *GroupBox14;
	TLabel *Label274;
	TLabel *Label275;
	TLabel *Label276;
	TLabel *Label277;
	TLabel *Label278;
	TLabel *Label279;
	TLabel *Label280;
	TEdit *Edit103;
	TEdit *Edit104;
	TEdit *Edit105;
	TNumberBox *NumberBox3;
	TNumberBox *NumberBox28;
	TNumberBox *NumberBox29;
	TNumberBox *NumberBox30;
	TNumberBox *NumberBox31;
	TPanel *PanelUpdateBook;
	TLabel *Label281;
	TLabel *Label282;
	TLabel *Label283;
	TLabel *Label284;
	TLabel *Label285;
	TLabel *Label286;
	TLabel *Label287;
	TLabel *Label288;
	TLabel *Label289;
	TLabel *Label290;
	TLabel *Label291;
	TImage *Image69;
	TImage *Image70;
	TEdit *Edit102;
	TEdit *Edit106;
	TNumberBox *NumberBox32;
	TNumberBox *NumberBox33;
	TDateTimePicker *DateTimePicker2;
	TLabel *Label292;
	TLabel *Label293;
	TNumberBox *NumberBox34;
	TPanel *PanelListBook;
	TLabel *Label294;
	TImage *Image71;
	TStringGrid *StringGrid3;
	TPanel *PanelListBook2;
	TLabel *Label295;
	TImage *Image72;
	TStringGrid *StringGrid4;
	TLabel *Label296;
	TStringGrid *StringGrid5;
	TImage *Image40;
	TPanel *Panel42;
	TLabel *Label297;
	TImage *Image41;
	TShape *Shape6;
	TPanel *PanelAbout;
	TLabel *Label298;
	TImage *Image73;
	TImage *Image74;
	TLabel *Label299;
	TLabel *Label300;
	TLabel *Label302;
	TLabel *Label303;
	TLabel *Label304;
	TLabel *Label306;
	TLabel *Label307;
	TLabel *Label301;
	TLabel *Label308;
	TLabel *Label309;
	TLabel *Label305;
	TLabel *Label310;
	TLabel *Label311;
	TLabel *Label312;
	TLabel *Label313;
	TLabel *Label314;
	TPanel *Panel45;
	TLabel *Label8;
	TPanel *Panel46;
	TLabel *Label46;
	TPanel *Panel47;
	TLabel *Label49;
	TPanel *Panel48;
	TLabel *Label11;
	TPanel *Panel49;
	TLabel *Label18;
	TPanel *Panel50;
	TLabel *Label1;
	TPanel *Panel51;
	TLabel *Label315;
	TImage *Image75;
	TMediaPlayer *MediaPlayer1;
	TImage *Image76;
	TLabel *Label316;
	TLabel *Label317;
	TPanel *PanelDashStud;
	TPanel *Panel53;
	TLabel *Label319;
	TLabel *Label320;
	TImage *Image77;
	TPanel *Panel54;
	TLabel *Label322;
	TPanel *Panel55;
	TLabel *Label323;
	TLabel *Label324;
	TImage *Image78;
	TPanel *Panel56;
	TLabel *Label326;
	TPanel *Panel59;
	TLabel *Label331;
	TLabel *Label332;
	TImage *Image80;
	TPanel *Panel60;
	TLabel *Label334;
	TLabel *Label321;
	TLabel *Label325;
	TImage *Image79;
	TPanel *Panel57;
	TLabel *Label327;
	TLabel *Label328;
	TLabel *Label329;
	TImage *Image81;
	TPanel *Panel58;
	TLabel *Label330;
	TLabel *Label333;
	TLabel *Label335;
	TImage *Image82;
	TPanel *PanelDashEnseig;
	TImage *Image83;
	TPanel *Panel61;
	TLabel *Label336;
	TLabel *Label337;
	TImage *Image84;
	TLabel *Label338;
	TLabel *Label339;
	TImage *Image85;
	TLabel *Label340;
	TLabel *Label341;
	TImage *Image86;
	TPanel *Panel62;
	TLabel *Label342;
	TPanel *Panel63;
	TLabel *Label343;
	TPanel *Panel64;
	TLabel *Label344;
	TPanel *Panel65;
	TLabel *Label345;
	TLabel *Label346;
	TImage *Image87;
	TLabel *Label347;
	TPanel *Panel66;
	TLabel *Label348;
	TPanel *Panel67;
	TLabel *Label349;
	TLabel *Label350;
	TImage *Image88;
	TLabel *Label351;
	TPanel *Panel68;
	TLabel *Label352;
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Panel8Click(TObject *Sender);
	void __fastcall Image10Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Panel24Click(TObject *Sender);
	void __fastcall Panel22Click(TObject *Sender);
	void __fastcall Panel23Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Label36Click(TObject *Sender);
	void __fastcall Image20Click(TObject *Sender);
	void __fastcall Panel9Click(TObject *Sender);
	void __fastcall Image15Click(TObject *Sender);
	void __fastcall Panel10Click(TObject *Sender);
	void __fastcall Image30Click(TObject *Sender);
	void __fastcall Image32Click(TObject *Sender);
	void __fastcall Image34Click(TObject *Sender);
	void __fastcall Panel12Click(TObject *Sender);
	void __fastcall Panel11Click(TObject *Sender);
	void __fastcall Image16Click(TObject *Sender);
	void __fastcall Edit29Change(TObject *Sender);
	void __fastcall Panel27Click(TObject *Sender);
	void __fastcall Image38Click(TObject *Sender);
	void __fastcall Panel18Click(TObject *Sender);
	void __fastcall NumberBox9ChangeValue(TObject *Sender);
	void __fastcall Label43Click(TObject *Sender);
	void __fastcall Panel20Click(TObject *Sender);
	void __fastcall Image26Click(TObject *Sender);
	void __fastcall Panel25Click(TObject *Sender);
	void __fastcall Panel28MouseEnter(TObject *Sender);
	void __fastcall Panel28MouseLeave(TObject *Sender);
	void __fastcall Label133MouseEnter(TObject *Sender);
	void __fastcall Label138MouseEnter(TObject *Sender);
	void __fastcall Image42MouseEnter(TObject *Sender);
	void __fastcall Panel28Click(TObject *Sender);
	void __fastcall Panel22MouseEnter(TObject *Sender);
	void __fastcall Panel22MouseLeave(TObject *Sender);
	void __fastcall Panel24MouseEnter(TObject *Sender);
	void __fastcall Panel24MouseLeave(TObject *Sender);
	void __fastcall Panel23MouseEnter(TObject *Sender);
	void __fastcall Panel23MouseLeave(TObject *Sender);
	void __fastcall Panel25MouseEnter(TObject *Sender);
	void __fastcall Panel25MouseLeave(TObject *Sender);
	void __fastcall Panel27MouseEnter(TObject *Sender);
	void __fastcall Panel27MouseLeave(TObject *Sender);
	void __fastcall Panel8MouseEnter(TObject *Sender);
	void __fastcall Panel8MouseLeave(TObject *Sender);
	void __fastcall Panel9MouseEnter(TObject *Sender);
	void __fastcall Panel9MouseLeave(TObject *Sender);
	void __fastcall Panel11MouseEnter(TObject *Sender);
	void __fastcall Panel11MouseLeave(TObject *Sender);
	void __fastcall Panel12MouseLeave(TObject *Sender);
	void __fastcall Panel12MouseEnter(TObject *Sender);
	void __fastcall Panel10MouseEnter(TObject *Sender);
	void __fastcall Panel10MouseLeave(TObject *Sender);
	void __fastcall Panel26MouseEnter(TObject *Sender);
	void __fastcall Panel26MouseLeave(TObject *Sender);
	void __fastcall Panel18MouseEnter(TObject *Sender);
	void __fastcall Panel18MouseLeave(TObject *Sender);
	void __fastcall Panel19MouseEnter(TObject *Sender);
	void __fastcall Panel19MouseLeave(TObject *Sender);
	void __fastcall Panel20MouseEnter(TObject *Sender);
	void __fastcall Panel20MouseLeave(TObject *Sender);
	void __fastcall Panel21MouseEnter(TObject *Sender);
	void __fastcall Panel21MouseLeave(TObject *Sender);
	void __fastcall Panel13MouseEnter(TObject *Sender);
	void __fastcall Panel13MouseLeave(TObject *Sender);
	void __fastcall Panel15MouseEnter(TObject *Sender);
	void __fastcall Panel15MouseLeave(TObject *Sender);
	void __fastcall Panel14MouseEnter(TObject *Sender);
	void __fastcall Panel14MouseLeave(TObject *Sender);
	void __fastcall Panel16MouseEnter(TObject *Sender);
	void __fastcall Panel16MouseLeave(TObject *Sender);
	void __fastcall Panel17MouseLeave(TObject *Sender);
	void __fastcall Panel17MouseEnter(TObject *Sender);
	void __fastcall Panel29MouseEnter(TObject *Sender);
	void __fastcall Panel29MouseLeave(TObject *Sender);
	void __fastcall Panel30MouseEnter(TObject *Sender);
	void __fastcall Panel30MouseLeave(TObject *Sender);
	void __fastcall Image46MouseEnter(TObject *Sender);
	void __fastcall Image46MouseLeave(TObject *Sender);
	void __fastcall Panel33Click(TObject *Sender);
	void __fastcall Panel34Click(TObject *Sender);
	void __fastcall Image48MouseEnter(TObject *Sender);
	void __fastcall Image48MouseLeave(TObject *Sender);
	void __fastcall Panel31Click(TObject *Sender);
	void __fastcall Panel38Click(TObject *Sender);
	void __fastcall Panel35Click(TObject *Sender);
	void __fastcall Image52Click(TObject *Sender);
	void __fastcall Image51Click(TObject *Sender);
	void __fastcall Panel13Click(TObject *Sender);
	void __fastcall Edit54Change(TObject *Sender);
	void __fastcall Panel14Click(TObject *Sender);
	void __fastcall Panel40Click(TObject *Sender);
	void __fastcall Edit64Change(TObject *Sender);
	void __fastcall Image56Click(TObject *Sender);
	void __fastcall Image57Click(TObject *Sender);
	void __fastcall Panel15Click(TObject *Sender);
	void __fastcall Panel40MouseEnter(TObject *Sender);
	void __fastcall Panel40MouseLeave(TObject *Sender);
	void __fastcall Image58Click(TObject *Sender);
	void __fastcall Image54Click(TObject *Sender);
	void __fastcall Panel41MouseEnter(TObject *Sender);
	void __fastcall Panel41MouseLeave(TObject *Sender);
	void __fastcall Panel41Click(TObject *Sender);
	void __fastcall Image31Click(TObject *Sender);
	void __fastcall Image60Click(TObject *Sender);
	void __fastcall Panel26Click(TObject *Sender);
	void __fastcall Image61Click(TObject *Sender);
	void __fastcall Image33Click(TObject *Sender);
	void __fastcall Edit75Change(TObject *Sender);
	void __fastcall NumberBox11Change(TObject *Sender);
	void __fastcall Image35Click(TObject *Sender);
	void __fastcall Edit77Change(TObject *Sender);
	void __fastcall ComboBoxEx1Select(TObject *Sender);
	void __fastcall Panel33MouseEnter(TObject *Sender);
	void __fastcall Panel33MouseLeave(TObject *Sender);
	void __fastcall Panel34MouseEnter(TObject *Sender);
	void __fastcall Panel34MouseLeave(TObject *Sender);
	void __fastcall Panel35MouseEnter(TObject *Sender);
	void __fastcall Panel35MouseLeave(TObject *Sender);
	void __fastcall Edit81Change(TObject *Sender);
	void __fastcall Image62Click(TObject *Sender);
	void __fastcall Image63Click(TObject *Sender);
	void __fastcall Image53Click(TObject *Sender);
	void __fastcall Edit91Change(TObject *Sender);
	void __fastcall NumberBox13Change(TObject *Sender);
	void __fastcall Image28Click(TObject *Sender);
	void __fastcall Image29Click(TObject *Sender);
	void __fastcall Panel16Click(TObject *Sender);
	void __fastcall Panel29Click(TObject *Sender);
	void __fastcall Image64Click(TObject *Sender);
	void __fastcall Image66Click(TObject *Sender);
	void __fastcall Edit101Change(TObject *Sender);
	void __fastcall ComboBoxEx2Select(TObject *Sender);
	void __fastcall Panel17Click(TObject *Sender);
	void __fastcall NumberBox31ChangeValue(TObject *Sender);
	void __fastcall Image68Click(TObject *Sender);
	void __fastcall Image67Click(TObject *Sender);
	void __fastcall Panel19Click(TObject *Sender);
	void __fastcall NumberBox34Change(TObject *Sender);
	void __fastcall Panel21Click(TObject *Sender);
	void __fastcall Image70Click(TObject *Sender);
	void __fastcall Image69Click(TObject *Sender);
	void __fastcall Image71Click(TObject *Sender);
	void __fastcall Panel30Click(TObject *Sender);
	void __fastcall Image72Click(TObject *Sender);
	void __fastcall Panel42Click(TObject *Sender);
	void __fastcall Panel42MouseEnter(TObject *Sender);
	void __fastcall Panel42MouseLeave(TObject *Sender);
	void __fastcall Image40Click(TObject *Sender);
	void __fastcall Image65Click(TObject *Sender);
	void __fastcall Image75Click(TObject *Sender);
	void __fastcall Image76Click(TObject *Sender);
	void __fastcall Panel31MouseEnter(TObject *Sender);
	void __fastcall Panel31MouseLeave(TObject *Sender);
	void __fastcall Panel38MouseEnter(TObject *Sender);
	void __fastcall Panel38MouseLeave(TObject *Sender);
	void __fastcall Label316MouseEnter(TObject *Sender);
	void __fastcall Label316MouseLeave(TObject *Sender);
	void __fastcall Label317MouseEnter(TObject *Sender);
	void __fastcall Label317MouseLeave(TObject *Sender);
	void __fastcall Label316Click(TObject *Sender);
	void __fastcall Label317Click(TObject *Sender);
	void __fastcall Image82Click(TObject *Sender);
	void __fastcall Image83Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);





private:	// User declarations
public:
	Biblio b;
	String Acces="";
	Statistique s;
	  //Important XXXXXXXX
		// User declarations
	__fastcall TForm1(TComponent* Owner);
};

extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
