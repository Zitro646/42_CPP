/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:25:59 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/28 12:36:58 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE
# define MATERIA_SOURCE

#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource: public IMateriaSource
{
       private:
              int learn_tam;
              AMateria *learned[4];
       public:
              MateriaSource();
              MateriaSource(const MateriaSource &source);
              ~MateriaSource();
              MateriaSource operator=(const MateriaSource &source);
              void learnMateria(AMateria*);
              AMateria* createMateria(std::string const & type);
};

#endif