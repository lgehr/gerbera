/*MT*
    
    MediaTomb - http://www.mediatomb.org/
    
    base_stack.h - this file is part of MediaTomb.
    
    Copyright (C) 2005 Gena Batyan <bgeradz@mediatomb.org>,
                       Sergey Bostandzhyan <jin@mediatomb.org>
    Copyright (C) 2006 Gena Batyan <bgeradz@mediatomb.org>,
                       Sergey Bostandzhyan <jin@mediatomb.org>,
                       Leonhard Wimmer <leo@mediatomb.org>
    
    MediaTomb is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2
    as published by the Free Software Foundation.
    
    MediaTomb is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    version 2 along with MediaTomb; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
    
    $Id$
*/

/// \file base_stack.h

#ifndef __ZMMF_BASE_STACK_H__
#define __ZMMF_BASE_STACK_H__

#include "zmm/zmm.h"
#include "memory.h"

namespace zmm
{
    
    template <typename T>
    class BaseStack : public Object
    {
    public:
        BaseStack(int initialCapacity, T emptyType) : Object()
        {
            capacity = initialCapacity;
            this->emptyType = emptyType;
            count = 0;
            data = (T *)MALLOC(capacity * sizeof(T));
        }
        
        ~BaseStack()
        {
            FREE(this->data);
        }
        
        inline int getCapacity()
        {
            return capacity;
        }
        
        inline int size()
        {
            return count;
        }
        
        inline bool isEmpty()
        {
            return (count == 0);
        }
        
        inline void push(T element)
        {
            if (count == capacity)
                resize(count + 1);
            data[count++] = element;
        }
        
        void resize(int requiredSize)
        {
            if(requiredSize > capacity)
            {
#ifdef LOG_TOMBDEBUG
                int oldCapacity = capacity;
#endif
                capacity = count + (count / 2);
                if(requiredSize > capacity)
                    capacity = requiredSize;
                data = (T *)REALLOC(data, capacity * sizeof(T));
                log_debug("resizing %d -> %d\n", oldCapacity, capacity);
            }
        }
        
        inline T pop()
        {
            if (this->count < 1)
                return emptyType;
            return this->data[--this->count];
        }
    protected:
        T *data;
        T emptyType;
        int capacity;
        int count;
    };
}

#endif // __ZMMF_BASE_STACK_H__

