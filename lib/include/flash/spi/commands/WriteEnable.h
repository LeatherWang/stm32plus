/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013,2014 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */

#pragma once


namespace stm32plus {
  namespace spiflash {


    /**
     * Write enable command implementation
     */

    template<class TSpi,uint8_t TOpCode=CMD_WRITE_ENABLE>
    struct WriteEnable : Command<TSpi> {

      /**
       * Provide a writeEnable() function for the derived class
       */

      bool writeEnable() const {
        return this->writeCommand(TOpCode);
      }
    };
  }
}
