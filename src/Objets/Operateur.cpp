
class Operateur
{
public:
    TokenType m_cle;
    NoeudType m_token;
    int m_priorite;
    int m_assoDroite;
    Operateur(TokenType cle, NoeudType token, int priorite, int assoDroite) : m_cle(cle), m_token(token), m_priorite(priorite), m_assoDroite(assoDroite) {}
    Operateur(){}
};

std::vector<Operateur> listeOperateurs;

void setListeOperateurs() {
    listeOperateurs.push_back(Operateur(tokenEgal, noeudAffect, 1, 1));
    listeOperateurs.push_back(Operateur(tokenPlus, noeudAddition, 6, 0));
    listeOperateurs.push_back(Operateur(tokenMoins, noeudSoustraction, 6, 0));
    listeOperateurs.push_back(Operateur(tokenOU, noeudOU, 2, 0));
    listeOperateurs.push_back(Operateur(tokenET, noeudET, 3, 0));
    listeOperateurs.push_back(Operateur(tokenDoubleEgale, noeudDoubleEgale, 4, 0));
    listeOperateurs.push_back(Operateur(tokenDifferend, noeudDifferent, 4, 0));
    listeOperateurs.push_back(Operateur(tokenInf, noeudInf, 5, 0));
    listeOperateurs.push_back(Operateur(tokenSup, noeudSup, 5, 0));
    listeOperateurs.push_back(Operateur(tokenSupEgal, noeudSupEgale, 5, 0));
    listeOperateurs.push_back(Operateur(tokenInfEgal, noeudInfEgale, 5, 0));
    listeOperateurs.push_back(Operateur(tokenEtoile, noeudMult, 7, 0));
    listeOperateurs.push_back(Operateur(tokenSlash, noeudDiv, 7, 0));
}

