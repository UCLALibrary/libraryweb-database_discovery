<?php
/**
 * @file
 * database_discovery.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function database_discovery_taxonomy_default_vocabularies() {
  return array(
    'database_resource_type' => array(
      'name' => 'Database Resource Type',
      'machine_name' => 'database_resource_type',
      'description' => 'Database Resource Type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
