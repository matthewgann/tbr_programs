<?php

/** 
* Implementation of hook_views_data
*/

function  tbr_programs_views_data() {
   error_log("Loading views");
   $data['programs']['table']['group'] = t('TBR Programs Data');
   $data['programs']['table']['base'] = array(
      'field' => 'id',
      'title' => t('programs'),
      'help' => t('Autoincremented ID field, to enable views integration'),
      'database' => 'tbr_data_programs',
      'weight' => -10,
   );

   $data['programs']['id'] = array(
      'title' => t('Program Data Web ID'),
      'help' => t('Program Data ID used for web admin purposes only'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['programs']['institution'] = array(
      'title' => t('Program Data Institution'),
      'help' => t('Program Data Institution'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
    
   $data['programs']['institution_name'] = array(
      'title' => t('Program Data Institution Name'),
      'help' => t('Program Data Institution Name'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
    
   $data['programs']['cip'] = array(
      'title' => t('Program Data CIP Code'),
      'help' => t('Program Data CIP Code'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
       $data['programs']['name'] = array(
      'title' => t('Program Data Program Name'),
      'help' => t('Program Data Program Name'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
   $data['programs']['degree'] = array(
      'title' => t('Program Data Degree'),
      'help' => t('Program Data Degree'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
   $data['programs']['system'] = array(
      'title' => t('Program Data System'),
      'help' => t('Program Data System'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
    $data['programs']['level'] = array(
      'title' => t('Program Data Degree Level'),
      'help' => t('Program Data Degree Level'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
    $data['programs']['definition'] = array(
      'title' => t('Program Data Definition'),
      'help' => t('Program Data Definition'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   return $data;

}
