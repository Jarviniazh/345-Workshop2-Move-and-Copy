#ifndef SENECA_PROTEINDATABASE_H
#define SENECA_PROTEINDATABASE_H

namespace seneca
{
	class ProteinDatabase
	{
		std::string* m_protein{};
		size_t m_numStored {};
	public:
		ProteinDatabase(){};
		ProteinDatabase(const std::string);
		//Rule of 3
		ProteinDatabase(const ProteinDatabase&);
		~ProteinDatabase();
		ProteinDatabase& operator=(const ProteinDatabase&);

		//Move constructor
		ProteinDatabase(ProteinDatabase&&);
		//Move assignment operator
		ProteinDatabase& operator=(ProteinDatabase&&);
		//a query that returns the number of protein sequences stored in the current object.
		size_t size() const;
		//a query that returns a copy of the protein sequence at the index received as the function parameter
		std::string operator[](size_t) const;
	};

}


#endif
