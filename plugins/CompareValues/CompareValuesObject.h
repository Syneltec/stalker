/*
 *  Qtstalker stock charter
 *
 *  Copyright (C) 2001-2010 Stefan S. Stratigakos
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
 *  USA.
 */

#ifndef PLUGIN_COMPARE_VALUES_OBJECT_HPP
#define PLUGIN_COMPARE_VALUES_OBJECT_HPP

#include "Object.h"
#include "CompareValuesDialog.h"
#include "Bars.h"

class CompareValuesObject : public Object
{
  Q_OBJECT

  public:
    CompareValuesObject (QString profile, QString name);
    ~CompareValuesObject ();
    void clear ();
    int update (ObjectCommand *);
    int dialog (ObjectCommand *);
    int output (ObjectCommand *);
    int load (ObjectCommand *);
    int save (ObjectCommand *);
    int outputKeys (ObjectCommand *);
    int value (ObjectCommand *);
    int startEndIndex (ObjectCommand *);
    
  public slots:    
    int message (ObjectCommand *);
    void dialogDone (void *);
    
  private:
    QStringList _commandList;
    QStringList _opList;
    Bars *_bars;
    QString _inputObject;
    QString _input2Object;
    QString _inputKey;
    QString _input2Key;
    int _offset;
    int _offset2;
    int _op;
    bool _constant;
    double _constantValue;
    QString _outputKey;
};

#endif
